#include <stdio.h>

struct SensorData
{
    float time;
    double probability;
};
struct Sensor
{
    int id;
    double threshold;
    float data[3001];
    int object_detection[3001];
} s1, s2;

int main()
{
    
    FILE* datei1 = fopen("sensor1.txt", "r");
    if (datei1 == NULL)
    {
        printf("Error");
    }

    FILE* datei2 = fopen("sensor2.txt", "r");
    if (datei2 == NULL)
    {
        printf("Error");
    }
    int l = 0;
    int i = 1;
    float g = 0;
    float h = 0.00;
    while ((l = fgetc(datei1)) != EOF)
    {
        if (i <= 500)
        {
            if (g == 7)
            {
                s1.object_detection[i-1] = l;
            }
            g++;
            if (g == 11)
            {
                g = 0;
                h = h + 0.02;
                i++;
            }
        }
        else if (i > 500)
        {
            if (g == 8)
            {
                s1.object_detection[i-1] = l;
            }
            g++;
            if (g == 12)
            {
                g = 0;
                s1.data[i] = h;
                h = h + 0.02f;
                i++;
            }
        }
    }
    for (int k = 0; k < 3000; k++)
    {
        if (s1.object_detection[k]< 56)
        {
            s1.object_detection[k] = 0;
        }
        else if (s1.object_detection[k] >= 56)
        {
            s1.object_detection[k] = 1;
        }
    }
    printf("Sensor 1 detections: ");
    int min = 0;
    for (int k = 2; k<3000; k++)
    {
        if (s1.object_detection[k-1] == 1 && s1.object_detection[k-2] == 0)
        {
            printf("Start: %.2f ", s1.data[k]);
            g = 1;
        }
        else if (s1.object_detection[k] == 0 && s1.object_detection[k-1] == 1 && g == 1)
        {
            printf("End: %.2f ", s1.data[k]);
        }
    }
    printf("\n");

    l = 0;
    i = 1;
    g = 0;
    h = 0.00;
    while ((l = fgetc(datei2)) != EOF)
    {
        if (i <= 500)
        {
            if (g == 7)
            {
                s2.object_detection[i-1] = l;
            }
            g++;
            if (g == 11)
            {
                g = 0;
                h = h + 0.02;
                i++;
            }
        }
        else if (i > 500)
        {
            if (g == 8)
            {
                s2.object_detection[i-1] = l;
            }
            g++;
            if (g == 12)
            {
                g = 0;
                s2.data[i] = h;
                h = h + 0.02f;
                i++;
            }
        }
    }
    for (int k = 0; k < 3000; k++)
    {
        if (s2.object_detection[k]< 56)
        {
            s2.object_detection[k] = 0;
        }
        else if (s2.object_detection[k] >= 56)
        {
            s2.object_detection[k] = 1;
        }
    }
    printf("Sensor 2 detections: ");
    for (int k = 2; k<=3000; k++)
    {
        if (s2.object_detection[k-1] == 1 && s2.object_detection[k-2] == 0)
        {
            printf("Start: %.2f ", s2.data[k]);
            g = 1;
        }
        else if (s2.object_detection[k] == 0 && s2.object_detection[k-1] == 1 && g == 1)
        {
            printf("End: %.2f ", s2.data[k]);
        }
    }
    int x = 0;
    printf("\nFused signal (both sensors): ");

    for (int k = 0; k < 3000; k++) {

        int zwischenstand = (s1.object_detection[k] == 1 && s2.object_detection[k-1] == 1);
        
     
        if (zwischenstand == 1 && x == 0) {
 
            printf("Start: %.2f ", s1.data[k]);
            x = 1;
        } 
        else if (zwischenstand == 0 && x == 1) {
  
            printf("End: %.2f ", s1.data[k]);
            x = 0;
        }
}

    fclose(datei1);
    fclose(datei2);
}
#include <stdio.h>

int main()
{
    char Klasse[20];
    int Crew;
    int Missionstage;
    long Kilometer = 40000000000;
    float Range =  302099.9821;

    printf("\nGeben Sie den Namen der Klasse an: ");
    scanf(" %19s",Klasse);
    printf("\nGeben Sie die Anzahl der Teammitglieder an: ");
    scanf(" %d", &Crew);
    printf("\nGeben Sie die Anzahl der Missionstage an: ");
    scanf(" %d", &Missionstage);
    float anteil_c = (Kilometer/Missionstage)/24/60/60 /300000 *100;
    
    printf("\nName                        Value \n");
    printf("---------------------------------------\n");
    printf("Type:                       %s \n", Klasse);
    printf("Crew Count:                 %d \n", Crew);
    printf("Mission Days:               %d \n", Missionstage);
    printf("Distance Travelled (km)     %ld \n", Kilometer);
    printf("%% of Light-speed distance   %.2f \n", anteil_c);
    printf("Current Range (km)          %.2f \n", Range);

    return 0;
}
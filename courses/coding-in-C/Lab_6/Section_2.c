#include <stdio.h>

struct Car
{
    float fuel_level;
    float max_fuel_level;
    char model[100];
};

void refuel(float *p, float max, float add_fuel);

int main()
{
    struct Car c = {30, 60, "Mercedes"};
    float *p = &c.fuel_level;
    refuel(p, c.max_fuel_level, 40);

    printf("Im Tank befinden sich %.2fl", *p);

    return 0;
}

void refuel(float *p, float max, float add_fuel)
{
    if ((*p + add_fuel) < max)
    {
        *p = *p + add_fuel;
    }
    else
    {
        printf("Eine Menge von %.2f, past nicht mehr in den Tank, da er nur %.2f groß ist. \n", add_fuel, max);
    }
    
}

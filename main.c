#include <stdio.h>
#include <math.h>


float doMath(float distance, float consumption, float fuel, float costpergal, float totalfuelcost)
{
    float o = distance / consumption;
    totalfuelcost = o * costpergal;

    return totalfuelcost;
}

int main ()
{
    float distance;
    float consumption;
    float fuel;
    float costpergal;
    float totalfuelcost;

    printf("Lets calculate some gas. \n\nFirst off, make sure you have some stuff, \n\n\ncost per gal, \ndistance & fuel efficiency(consumption per mile)\n");

    printf("\n\n Give me your cost Per Gal: ");
    scanf("%f", &costpergal);
    printf("\n\n Give me your distance: ");
    scanf("%f", &distance);
    printf("\n\n Give me your consumption rate: ");
    scanf("%f", &consumption);
    float output = doMath(distance, consumption, fuel, costpergal, totalfuelcost);
    printf("bro jeez :%f", output);
    return 0;
}

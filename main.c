#include <stdio.h>
#include <math.h>


int doMath(int distance, int consumption, int fuel, int costpergal, int totalfuelcost)
{
    int o = distance / consumption;
    totalfuelcost = o * costpergal;

    return totalfuelcost;
}

int main ()
{
    int distance;
    int consumption;
    int fuel;
    int costpergal;
    int totalfuelcost;

    printf("Lets calculate some gas. \n\nFirst off, make sure you have some stuff, \n\n\ncost per gal, \ndistance & fuel efficiency(consumption per mile)\n");

    printf("\n\n Give me your cost Per Gal: ");
    scanf("%d", &costpergal);
    printf("\n\n Give me your distance: ");
    scanf("%d", &distance);
    printf("\n\n Give me your consumption rate: ");
    scanf("%d", &consumption);
    int output = doMath(distance, consumption, fuel, costpergal, totalfuelcost);

    return 0;
}

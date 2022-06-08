#include <stdio.h>
#include <math.h>


int doMath(int x, int y/*, int z*/, int g)
{
g = x y;

return g;
}

int main()
{
	int gasPricePerGal;
	int tripMiles;
	int fuelEfficiency;
	int output1;
	printf("Hello! would you like to calculate gas prices?\nPlease input the following;\nGas Price Per Gal(int)\nTrip Miles(int)\nFuel Efficiency\n");
	printf("Gas Price Per Gal (Please enter a integer): \n");
	scanf("%d", &gasPricePerGal);
	printf("You entered... %d", gasPricePerGal);
	printf("\n");
	printf("Trip Miles (Please enter a integer): \n");
	scanf("%d", &tripMiles);
	printf("You entered... %d", tripMiles);
	printf("\n");
	printf("Fuel Efficiency (Please enter a integer): \n");
	scanf("%d", &fuelEfficiency);
	printf("You entered... %d", fuelEfficiency);
	printf("\n");
	doMath(gasPricePerGal, tripMiles, &output1);
	printf("gas price per gal & trip miles: %d", output1);
	printf("\n");

	return 0;
}


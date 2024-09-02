#include<stdio.h>

main(){
	int fuel_effi;
	
	printf("Enter the Car Fuel Average per litre : ");
	scanf("%d", &fuel_effi);
	int distanceA = 850;
	int distanceB = 420;
	int priceA = 115;
	int priceB = 120;
	
	float tripX_price = (distanceA * priceA)/fuel_effi;
	float tripY_price = (distanceB * priceB)/fuel_effi;
	
	float totalCost = tripX_price + tripY_price;
	
	printf("The total cost of fuel of starting point\nto city-X 850KM and city-X to city-Y 420KM is :%f",totalCost);
	return 0;
}

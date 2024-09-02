#include<stdio.h>

int main(){
	int xa,xb,ya,yb,chngey,chngex;
	float slope;
	printf("Enter x1 value :");
	scanf("%d",&xa);
	printf("Enter x2 value :");
	scanf("%d",&xb);
	printf("Enter y1 value :");
	scanf("%d",&ya);
	printf("Enter y2 value :");
	scanf("%d",&yb);
	
	chngey = yb-ya;
	chngex = xb-xa;
	slope = chngey/chngex;
//	float slope = (()/(xb-xa));
	printf("slope is: %f",slope);
}

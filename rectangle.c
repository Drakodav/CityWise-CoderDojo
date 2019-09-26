#include<stdio.h>
#include<math.h>

int main()
{
	
	float d, l, h, area, volume, temp, diag;
	
	printf("This program will calculate the area and volume of a cuboid\n");
	
	printf("\nEnter the Lenght of the cuboid : ");
	scanf("%f", &l);
	
	printf("\nEnter the Height of the cuboid : ");
	scanf("%f", &h);
	
	printf("\nEnter the Depth of the cuboid : ");
	scanf("%f", &d);
	
	printf("\n\nDepth:%.2f  Lenght:%.2f  Height:%.2f", d, l, h);
	
	//calculate the volume
	volume = d * l * h ;
	
	printf("\nVolume : %.2f cm^3", volume);
	
	//calculate the area 
	area = ( (l * h) * 4 ) + ( ( d * h ) * 2 );
	
	printf("\narea : %.2f cm^2", area);
	
	//calculate diagonal
	diag = sqrt( (l*l) + (d*d) + (h*h) );
	
	printf("\ndiagonal : %.2f cm", diag);
	
}

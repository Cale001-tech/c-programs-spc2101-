#include<stdio.h>
#define PI 3.142

int main() {
	double radius, height, volume, surface_area;
	
 //prompt user for input
 printf("enter the radius of the cylinder:");
 scanf("%1f", &radius);
 
 printf("enter the height of the cylinder:");
 scanf("%1f", &height);
 
  //calculate volume and surface area
  volume = PI * radius * radius * height;
  surface_area = 2 * PI * radius * radius + 2 * PI * radius * height;
  
  //display results
  printf("volume of the cylinder: %.21f\n",volume);
  
  printf("surfacearea of the cylinder:%.21f\n", surface_area);
  
  return 0;
  

}

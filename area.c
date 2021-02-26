#include<stdio.h>
#include<math.h>


int main() {
	float area,breadth,length,radius,side,circle,rect,sq;
	
	printf("Enter the radius of the circle.\n");
	scanf("%f", &radius);
	printf("\n\n\n");
	printf("Enter the length of the rectangle.\n");
	scanf("%f", &length);
	printf("Enter the breadth of the rectangle.\n");
	scanf("%f", &breadth);
	printf("\n\n\n");
	printf("Enter the side of the square. \n");
	scanf("%f", &side);
	
	circle = 3.14 * pow(radius, 2);
	rect = length * breadth;
	sq = pow(side, 2);
	
	printf("The area of the circle = %f\n",circle);
	printf("The area of the rectangle = %f\n",rect);
	printf("The area of the square = %f\n",sq);
	
	return 0;
}

#include<stdio.h>
main()
{
	float celsius,fahrenheit;
	printf("Enter the Temperature");
	scanf("%f",&celsius);
	fahrenheit = (celsius * 9 / 5) + 32;
	printf("%f",fahrenheit);
}

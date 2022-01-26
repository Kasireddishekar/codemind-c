#include<stdio.h>
main()
{
	 float fahrenheit,celsius;
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5/9;
	printf("%.2f",celsius);
}
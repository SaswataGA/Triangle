#include<stdio.h>
int main()
{
    float b,h,Area;
    printf("Enter the base of the triangle :");
    scanf("%f",&b);
    printf("Enter the height of the triangle :");
    scanf("%f",&h);
    Area=(b*h)/2;
    printf("Area of the triangle is %.2f\n",Area);
}

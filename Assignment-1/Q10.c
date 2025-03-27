// 10. WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.

// Expected output format - "Area of circle is A having the radius R". Replace A with area & R with radius.

#include<stdio.h>
int main(){
    float r;
    printf("Enter radius:");
    scanf("%f",&r);
    printf("Area of circle is %f having the radius %f.",3.14*r*r,r);
    return 0;
}
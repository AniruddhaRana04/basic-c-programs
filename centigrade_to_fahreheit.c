#include<stdio.h>   // Header file for standard input and output
#include<conio.h>   // Header file for getch() function

void main(){
    float f,c;  // Declaring two float variables
    //clrscr();   // Clearing the screen in Turbo C++
    printf("Enter temperature in Centigrade: ");  // Asking user to enter temperature in Centigrade
    scanf("%f",&c); // Taking temperature in Centigrade as input
    f = (c*9/5)+32; // Converting Centigrade to Fahrenheit
    printf("Temperature in Fahrenheit: %.2f\n",f);    // Printing temperature in Fahrenheit %.2f mane upto 2 decimal places
    getch();
}
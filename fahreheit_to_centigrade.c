#include<stdio.h>   // Header file for standard input and output
#include<conio.h>   // Header file for getch() function

void main(){
    float f,c;  // Declaring two float variables
    //clrscr();   // Clearing the screen in Turbo C++
    printf("Enter temperature in Fahrenheit: ");  // Asking user to enter temperature in Fahrenheit
    scanf("%f",&f); // Taking temperature in Fahrenheit as input
    c = (f-32)*5/9; // Converting Fahrenheit to Centigrade
    printf("Temperature in Centigrade: %.2f\n",c);    // Printing temperature in Centigrade %.2f mane upto 2 decimal places
    getch();
}
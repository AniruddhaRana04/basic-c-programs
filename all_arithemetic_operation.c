#include<stdio.h>   // Header file for standard input and output
#include<conio.h>   // Header file for getch() function

void main(){
    int a,b;    // Declaring two integer variables
    //clrscr();   // Clearing the screen in Turbo C++
    printf("Enter two numbers: ");  // Asking user to enter two numbers
    scanf("%d %d",&a,&b);   // Taking two numbers as input
    printf("Addition: %d\n",a+b);   // Printing the sum of two numbers
    printf("Subtraction: %d\n",a-b);    // Printing the difference of two numbers
    printf("Multiplication: %d\n",a*b); // Printing the product of two numbers
    printf("Division: %d\n",a/b);   // Printing the division of two numbers
    printf("Modulus: %d\n",a%b);    // Printing the modulus of two numbers
    getch();
}
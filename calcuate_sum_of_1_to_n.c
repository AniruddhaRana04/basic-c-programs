#include<stdio.h>   // Header file for standard input and output
#include<conio.h>   // Header file for getch() function

void main(){
    int n,sum;  // Declaring an integer variable
    //clrscr();   // Clearing the screen in Turbo C++
    printf("Enter a number: ");    // Asking user to enter a number
    scanf("%d",&n); // Taking a number as input
    sum = n*(n+1)/2;    // Calculating the sum of 1 to n    
    printf("Sum of 1 to %d: %d\n",n,sum);    // Printing the sum of 1 to n  
    getch();
}
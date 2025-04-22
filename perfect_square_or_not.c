#include<stdio.h>   // Header file for standard input and output
#include<conio.h>   // Header file for getch() function
#include<math.h>    // Header file for sqrt() functions

void main(){
    int n,m,i;    // Declaring two integer variables
    //clrscr();   // Clearing the screen in Turbo C++
    printf("Enter a number: ");    // Asking user to enter a number
    scanf("%d",&n); // Taking a number as input
    i = sqrt(n);   // Finding the square root of m
    if(i*i==n){ // If square of i is equal to m then m is perfect square
        printf("%d is a perfect square.",n);   // Printing n is a perfect square
    }
    else{  // If square of i is not equal to m then m is not perfect square
        printf("%d is not a perfect square.",n);    // Printing n is not a perfect square
    }
    getch();
}
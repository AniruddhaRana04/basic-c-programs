//  Greatest of two numbers using conditional operator

#include<stdio.h>   // Header file for standard input and output
#include<conio.h>   // Header file for getch() function

void main(){
    int a,b,largest;    // Declaring three integer variables    
    //clrscr();   // Clearing the screen in Turbo C++
    printf("Enter two numbers: ");  // Asking user to enter two numbers
    scanf("%d %d",&a,&b);   // Taking two numbers as input
    largest = a>b?a:b;  // Finding the largest number among two numbers using ternary operator mane if a>b then largest = a else largest = b
    printf("Largest number: %d.",largest);    // Printing the largest number
    getch();
}

//  Check whether a number is even or odd using conditional operator

// #include<stdio.h>   // Header file for standard input and output
// #include<conio.h>   // Header file for getch() function

// void main(){
//     int n;  // Declaring an integer variable
//     //clrscr();   // Clearing the screen in Turbo C++
//     printf("Enter a number: ");    // Asking user to enter a number
//     scanf("%d",&n); // Taking a number as input
//     (n%2==0)?printf("%d is even.",n):printf("%d is odd.",n);    // If n is divisible by 2 then it is even else it is odd
//     getch();
// }
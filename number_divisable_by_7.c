#include<stdio.h>   // Header file for standard input and output
#include<conio.h>   // Header file for getch() function

void main(){
    int n;  // Declaring an integer variable
    //clrscr();   // Clearing the screen in Turbo C++
    printf("Enter a number: ");    // Asking user to enter a number
    scanf("%d",&n); // Taking a number as input
    if(n%7==0){ // If n is divisible by 7 then it is divisible by 7
        printf("%d is divisible by 7.",n);   // Printing n is divisible by 7
    }else{  // If n is not divisible by 7 then it is not divisible by 7
        printf("%d is not divisible by 7.",n);    // Printing n is not divisible by 7
    }
    getch();
}
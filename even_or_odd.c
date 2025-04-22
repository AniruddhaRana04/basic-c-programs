#include<stdio.h>   // Header file for standard input and output
#include<conio.h>   // Header file for getch() function

void main(){
    int n;  // Declaring an integer variable
    //clrscr();   // Clearing the screen in Turbo C++
    printf("Enter a number: ");    // Asking user to enter a number
    scanf("%d",&n); // Taking a number as input
    if(n%2==0){ // If n is divisible by 2 then it is even
        printf("%d is even\n",n);   // Printing n is even
    }else{  // If n is not divisible by 2 then it is odd
        printf("%d is odd\n",n);    // Printing n is odd
    }
    getch();
}
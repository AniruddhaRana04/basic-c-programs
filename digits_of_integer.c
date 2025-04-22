#include<stdio.h>   // Header file for standard input and output
#include<conio.h>   // Header file for getch() function

void main(){
    int n,count = 0;    // Declaring two integer variables
    //clrscr();   // Clearing the screen in Turbo C++
    printf("Enter a number: ");    // Asking user to enter a number
    scanf("%d",&n); // Taking a number as input
    while(n!=0){    // Loop will run until n is not equal to 0
        n = n/10;   // Dividing n by 10
        count++;    // Incrementing count by 1
    }
    printf("Number of digits: %d\n",count);    // Printing the number of digits
    getch();
}
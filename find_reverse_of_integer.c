#include<stdio.h>   // Header file for standard input and output
#include<conio.h>   // Header file for getch() function

void main(){
    int n,reverse = 0,r;  // Declaring two integer variables
    //clrscr();   // Clearing the screen in Turbo C++
    printf("Enter a number: ");    // Asking user to enter a number
    scanf("%d",&n); // Taking a number as input
    while(n!=0){    // Loop will run until n is not equal to 0
        r = n % 10; // Finding the remainder when n is divided by 10
        reverse = reverse*10 + r;    // Reversing the number
        n = n/10;   // Dividing n by 10
    }
    printf("Reverse of the number: %d\n",reverse);    // Printing the reverse of the number
    getch();
}

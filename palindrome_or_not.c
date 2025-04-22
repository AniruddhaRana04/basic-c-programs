#include<stdio.h>   // Header file for standard input and output
#include<conio.h>   // Header file for getch() function

void main(){
    int n,reverse = 0,temp,r;  // Declaring two integer variables
    //clrscr();   // Clearing the screen in Turbo C++
    printf("Enter a number: ");    // Asking user to enter a number
    scanf("%d",&n); // Taking a number as input
    temp = n;   // Storing the value of n in temp
    while(n!=0){    // Loop will run until n is not equal to 0
        r = n % 10; // Finding the remainder when n is divided by 10
        reverse = reverse*10 + r;    // Reversing the number
        n = n/10;   // Dividing n by 10
    }
    if(temp==reverse){  // If temp is equal to reverse then n is palindrome
        printf("%d is a palindrome.",temp);   // Printing n is a palindrome
    }
    else{  // If temp is not equal to reverse then n is not palindrome
        printf("%d is not a palindrome.",temp);    // Printing n is not a palindrome
    }
    getch();
}
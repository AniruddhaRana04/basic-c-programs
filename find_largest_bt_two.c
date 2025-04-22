#include<stdio.h>   // Header file for standard input and output
#include<conio.h>   // Header file for getch() function

// void main(){
//     int a,b,largest;    // Declaring three integer variables    
//     //clrscr();   // Clearing the screen in Turbo C++
//     printf("Enter two numbers: ");  // Asking user to enter two numbers
//     scanf("%d %d",&a,&b);   // Taking two numbers as input
//     largest = a>b?a:b;  // Finding the largest number among two numbers using ternary operator mane if a>b then largest = a else largest = b
//     printf("Largest number: %d\n",largest);    // Printing the largest number
//     getch();
// }
void main(){
    int a,b,largest;    // Declaring three integer variables    
    //clrscr();   // Clearing the screen in Turbo C++
    printf("Enter two numbers: ");  // Asking user to enter two numbers
    scanf("%d %d",&a,&b);   // Taking two numbers as input
    largest = a;
    if(b>largest){  // If b is greater than largest then largest = b
        largest = b;
    }
    printf("Largest number: %d\n",largest);    // Printing the largest number
    getch();
}
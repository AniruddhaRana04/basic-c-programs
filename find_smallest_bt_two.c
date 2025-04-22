#include<stdio.h>   // Header file for standard input and output
#include<conio.h>   // Header file for getch() function

void main(){
    int a,b,smallest;    // Declaring three integer variables    
    //clrscr();   // Clearing the screen in Turbo C++
    printf("Enter two numbers: ");  // Asking user to enter two numbers
    scanf("%d %d",&a,&b);   // Taking two numbers as input
    smallest = a<b?a:b;  // Finding the largest number among two numbers using ternary operator mane if a>b then largest = a else largest = b
    printf("Smallest number: %d\n",smallest);    // Printing the largest number
    getch();
}
// void main(){
//     int a,b,smallest;    // Declaring three integer variables    
//     //clrscr();   // Clearing the screen in Turbo C++
//     printf("Enter two numbers: ");  // Asking user to enter two numbers
//     scanf("%d %d",&a,&b);   // Taking two numbers as input
//     smallest = a;
//     if(b<smallest){  // If b is greater than largest then largest = b
//         smallest = b;
//     }
//     printf("Smallest number: %d\n",smallest);    // Printing the largest number
//     getch();
// }
#include<stdio.h>   // stdio.h library is used for printf() and scanf() functions
#include<conio.h>   // conio.h library is used for getch() function
#include<math.h> // math.h library is used for sqrt() function
void main(){
    int n,flag=0;   // variable declaration
    printf("Enter a number: "); // user input
    scanf("%d",&n); // user input
    for(int i=2;i<=sqrt(n);i++){    // sqrt(n) is used to reduce the time complexity
        if(n%i==0){ // if n is divisible by i
            flag=1; // flag ea 1 assign korlam
            break;  // eta use korle loop break hobe
        }
    }
    if(n<2){    // if n is less than 2 then it is not a prime number
        printf("The number is not a prime number.");    // output
    }
    else{   // if n is greater than 2
        if(flag==0){    // if flag is 0 then it is a prime number
            printf("The number is a prime number.");    
        }
        else{   // if flag is 1 then it is not a prime number
            printf("The number is not a prime number.");    // output
        }

    }
    getch();
}
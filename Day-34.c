#include<stdio.h>

int main (){

// for loop in c revise 
// Factorial number 

int n,fact = 1;
printf("enter any positive number : ");
scanf("%d",&n);

for (int i = 1;i<=n;i++){
    fact = fact * i;
}
printf("Factorial of number is %d\n",fact);







    return 0;
}

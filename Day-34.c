#include<stdio.h>

int main (){

// for loop in c revise 
// Factorial number 

int n,fact = 1;
printf("enter anypositive number : ");
scanf("%d",n);

for (int i = 1;i<=n;i++){
    fact = fact * i;
}
printf("%d\n",fact);







    return 0;
}
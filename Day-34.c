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




//  Maths in C

int result = abs(-35);
printf("%d\n",result);


int rot = sqrt(49);
printf("%d\n",rot);
    





// power in c

int x,y,power;
printf("Enter the number : ");
scanf("%d",&x);
printf("Enter the power : ");
scanf("%d",&y);

power = pow(x,y);
printf("Power is %d\n", power);





// log,log10,sin,cos,tan,exp

int n,results;
printf("enter the number : ");
scanf("%d",&n);
results = exp(n);

printf("exp%d = %d\n", n,results);



    


    return 0;
}




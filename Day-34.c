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






int n,results;
printf("enter the number : ");
scanf("%d",&n);
results = log(n);

printf("log%d = %d\n", n,results);

    



int n,results;
printf("enter the number : ");
scanf("%d",&n);
results = log10(n);

printf("log10%d = %d\n", n,results);



// check even or odd
    int n;
scanf("%d",&n);

if(n%2==0){
    printf("even");
}

else{
    printf("Odd");
}
    



// Write a program to input a number and check if it is positive, negative, or zero. 

int n;
scanf("%d",&n);

if(n>0){
    printf("Positive");
}
else if(n<0){
    printf("Negative");
}
else{
    printf("Zero");
}






//  Write a program to input three numbers and find the largest.

int n,m,l;
scanf("%d%d%d",&n,&m,&l);

if(n>m && n>l){
    printf("N is largeest");
}
else if(m>n && m>l){
    printf("M is largest");
}
else{
    printf("L is largest");
}





// Write a program to input a year and check if it is a leap year or not. 

int year;
scanf("%d",&year);

if(year%4==0){
    printf("Leap year");
}
else{
    printf("Not leap year");
}
    

    

// Write a program to input a number and check if it is even or odd. 

int n;
scanf("%d",&n);

if(n%2==0){
    printf("Even");
}
else{
    printf("odd");
}



    
    return 0;
}




















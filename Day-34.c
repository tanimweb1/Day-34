#include<stdio.h>

int main (){





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




    

    return 0;
}







//cprogram to print sum of first 10 fibonnaci numbers
#include<stdio.h>
int main(){
int num1, num2=1, num3=2, sum=2, max;//since we start from 1>
printf("enter the max value of fibonacci number\n");
scanf("%d", &max);
while(num3<=max){
num1=num2;
num2=num3;
if(num1+num2>max)
break;
if( (num1+num2)%2==0){
sum+=num1 + num2;}

num3=num1+num2;

}
printf("num1: %d num2 : %d num3 : %d \n", num1, num2, num3);
printf("the sum if all the numbers %d\n", sum);


return 0;
}

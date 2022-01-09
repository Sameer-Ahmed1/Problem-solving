//cprogram to print sum of first 10 fibonnaci numbers
#include<stdio.h>
int main(){
int num1, num2=1, num3=2, sum=3;//since we start from 1 and 2 so sum= 1+2
while(num3<=90){
num1=num2;
num2=num3;
if(num1+num2>90)
break;
sum+=num1 + num2;
num3=num1+num2;

}
printf("num1: %d num2 : %d num3 : %d \n", num1, num2, num3);
printf("the sum if all the numbers %d\n", sum);


return 0;
} 



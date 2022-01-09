#include<stdio.h>
int main(){
int num1, num2, fact=1, sum1=0, sum2=0;
printf("enter the numbers\n");
scanf("%d%d", &num1, &num2);
while(fact!= num1){
if(num1%fact==0)
sum1+=fact;
fact++;
}
fact=1;
while(fact!=num2){
if(num2%fact==0)
sum2+=fact;
fact++;}
printf("sum1= %d\n",sum1);
printf("sum2= %d\n",sum2);

if(sum1==num2){
if(sum2==num1)
printf("the given numbers are amicable \n");
}
else if(sum2==num1){
if(sum1 == num2)
printf("the given numbers are amicable \n");
}
else
printf("the given numbers are not amicable \n");

return 0;
} 

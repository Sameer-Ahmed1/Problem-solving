// cprogram to find sum of all the multiples of 3 and 5 below 1000
#include<stdio.h>
int main(){
int x=1,y=1,sum1=0, sum2=0, sum3=0, i=1;

while(x!=334){ 
sum1=sum1 + x*3;
x++;
}
printf("sum1: %d\n", sum1);

while(y!=200){
sum2=sum2 + y*5;
y++;
}
printf("sum2 : %d\n",sum2);

while(i!=1000){
if(i%3==0 && i%5==0){
sum3+=i;}
i++;
} 
printf("sum3 :%d\n", sum3);

printf("total sum: %d\n", (sum1 + sum2) - sum3);

return 0;
} 


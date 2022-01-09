#include<stdio.h>
int main(){
int num,temp,temp1, rem, flag=0,sum=0,sum1=0,mul=2;
printf("enter the number \n");
scanf("%d", &num);
temp=num;
while(num!=0){
rem=num%10;
sum+= rem;
num=num/10;
}
printf("sum is %d\n", sum);
 while(mul!=10){
temp=temp*mul;
temp1=temp;// since the temp value changes
while(temp1!=0){
rem=temp1%10;
sum1+= rem;// since we already have sum 
temp1=temp1/10;
}
if (sum1 == sum)
flag=1;
break;
mul++;

}
if(flag==1)
printf("the given number is cyclic \n");
else
printf("the given number is not cyclic \n");




return 0;
} 

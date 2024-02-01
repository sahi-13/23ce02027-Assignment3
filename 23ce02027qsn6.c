#include <stdio.h>
#include<math.h>
int main()
{
int num;
printf("Enter the number:");
scanf("%d",&num);
int x=num*num;
int y=0;
int z=num;
while(z>0){
z=z/(10);
y++;
}
int Num=pow(10,y);
int a=x/Num;
int b=x%Num;
if(num==a+b){
    printf("The given number is karprekar number.");
}
else{
    printf("The given number is not karprekar number.");
}
return 0;
}
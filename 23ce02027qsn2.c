#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter the three integers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if((num1>num2)&&(num1>num3)){
        printf("The integer %d is the largest.",num1);
    }
    else if((num2>num3)&&(num2>num1)){
       printf("The integer %d is the largest.",num2);
    }
    else {
        printf("The integer %d is the largest.",num3);
    }
    return 0;
}
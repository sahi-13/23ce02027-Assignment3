#include<stdio.h>
int main(){
    int x;
    printf("Enter the integer:");
    scanf("%d",&x);
    if(x>0){
        printf("The given integer %d is positive.\n",x);
    } else if(x<0){
        printf("The given integer %d is negative.\n ",x);
    } else{
        printf("The given integer is negative.\n ");
    }
    return 0;

}
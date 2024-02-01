#include<stdio.h>
int main(){
    int x;
    printf("Enter the no of days late:");
    scanf("%d",&x);
    if(x==0){
        printf("No fine");
    }
    else if(x>0&&x<=5){
        printf("Fine= 1 Rupee.");
    }
    else if(x>5&&x<=10){
        printf("Fine= 2 Rupee");
    }
   
    else if(x>30){
        printf("Membership is cancelled.");
    }
     else if(x>10){
        printf("Fine= 5 Rupee");
        }
    return 0;

    
}
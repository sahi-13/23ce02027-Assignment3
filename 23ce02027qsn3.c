#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the positive integers a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if( a+b>c && b+c>a && c+a>b){
        printf("The given integers a,b,c are sides of triangle.");
    }
    else{
        printf("The given integers a,b,c are not sides of a triangle.");
    }
    return 0;
    
}
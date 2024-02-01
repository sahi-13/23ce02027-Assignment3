#include<stdio.h>
int main ()
{
    int M,N;
    float W,K,T;
    printf("Marks obtained:");
    scanf("%d",&M);
     printf("No of classes conducted:");
    scanf("%f",&K);
    printf("No of classes attended:");
    scanf("%d",&N);
    W=N/K;
    T=M*W;
    printf("Final score  is %f\n",T);
    if(T>=90)
    printf("Grade is Ex");
    else if(T>=80&&T<89)
    printf("Grade is A");
    else if(T>=70&&T<79)
    printf("Grade is B");
   else  if(T>=60&&T<69)
    printf("Grade is C");
   else if(T>=50&&T<59)
    printf("Grade is D");
   else if(T>=40&&T<49)
    printf("Grade is P");
   else if(T<40)
    printf("Grade is F");
    return 0;
    }
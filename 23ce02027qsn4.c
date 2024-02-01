#include<stdio.h>
int main()
{
    int x1,x2,x3;
    int y1,y2,y3;
    printf("Enter (x1,y1):");
    scanf("%d%d",&x1,&y1);
    printf("Enter (x2,y2):");
    scanf("%d%d",&x2,&y2);
    printf("Enter (x3,y3):");
    scanf("%d%d",&x3,&y3);
    if ((x1==x2&&x2==x3)|| (y1==y2&&y2==y3)){
    printf("Given co ordinates lie on same line");
    }
    else if((x1==x2&&x2!=x3)||(x3==x2&&x1!=x3)){
         printf("Given co ordinates do not lie on same line.");
    }
    else if ((y2-y1)/(x2-x1)==(y3-y2)/(x3-x2)){
    printf("Given co ordinates lie on same line.");
    }
    else{
     printf("Given co ordinates do not lie on same line.");
    }
    return 0;
}

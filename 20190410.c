#include <stdio.h>
#include <stdlib.h>

int main()
{ 
     int A,B,C;
     printf("國文成績 :");
     scanf("%d", &A);
     printf("數學成績 :");
     scanf("%d", &B);
     printf("英文成績 :");
     scanf("%d", &C);
     printf("總成績 :%d\n",A+B+C );
     printf("總平均 :%d",(A+B+C)/3);  
}

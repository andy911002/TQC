#include <stdio.h>
#include <stdlib.h>
#define MAX 6

double average(double a[]){
    int i;
    double sum=0,avg; 

    for(i=0;i<MAX;i++)
        sum+=a[i];

    avg=sum/MAX ; 
    return(avg); 
}
 
int main() {
    int i;
    double a[MAX]; 
   
    for(i=0;i<MAX;i++){
        printf("請輸入第%d個浮點數:",i+1);
        scanf("%lf",&a[i]);
    }
    
    printf("\n您輸入的陣列值如下\n");
    for(i=0;i<MAX;i++)
        printf("data[%d]:%.2lf\n",i,a[i]);
    printf("\n平均:%.2lf",average(a)); 
   
    return 0;
}

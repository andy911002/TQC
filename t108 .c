#include <stdio.h>
#include <stdlib.h>

int main () 
{
double a, b, c, d, e, f;         // double (和lf對應)
printf("請輸入第一個浮點數: ");
scanf("%lf", &a);
printf("請輸入第二個浮點數: ");
scanf("%lf", &b); 
printf("請輸入第三個浮點數: ");
scanf("%lf", &c);
printf("請輸入第四個浮點數: ");
scanf("%lf", &d);
printf("請輸入第五個浮點數: ");
scanf("%lf", &e);
printf("請輸入第六個浮點數: ");
scanf("%lf", &f);
/*換行印出最後三個浮點數，為了輸出美觀，給予10個欄位寬及小數點第二位，並印出向右及向左靠齊。*/
printf("\n向右靠齊\n");
printf("%10.2lf %10.2lf %10 .2 lf \n", a, b, c);// %10(10個空格)  .2(取道小數第2位) lf(對應double)  \n(換行) 
printf("%10.2lf %10.2lf %10.2lf\n", d, e, f);

printf("\n\n向左靠齊\n");
printf("%-10.2lf %-10.2lf %-10.2lf\n", a, b, c);
printf("%-10.2lf %-10.2lf %-10.2lf\n", d, e, f);

return 0;
}

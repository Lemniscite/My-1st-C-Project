/*Averageof5nos-Hiro*/
#include <stdio.h>

void main()

       { int no1,no2,no3,no4,no5;
int avg,sum=0;
printf("Kindly input 5 no's ");
scanf("%d %d %d %d %d",&no1,&no2,&no3,&no4,&no5);
sum=no1+no2+no3+no4+no5;
avg=sum/5;

printf("sum is ");
printf("%d",sum);
printf("\nAverage is ");
printf("%d",avg);
} 	

#include<stdio.h>
#include<math.h>



void main(){
int a,b,result; char op;

printf("Type a num");

scanf("%d",&a);

printf("Choose an operation : +,-,*,/");
scanf("%s",&op);
printf("Type a num");

scanf("%d",&b);

switch(op){

case '+' : result=a+b;
 printf("%d",result);
break;

case '-' : printf("%d",a-b);

break;

case '*' : printf("%d",a*b);
break;
case '/' : printf("%d",a/b);
break;

default: printf("Unknow error");
}



}

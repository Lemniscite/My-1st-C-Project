
#include <stdio.h>


int main() 
{ int a=0,b=1,c=0;


printf("%d",a);printf("%d",b);
for ( int i=1;i>0;i++)
{ 
c =a+b;
a=b;
b=c;
printf("%d \n",c);
}
return(0);
}
   

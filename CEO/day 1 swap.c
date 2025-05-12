
#include <stdio.h>

int main()
{
int a,b,sum;

  printf("enter value  a:");
  scanf("%d %d", &a,&b);
  
  printf("before swapping:a=%d,b=%d\n",a,b);
  
  a=a+b;
  b=a-b;
  a=a-b;
  printf("after swapping:a=%d,b=%d\n",a,b);
  
  

    return 0;
}
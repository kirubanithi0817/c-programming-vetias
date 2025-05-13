#include <stdio.h>

int main() {
 int a,b,c;
 printf("Enter the value A:");
 scanf("%d",&a);
 printf("Enter the value B:");
 scanf("%d",&b);
 if(a>b){
     printf("A The is an maxium number");
 }
 if(b>a){
     printf("B The is a maxium number");

 }
 else {
printf("Both values are equal");    
 }

    return 0;
}
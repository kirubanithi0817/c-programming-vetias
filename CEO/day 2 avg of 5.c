#include <stdio.h>
int main() {
int m1,m2,m3,m4,m5;
printf("Enter the 5 marks: ");
scanf("%d",&m1);
scanf("%d",&m2);
scanf("%d",&m3);
scanf("%d",&m4);
scanf("%d",&m5);
int sum =m1+m2+m3+m4+m5;
int avg =sum/5;
printf("sum = %d, Average = %d",sum,avg);
if(avg>90&&avg<=100){
    printf("A grade");
}
else if (avg>80&& avg<=90){
    printf("B grade");
}
else if (avg>70&& avg<=80){
    printf("c grade");
}
else if (avg>60&& avg<=70){
    printf("D grade");
}
else{
    printf("Fail.Dont give up try agin");
}
    return 0;
}
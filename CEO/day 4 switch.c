
#include <stdio.h>

int main()
{
    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("SUNDAY");
        break;
        case 2: printf("MONDAY");
        break;
        case 3: printf("TUESDAY");
        break;
        case 4: printf("WEDNESDAY");
        break;    
        case 5: printf("THURSDAY");
        break;
        case 6: printf("FRIDAY");
        break;
        case 7: printf("SATURDAY");
        break;}
    return 0;
}
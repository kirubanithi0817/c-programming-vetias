#include <stdio.h>

int main() {
    int num, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &num);
    
    printf("Fibonacci Series: ");
    
    for (int i = 1; i <= num; i++) {
        if (i == 1) {
            printf("%d ", first);
        } else if (i == 2) {
            printf("%d ", second);
        } else {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }
    
    printf("\n");
    return 0;
}
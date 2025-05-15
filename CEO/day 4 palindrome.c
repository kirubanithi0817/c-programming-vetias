#include <stdio.h>

int main() {
    int num, og, rev = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    og = num;
    while (num != 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    if (og == rev) {
        printf("%d is a Palindrome\n", og);
    } else {
        printf("%d is Not a Palindrome\n", og);
    }
    return 0;
}
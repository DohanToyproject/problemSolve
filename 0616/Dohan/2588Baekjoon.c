#include <stdio.h>

int main(void) {
    int num1 = 0;
    int num2 = 0;
    scanf("%d\n%d", &num1, &num2);

    printf("%d\n%d\n%d\n%d\n", num1*(num2%10), num1*((num2%100)/10), num1*(num2/100), num1*num2);
}
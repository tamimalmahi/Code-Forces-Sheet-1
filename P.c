#include <stdio.h>

int main() {
    int a, digit1;
    scanf("%d", &a);
    digit1 = a / 1000;

    printf("%s\n", (digit1 % 2 == 0) ? "EVEN" : "ODD");

return 0;
}
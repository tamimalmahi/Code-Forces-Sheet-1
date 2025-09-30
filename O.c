#include <stdio.h>

int main() {
    int a, b;
    char c;

    scanf("%d %c %d", &a, &c, &b);

    int ans = (c == '+') ? a + b:
               (c == '-') ? a - b:
                (c == '*') ? a * b: a / b;

    printf("%d\n", ans);

return 0;    
}
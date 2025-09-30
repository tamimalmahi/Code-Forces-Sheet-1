#include <stdio.h>
int main () {
    int a;
    long long int b;
    char c[10];
    float d;
    double e;

    
    scanf("%d", &a);
    scanf("%lld", &b);
    scanf("%s", &c);
    scanf("%.2f", &d);
    scanf("%.1lf", &e);

    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%s\n", c);
    printf("%.2f\n", d);
    printf("%.1lf\n", e);

return 0;
}
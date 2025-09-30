#include <stdio.h>

int main(){
    long long a, b, la, lb;
    scanf("%lld %lld", &a, &b);
    la = a % 10;
    lb = b % 10;

    printf("%d\n", la + lb);
return 0;
}
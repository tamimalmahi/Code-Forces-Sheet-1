#include <stdio.h>
int main(){
    long long a, b, c, d, ans;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    ans = (a * b) - (c * d);
    printf("Difference = %lld", ans);
return 0;
}
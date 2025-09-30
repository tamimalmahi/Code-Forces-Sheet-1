#include <stdio.h>

int main(){
    long long a;
    scanf("%lld", &a);

    long long sum = a * (a + 1) / 2;

    printf("%lld\n", sum);
    
return 0;
}
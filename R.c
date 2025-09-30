#include <stdio.h>

int main(){
    int n, days, months, years;
    scanf("%d", &n);

    years = n / 365;
    n = n % 365;
    months = n / 30;
    n = n % 30;
    days = n;

    printf("%d years\n%d months\n%d days", years, months, days);
return 0;
}
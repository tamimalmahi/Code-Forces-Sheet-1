#include <stdio.h>
#define pi 3.141592653

int main(){
    double r, area;
    scanf("%lf", &r);
    area = pi * r * r;
    printf("%.9f\n", area);
return 0;
} 
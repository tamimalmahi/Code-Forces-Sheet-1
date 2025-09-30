#include <stdio.h>

int main(){
    float a, b;
    scanf("%f %f", &a, &b);

    printf("%s\n", ((a > 0 && b > 0)) ? "Q1":
                    ((a < 0 && b > 0)) ? "Q2":
                     (a < 0 && b < 0) ? "Q3":
                      (a > 0 && b < 0) ? "Q4":
                       (a == 0 && b == 0) ? "Origem":
                        (a == 0 && b != 0) ? "Eixo Y": "Eixo X");

return 0;
}
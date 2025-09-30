#include <stdio.h>

int main(){
    float a, b; 
    int closest;
    scanf("%f %f", &a, &b);
    float sum = a / b;
    float dx = sum - (int)sum, dy = ((int)sum + 1) - sum;
 
    if (dx > dy)
    {
        closest = (int)sum + 1;
    } else if (dx == 0.5 || dx < dy)
    {
        closest = (int)sum + 1;
    }
    
    printf("floor %d / %d = %d\n", (int)a, (int)b, (int)sum);
    printf("ceil %d / %d = %d\n", (int)a, (int)b, (int)sum + 1);
    printf("round %d / %d = %d\n", (int)a, (int)b, closest);
    
return 0;
}
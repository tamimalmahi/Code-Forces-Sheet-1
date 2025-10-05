#include <stdio.h>
 
int main(){
     
    int closest, a, b;
    scanf("%d %d", &a, &b);
    float sum = (float)a / b;
    float dx = sum - (int)sum, dy = ((int)sum + 1) - sum;
    printf("floor %d / %d = %d\n", a, b, (int)sum);
 
    if (sum != 1)
    {
        if (dx == 0.5 || dx > dy)
        {
            closest = (int)sum + 1;
        } else if (dx < dy)
        {
            closest = (int)sum;
        }
 
        printf("ceil %d / %d = %d\n", a, b, (int)sum + 1);
    } else 
    {
        printf("ceil %d / %d = %d\n", a, b, (int)sum);
    }
    
    printf("round %d / %d = %d\n", a, b, closest);
    
return 0;
}

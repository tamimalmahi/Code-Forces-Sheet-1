#include <stdio.h>
#include <string.h>

int main(){
    char name1[100], surname1[100], name2[100], surname2[100];
    scanf("%s %s", &name1, &surname1);
    scanf("%s %s", &name2, &surname2);

    printf("%s\n", strcmp(surname1, surname2) == 0 ? "ARE Brothers" : "NOT");

return 0;
}
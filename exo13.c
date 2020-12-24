#include <stdio.h>
void swap (int *a, int *b)
{
    int inter;
    inter = *a;
    *a = *b;
    *b = inter;
}

int main (){
    int a = 1, b = 10;
    printf("Avant a= %d / b = %d", a, b);
    swap(&a, &b);
    printf("\nApres a = %d / b = %d", a, b);
    return 0;
}
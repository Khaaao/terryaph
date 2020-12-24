#include <stdio.h>
int * makearray(){
    static int tableau[9] = {};
    return tableau;
}

int main(){
    int  *tab, i = 0;
    tab = makearray();
    for (i = 0 ; i < 9; i++)
    {
        printf("%d\n", tab[i]);
    }
    return 0;
}
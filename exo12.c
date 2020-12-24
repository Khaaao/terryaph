#include <stdio.h>
int * div(int p, int q) {
    static int  r[1];
    r[0] = p/q;
    r[1] = p%q;
    return r;
}

int main() {
    int p = 550, q = 100;
    int i;
    int *ret;
    ret = div(p, q);
    printf("Quotien de la division : %d\nReste de la division : %d", ret[0], ret[1]);
    return 0;
}
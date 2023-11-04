#include <stdio.h>
//Tahmid Shah Tamim
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int x, y, z, zz, zx;
    x = a+b*c;
    y = a*(b+c);
    z = a*b*c;
    zz = (a+b)*c;
    zx = a+b+c;

    int max= x;

    if (y>max) {
        max=y;
    }
    if (z>max) {
        max=z;
    }
    if (zz> max) {
        max=zz;
    }
    if (zx> max) {
        max=zx;
    }

    printf("%d\n", max);
    return 0;
}

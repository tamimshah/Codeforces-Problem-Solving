#include <stdio.h>
//Tahmid Shah Tamim
int main() {
    int t;
    scanf("%d", &t);

    int X1 = 0, Y1 = 0, Z1 = 0;

    for (int i = 0; i <t; i++) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        X1 += x;
        Y1 += y;
        Z1 += z;
    }

    if (X1 == 0 && Y1 == 0 && Z1 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

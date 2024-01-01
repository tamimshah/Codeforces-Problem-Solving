#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int result;

        if (a == b) {
            result = c;
        } else if (a == c) {
            result = b;
        } else {
            result = a;
        }

        printf("%d\n", result);
    }

    return 0;
}

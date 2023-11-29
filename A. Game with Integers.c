#include <stdio.h>
//Md.Tahmid Shah Tamim
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        if (n % 3 == 0) {
            printf("Second\n");
        } else {
            printf("First\n");
        }
    }

    return 0;
}

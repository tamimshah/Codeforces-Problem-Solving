#include <stdio.h>//Md.Tahmid Shah Tamim
int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        if (n % 7 == 0)
            printf("%d\n", n);
        else {
            int ans = n*10;
                if (ans % 7 == 0) {
                printf("%d\n",ans);
            }

        }
    }
    return 0;
}

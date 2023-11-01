//Md. Tahmid Shah Tamim
#include <stdio.h>
int main() {
    int n, ans = 0;
    int a[] = {5, 4, 3, 2, 1};
    scanf("%d", &n);

    for (int i = 0; i < 5; i++) {
        ans += n / a[i];
        n = n % a[i];
    }

    printf("%d\n", ans);
    return 0;
}

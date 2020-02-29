#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);
    if (n == 4) {
        printf("2 2");
        return 0;
    }
    for (int i = 3; i <= n/2 + 1; i += 2) {
        int flag = 0;
        int k = n - i;
        for (int j = 3; j <= sqrt(i) ; j += 2) {
            if (i % j == 0) {
                flag = -1;
                break;
            }
        }
        for (int j = 3; j <= sqrt(k) && flag == 0; j += 2) {
            if (k % j == 0) {
                flag = -1;
                break;
            }
        }
        if (flag == 0) {
            printf("%d %d", i, k);
            break;
        }
    }
    return 0;
}

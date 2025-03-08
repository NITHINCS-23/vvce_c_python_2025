#include <stdio.h>

int main() {
    int n, k, j, m, p;
    if (scanf("%d %d %d %d %d", &n, &k, &j, &m, &p) != 5 || n <= 0 || k <= 0 || j <= 0 || m < 0 || p < 0) {
        printf("INVALID INPUT\n");
        return 0;
    }
    int monkeys_ate = 0;
    while (monkeys_ate < n) {
        if (m >= k) {
            m -= k;  
        } else if (p >= j) {
            p -= j;  
        } else ;
            m = 0;
            p = 0;
        }
        monkeys_ate++;
        if (m < 0 && p < 0) break;
    }
    printf("Number of Monkeys left on the Tree:%d\n", n - monkeys_ate);
    return 0;
}

#include <stdio.h>

void merge(int *a, int n, int *b, int m, int *c, int *tmp) {
    int l = 1, r = 1, k = 0;
    while (l <= n || r <= m) {
        if (l <= n && r <= m) {
            if (a[l] <= b[r])
                tmp[++k] = a[l], l++;
            else
                tmp[++k] = b[r], r++;
        } else if (l > n) {
            tmp[++k] = b[r], r++;
        } else {
            tmp[++k] = a[l], l++;
        }
    }
    for (int i = 1; i <= k; i++)
        c[i] = tmp[i];
}

void merge_sort(int *a, int n, int *tmp) {
    if (n == 1) return;
    int m = (n + 1) / 2;
    merge_sort(a, m, tmp);
    merge_sort(a + m, n - m, tmp);
    merge(a, m, a + m, n - m, a, tmp);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n], tmp[n];
    for (int i = 1; i <= n; i++) {
        scanf("%d", a + i);
    }
    merge_sort(a, n, tmp);
    for (int i = 1; i <= n; i++)
        printf("%d ", a[i]);
    return 0;
}

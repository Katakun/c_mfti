#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];

    arr[0][1] = 1;
    arr[1][0] = 1;
    arr[1][1] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            /* code */
        }
    }

    return 0;
}
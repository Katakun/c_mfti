#include <stdio.h>

int is_equal(int[], int);

int main() {
    int workers;
    scanf("%d", &workers);

    int coins[workers];

    for (int i = 0; i < workers; i++) {
        scanf("%d", &coins[i]);
    }

    int kupetc_coins = 0;

    for (int i = 0; i < workers; i++) {
        int sum = coins[i] + coins[(i + 1) % workers];

        if (sum % 2 == 0) {
            coins[i] = sum / 2;
            coins[(i + 1) % workers] = sum / 2;
        } else {
            coins[i] = (sum - 1) / 2;
            coins[(i + 1) % workers] = (sum - 1) / 2;
            kupetc_coins++;
        }

        if (i == workers - 1 && !is_equal(coins, workers)) {
            i = -1;
        }
    }

    printf("%d %d\n", kupetc_coins, coins[0]);
    return 0;
}

int is_equal(int arr[], int size) {
    int equal = 1;
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            equal = 0;
        }
    }
    return equal;
}
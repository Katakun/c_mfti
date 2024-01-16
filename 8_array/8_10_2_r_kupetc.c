#include <stdio.h>

int is_equal(int[], int);

int main() {
    int number_of_workers;
    scanf("%d", &number_of_workers);

    int coins[number_of_workers];

    for (int i = 0; i < number_of_workers; i++) {
        scanf("%d", &coins[i]);
    }

    int kupetc_coins = 0;

    for (int i = 0; i < number_of_workers - 1; i++) {
        int sum = coins[i] + coins[i + 1];
        if (sum % 2 != 0) {
            coins[i] = (sum - 1) / 2;
            coins[i + 1] = (sum - 1) / 2;
            kupetc_coins++;
        } else {
            coins[i] = sum / 2;
            coins[i + 1] = sum / 2;
        }
        if (i == number_of_workers - 2 && !is_equal(coins, number_of_workers)) {
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
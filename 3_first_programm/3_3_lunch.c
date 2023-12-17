#include <stdio.h>

int main() {
    int k_rice, k_veg;  // declare variable for rice and veg

    scanf("%d%d", &k_rice, &k_veg);  // read input data

    int price = k_rice + k_veg * 2;  // calculate total price

    printf("%d\n", price);  // output result

    return 0;
}
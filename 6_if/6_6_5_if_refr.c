#include <stdio.h>

int main() {
    int door_w, door_h, refr_a, refr_b, refr_c;
    scanf("%d%d", &door_h, &door_w);
    scanf("%d%d%d", &refr_a, &refr_b, &refr_c);

    if (((refr_a <= door_h) && (refr_b <= door_w || refr_c <= door_w)) ||
        ((refr_b <= door_h) && (refr_a <= door_w || refr_c <= door_w)) ||
        ((refr_c <= door_h) && (refr_a <= door_w || refr_b <= door_w))) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
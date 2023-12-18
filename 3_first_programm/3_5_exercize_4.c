#include <stdio.h>

int main() {
    float square;
    float width;
    float chair;

    scanf("%f%f%f", &square, &width, &chair);
    float height = square / width;
    int chair_count = height / chair;

    printf("%d", chair_count);
}
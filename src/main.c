#include <stdio.h>
#include "logic.h"

int main() {
    int n;

    printf("Enter number of vehicles: ");
    scanf("%d", &n);

    struct Vehicle v[n];

    for (int i = 0; i < n; i++) {
        printf("Enter speed of vehicle %d: ", i + 1);
        scanf("%d", &v[i].speed);
    }

    printf("\n---- Speed Fine Report ----\n");

    for (int i = 0; i < n; i++) {
        checkFine(&v[i]);
    }

    return 0;
}

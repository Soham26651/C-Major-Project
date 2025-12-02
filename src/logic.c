#include <stdio.h>
#include "logic.h"

void checkFine(struct Vehicle *v) {
    if (v->speed <= 60)
        printf("Speed: %d km/h → Normal. No fine.\n", v->speed);
    else if (v->speed <= 80)
        printf("Speed: %d km/h → Fine: Rs. 500\n", v->speed);
    else if (v->speed <= 100)
        printf("Speed: %d km/h → Fine: Rs. 1000\n", v->speed);
    else
        printf("Speed: %d km/h → License Suspended!\n", v->speed);
}

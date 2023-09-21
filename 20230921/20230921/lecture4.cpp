#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int max = 1000000;
    int count = 0;
    double x, y; 
    double pi; 

    srand(time(NULL));

    for (int i = 1; i <= max; i++) {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;
        if (x * x + y * y <= 1) {
            count++;
        }

        pi = 4.0 * count / i;
        printf(" %d회 진행.. 원주율 = %lf\n", i, pi);
    }

    return 0;
}
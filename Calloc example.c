#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, i;

    p = (int *)calloc(5, sizeof(int));

    printf("Values:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", p[i]);

    free(p);
    return 0;
}

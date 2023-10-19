#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int *p = a;

    // Your code here
    printf("a[2] = %d\n", *(p + 2));

    return 0;
}



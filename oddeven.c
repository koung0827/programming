#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("짝수\n");
    else
        printf("홀수\n");

    return 0;
}
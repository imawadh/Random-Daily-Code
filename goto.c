#include <stdio.h>

int main() {
    int num = 1;

    end:  // label
    printf("%d ", num);
    num++;
    if (num <= 5)
        goto end;  // jump to the label

    return 0;
}

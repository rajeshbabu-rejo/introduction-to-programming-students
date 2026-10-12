/* Classroom example: a value that changes during a walk. */
#include <stdio.h>

int main(void)
{
    int meters_walked = 0;
    printf("At the gate: %d m walked\n", meters_walked);

    meters_walked = 250;
    printf("After walking: %d m walked\n", meters_walked);

    meters_walked = 600;
    printf("Near the library: %d m walked\n", meters_walked);
    return 0;
}

/* Classroom example: choose a C type for each kind of value. */
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    const char destination[] = "Library"; /* text: a char array */
    const int route_meters = 800;          /* whole number */
    double kilometers_walked = 0.25;       /* decimal number */
    char route_code = 'A';                  /* one character */
    bool arrived = false;                  /* true or false */

    printf("Destination: %s\n", destination);
    printf("Route length: %d m\n", route_meters);
    printf("Walked: %.2f km\n", kilometers_walked);
    printf("Route code: %c\n", route_code);
    printf("Arrived: %s\n", arrived ? "yes" : "no");
    return 0;
}

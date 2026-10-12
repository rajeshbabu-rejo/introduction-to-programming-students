/* Classroom example: calculate and format progress. */
#include <stdio.h>

int main(void)
{
    const int route_meters = 800;
    int meters_walked = 250;
    double percent_complete =
        (double) meters_walked * 100.0 / route_meters;

    printf("Progress: %d of %d m\n", meters_walked, route_meters);
    printf("Completed: %.2f%%\n", percent_complete);
    return 0;
}

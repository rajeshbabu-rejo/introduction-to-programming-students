/*
 * Campus Walk Tracker: student starter
 *
 * Follow lab/README.md. Complete the TODO lines, then save, build, and run.
 * If you experiment with an incorrect line, comment it out before submitting.
 */
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    const char start[] = "Main Gate";
    const char destination[] = "Library";
    const int route_meters = 800;

    int meters_walked = 0;
    double percent_complete = 0.0;
    char route_code = 'A';
    bool arrived = false;

    printf("Route %c: %s to %s\n", route_code, start, destination);
    printf("Length: %d m\n", route_meters);
    printf("Walked: %d m\n", meters_walked);
    printf("Completed: %.2f%%\n", percent_complete);
    printf("Arrived: %s\n", arrived ? "yes" : "no");

    /* TODO 1: Update meters_walked to 250. */
    /* TODO 2: Calculate percent_complete using route_meters. */
    /* TODO 3: Print the new walked distance and percentage. */
    /* TODO 4: Try changing a const value; record the diagnostic, then undo. */
    /* TODO 5: Add a daily step goal, current steps, and their percentage. */

    return 0;
}

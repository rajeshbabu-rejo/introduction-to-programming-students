/* Classroom example: values that must stay fixed for this run. */
#include <stdio.h>

int main(void)
{
    const char start[] = "Main Gate";
    const char destination[] = "Library";
    const int route_meters = 800;

    printf("Route: %s to %s\n", start, destination);
    printf("Route length: %d m\n", route_meters);

    /* Try removing the comment on the next line. The compiler rejects it. */
    /* route_meters = 900; */
    return 0;
}

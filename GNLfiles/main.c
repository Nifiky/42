#include "get_next_line.h"

int main(void)
{
    int fd;
    char *line;
    int lines;

    lines = 1;
    fd = open("test2.txt", O_RDONLY);

    while ((line = get_next_line(fd)))
    {
        printf("Line %d: %s\n", lines, line);
        free(line);
        ++lines;
    }
    close(fd);
}

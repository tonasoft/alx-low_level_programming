#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'w');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}

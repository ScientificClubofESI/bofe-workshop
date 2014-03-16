#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char **argv)
{
    int ret = EXIT_FAILURE;

    if (argc == 2)
    {
        char buf[255];
        unsigned char size = strlen (argv[1]);

        if (size < 254)
        {
            printf ("size = %d\n", size);
            strcpy (buf, argv[1]);
            ret = EXIT_SUCCESS;
        }
    }
    return ret;
}

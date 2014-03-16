#include <stdio.h>
#include <string.h>

static void cpy_arg (const char *);
void code_pirate (void);

int main (int argc, char **argv)
{
   if (argc == 2)
   {
     printf ("code_pirate = %p\n", code_pirate);
     cpy_arg (argv[1]);
     printf ("argv[1] copier\n");
   }
   return 0;
}

static void cpy_arg (const char *s)
{
   if (s)
   {
      char text[20];

      strcpy (text, s);
   }
}

void code_pirate (void)
{
  printf ("Code pirate execute !\n");
}

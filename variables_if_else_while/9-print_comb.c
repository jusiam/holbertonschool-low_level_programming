#include <stdio.h>

int main(void)
{
    char digits;
for (digits = '0'; digits <= '9' ; digits++)
 {
     putchar(digits);
   if (digits < 9);
   {
   putchar (',');
   putchar (' ');
    }
 }
putchar('\n');
return (0);
}

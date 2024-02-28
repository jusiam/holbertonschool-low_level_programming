#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
    putchar(alphabet);
    }
    putchar('\n');
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
    putchar (toupper(alphabet));
    }

return (0);
}

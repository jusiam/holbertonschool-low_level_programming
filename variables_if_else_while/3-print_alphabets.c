#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
    putchar(alphabet);
    }
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
    putchar (toupper(alphabet));
    }
putchar('\n');
return (0);
}

#include <stdio.h>
#include <stdlib.h>

void reverse();

int main()
{
    printf("escribe una cadena de caracteres\n");
    reverse();
    return 0;
}

void reverse()
{
    char a = getchar();
    if (a=='\n')
    {
        return;
    }
    else
    {
        reverse ();
        return putchar (a);
    }

}

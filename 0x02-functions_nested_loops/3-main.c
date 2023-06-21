
#include "main.h"
#include <stdio.h>

int main(void)
{
    char lowercase = 'a';
    char uppercase = 'A';

    printf("%c is%s a lowercase character\n", lowercase, _islower(lowercase) ? "" : " not");
    printf("%c is%s a lowercase character\n", uppercase, _islower(uppercase) ? "" : " not");

    return 0;
}


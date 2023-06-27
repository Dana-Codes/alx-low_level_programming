
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int i;

    srand(time(0));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        /* Generate random lowercase letter or digit */
        if (rand() % 2)
            password[i] = 'a' + rand() % 26;
        else
            password[i] = '0' + rand() % 10;
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("%s", password);

    return 0;
}


#include "main.h"

int _putchar(char c);
int _isalpha(int c);

int main(void)
{
    char ch;
    int result;

    ch = 'A';  /* Test uppercase letter */
    result = _isalpha(ch);
    _putchar(ch);
    _putchar(' ');
    _putchar(result ? '1' : '0');
    _putchar('\n');

    ch = '7';  /* Test digit */
    result = _isalpha(ch);
    _putchar(ch);
    _putchar(' ');
    _putchar(result ? '1' : '0');
    _putchar('\n');

    ch = '$';  /* Test special character */
    result = _isalpha(ch);
    _putchar(ch);
    _putchar(' ');
    _putchar(result ? '1' : '0');
    _putchar('\n');

    ch = 'g';  /* Test lowercase letter */
    result = _isalpha(ch);
    _putchar(ch);
    _putchar(' ');
    _putchar(result ? '1' : '0');
    _putchar('\n');

    return 0;
}

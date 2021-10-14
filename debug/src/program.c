#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "calculator.h"

void usage(char *name, int status)
{
    printf("Usage: %s OPERATIONS [ + - * / %% ] integer integer\n", name);
    exit(status);
}

int main(int argc, char *argv[])
{
    if (argc < 4)
        usage(argv[0], 1);

    char operator = argv[1][0];
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);
    int res = 0;

    const operation operations[] =
    {
        ['%' - '%'] = modulo,
        ['*' - '%'] = multiply,
        ['+' - '%'] = add,
        ['-' - '%'] = sub,
        ['/' - '%'] = divide,
    };

    if (operator >= '%' && operator <= '/' && operations[operator - '%'])
    {
        res = operations[operator - '%'](a, b);
        printf("%d %c %d = %d\n", a, operator, b, res);
    }
    else
        usage(argv[0], 2);

    return 0;
}

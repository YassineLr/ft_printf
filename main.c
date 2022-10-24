#include "ft_printf.h"
#include <stdio.h>

int main()
{
    int x = ft_printf("%d\n %s\n", -2147483648, "Hello mtf!");
    int y = printf("%d\n %s\n", -2147483648, "Hello mtf!");
    printf("%d\n%d\n", x, y);
}
#include "libft.h"
#include <stdio.h>
#include <string.h>
int     main()
{
        char src[] = "ABCDE";

        ft_memmove(src + 1, src, 5);
        printf("%s\n", src);
}

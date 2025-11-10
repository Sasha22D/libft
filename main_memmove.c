#include "libft.h"
#include <stdio.h>
#include <string.h>
int     main()
{
        char src[] = "DANIEL PAUL";

        ft_memmove(src + 2, src, 5);
        printf("%s\n", src);
}

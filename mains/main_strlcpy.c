#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

int     main()
{       
        char str[] = "Sasha";
        char dst[] = "DANIEL";

        ft_strlcpy(dst, str, 0);
        printf("%s\n", dst);
//	printf("%zu\n", ft_strlcpy(dst, str, 4));
	printf("%zu\n", strlcpy(dst, str, 0));
} 

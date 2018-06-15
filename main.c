#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%d libft version\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
	printf("%d std lib version\n", strncmp("abcdefgh", "abcdwxyz", 4));
	return (0);
}

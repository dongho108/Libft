#include <stdio.h>

char	*ft_strnstr(const char *str, const char *substr, size_t n);

int	main(void)
{
	char buf1[30] = "hello world";
	char buf2[30] = "worlda";

	printf("%s\n", ft_strnstr(buf1, buf2, 15));
}
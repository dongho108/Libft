#include <stdio.h>

char    *ft_strchr(const char *str, int c);

int main(void)
{
	char buf1[30] = "hello world";

	printf("%s\n", ft_strchr(buf1, 'o'));
	printf("%s\n", ft_strchr(buf1, 'z'));
}
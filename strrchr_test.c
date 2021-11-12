#include <stdio.h>

char    *ft_strrchr(const char *str, int c);

int main(void)
{
	char buf1[30] = "hello world";

	printf("%s\n", ft_strrchr(buf1, 'o'));
	printf("%s\n", ft_strrchr(buf1, 'z'));
}
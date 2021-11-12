#include <stdio.h>

char	*ft_strcpy(char* dest, const char* origin);

int main(void)
{
	char buf1[30];
	char buf2[30] = "hello world";

	printf("%s\n", ft_strcpy(buf1, buf2));
	
}
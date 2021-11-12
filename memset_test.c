#include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t n);

int	main()
{
	char buf1[30] = "hello";
	printf("%s\n", buf1);
	
	char *buf2 = ft_memset(buf1, 'o', 3);
	printf("%s\n", buf2);
	return (0);
}
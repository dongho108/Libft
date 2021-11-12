#include <stdio.h>

void	*ft_memchr(const void *ptr, int value, size_t n);

int main(void)
{
    char buf2[30] = " world";
    char *str = ft_memchr(buf2, 'o', 5);
    
    printf("%s\n", str);
    return 0;
}
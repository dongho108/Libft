#include <stdio.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n);

int main(void)
{
    char buf1[30] = "hello";
    char buf2[30] = "hella";
    char buf3[30] = "hello";
    char buf4[30] = "helloo";
    
    printf("%d\n", ft_memcmp(buf1, buf2, 5));
    printf("%d\n", ft_memcmp(buf1, buf3, 5));
    printf("%d\n", ft_memcmp(buf1, buf4, 5));
    printf("%d\n", ft_memcmp(buf1, buf4, 6));
    return 0;
}
#include <stdio.h>

void    *ft_memccpy(void *dest, const void *src, int c, size_t n);

int main(void)
{
    char buf1[30];
    char buf2[30] = " world";
    char *str = ft_memccpy(buf1, buf2, 'o', 5);
    
    printf("%s\n", str);
    return 0;
}
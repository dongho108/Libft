#include <stdio.h>

void    *ft_memcpy(void *dest, const void *src, size_t n);

int main(void)
{
    char buf1[30];
    char buf2[30] = "hello world!";
    char *str = ft_memcpy(buf1, buf2, 5);

    printf("%s\n", str);
}
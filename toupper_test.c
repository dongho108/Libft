#include <stdio.h>

int	ft_toupper(int c);

int main(void)
{
	printf("a -> %c\n", ft_toupper('a'));
	printf("A -> %c\n", ft_toupper('A'));
	printf("+ -> %c\n", ft_toupper('+'));
}
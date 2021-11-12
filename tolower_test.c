#include <stdio.h>

int	ft_tolower(int c);

int main(void)
{
	printf("a -> %c\n", ft_tolower('a'));
	printf("A -> %c\n", ft_tolower('A'));
	printf("+ -> %c\n", ft_tolower('+'));
}
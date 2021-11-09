#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int main(void)
{
    char *str1 = "--1234";
    char *str2 = "-1234";
    char *str3 = "1234";
    char *str4 = "fdjkbdzfb-sfj";
    char *str5 = "fdjkbdzfb-1234sfj";
    char *str6 = "fdjkb2dzfb-1234sfj";

    // printf("%d\n", ft_atoi(str1));
    printf("atoi : %d, ft_atoi : %d\n", atoi(str1), ft_atoi(str1));
    printf("atoi : %d, ft_atoi : %d\n", atoi(str2), ft_atoi(str2));
    printf("atoi : %d, ft_atoi : %d\n", atoi(str3), ft_atoi(str3));
    printf("atoi : %d, ft_atoi : %d\n", atoi(str4), ft_atoi(str4));
    printf("atoi : %d, ft_atoi : %d\n", atoi(str5), ft_atoi(str5));
    printf("atoi : %d, ft_atoi : %d\n", atoi(str6), ft_atoi(str6));
    return 0;
}

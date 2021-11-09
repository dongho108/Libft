/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghoki <donghoki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:54:34 by donghoki          #+#    #+#             */
/*   Updated: 2021/11/09 15:28:50 by donghoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *ptr, int value, size_t n)
{
    unsigned char   *str;
    unsigned char   c;
    size_t          i;

    str = ptr;
    c = value;
    i = 0;
    while(i < n)
    {
        if (*str == c)
            return (str);
        str++;
        i++;
    }
    return (0);
}

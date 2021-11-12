/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghoki <donghoki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:54:47 by donghoki          #+#    #+#             */
/*   Updated: 2021/11/09 19:18:57 by donghoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
    unsigned char   *p1;
    unsigned char   *p2;
    size_t          i;

    p1 = (unsigned char *)ptr1;
    p2 = (unsigned char *)ptr2;
    i = 0;
    while (i < n)
    {
        if (*p1 != *p2)
            return (*p1 - *p2);
        p1++;
        p2++;
        i++;
    }
    return (0);
}

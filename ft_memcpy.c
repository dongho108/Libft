/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghoki <donghoki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:54:06 by donghoki          #+#    #+#             */
/*   Updated: 2021/11/09 19:43:22 by donghoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char   *p_dest;
    unsigned char   *p_src;
    size_t          i;

    if (!dest && !src)
        return (0);
    p_dest = dest;
    p_src = (unsigned char *)src;
    i = 0;
    while (i < n)
    {
        *p_dest = *p_src;
        p_dest++;
        p_src++;
        i++;
    }
    return (dest);
}
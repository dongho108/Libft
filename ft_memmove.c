/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghoki <donghoki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:54:24 by donghoki          #+#    #+#             */
/*   Updated: 2021/11/09 20:36:55 by donghoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *p_dest;
    unsigned char   *p_src;
    size_t          i;

    if (p_dest <= p_src)
    {
        p_dest = dest;
        p_src = (unsigned char *)src;
        while (i++ < n)
            *p_dest++ = *p_src++;
    }
    else
    {
        p_dest = dest + (n - 1);
        p_src = (unsigned char *)src + (n - 1);
        while (i++ < n)
            *p_dest-- = *p_src--;
    }
    return (dest);
}

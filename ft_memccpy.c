/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghoki <donghoki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:54:14 by donghoki          #+#    #+#             */
/*   Updated: 2021/11/09 19:05:45 by donghoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char   *p_dest;
    unsigned char   *p_src;
    unsigned char   chr;
    size_t          i;
    
    p_dest = dest;
    p_src = (unsigned char *)src;
    chr = c;
    i = 0;
    while (i < n)
    {
        *p_dest = *p_src;
        p_dest++;
        if (*p_src == chr)
            return (p_dest);
        p_src++;
        i++;
    }
    return (0);
}

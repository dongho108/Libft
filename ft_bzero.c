/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghoki <donghoki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:53:58 by donghoki          #+#    #+#             */
/*   Updated: 2021/11/09 19:10:19 by donghoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
    unsigned char   *dest;
    size_t          i;
    
    dest = ptr;
    i = 0;
    while (i < n)
    {
        *dest = 0;
        dest++;
        i++;
    }
}

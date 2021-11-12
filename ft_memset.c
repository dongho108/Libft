/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghoki <donghoki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:53:46 by donghoki          #+#    #+#             */
/*   Updated: 2021/11/10 13:22:22 by donghoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t n)
{
    unsigned char	*p;
	unsigned char	c;
	size_t			i;

	p = ptr;
	c = value;
	i = 0;
	while (i < n)
	{
		*p = value;
		p++;
		i++;
	}
	return (ptr);
}

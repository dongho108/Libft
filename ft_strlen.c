/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghoki <donghoki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:48:52 by donghoki          #+#    #+#             */
/*   Updated: 2021/11/10 21:10:01 by donghoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char* str)
{
	unsigned char	*p_str;
	int				cnt;

	p_str = (unsigned char *)str;
	cnt = 0;
	while (*p_str++)
		cnt++;
	return (cnt);
}

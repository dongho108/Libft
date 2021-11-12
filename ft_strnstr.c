/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghoki <donghoki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:55:41 by donghoki          #+#    #+#             */
/*   Updated: 2021/11/10 21:14:46 by donghoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	char	*p_str;
	char	*p_substr;
	size_t			i;
	size_t			strlen;
	size_t			sublen;

	p_str = (char *)str;
	p_substr = (char *)substr;
	strlen = ft_strlen(str);
	sublen = ft_strlen(substr);
	if (sublen == 0)
		return (p_str);
	i = 0;
	while(i < n && (i + sublen) <= strlen)
	{
		if (ft_strncmp(p_str, p_substr, n) == 0)
			return (p_str);
		p_str++;
		i++;
	}
	return (0);
}
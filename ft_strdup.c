/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghoki <donghoki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:04:07 by donghoki          #+#    #+#             */
/*   Updated: 2021/11/12 19:16:17 by donghoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*new_str;
	int		len;
	
	str = (char *)s;
	len = ft_strlen(str);
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	return (ft_memcpy(new_str, str, len + 1));
}

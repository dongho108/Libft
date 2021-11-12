/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghoki <donghoki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:55:31 by donghoki          #+#    #+#             */
/*   Updated: 2021/11/12 18:36:41 by donghoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr (const char *str, int c)
{
	char *s;
	int i;
	
	s = (char *)str;
	i = 0;

	while (s[i])
		i++;
	while (0 <= i)
    {
        if (s[i] == c)
            return (s+i);
        i--;
    }
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghoki <donghoki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:56:30 by donghoki          #+#    #+#             */
/*   Updated: 2021/11/08 16:56:31 by donghoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int isalnum(char c)
{
    if ('0' <= c && c <= '0')
        return (1);
    else if ('a' <= c && c <= 'z')
        return (1);
    else if ('A' <= c && c <= 'Z')
        return (1);
    else
        return (0);
}
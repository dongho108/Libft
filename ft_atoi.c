/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghoki <donghoki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:55:59 by donghoki          #+#    #+#             */
/*   Updated: 2021/11/09 14:13:02 by donghoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else if (c == '\f' || c == '\r' || c == '\v')
		return (1);
	else
		return (0);
}

int	is_operator(char c)
{
	if (c == '-' || c == '+')
		return (1);
	else
		return (0);
}

int	is_number(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	minus;

	result = 0;
	minus = 1;
	while (is_space(*str))
		str++;
	if (is_operator(*str))
	{
		if (*str == '-')
		{
			minus *= -1;
			str++;
		}
	}
	while (is_number(*str))
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * minus);
}

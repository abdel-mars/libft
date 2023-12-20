/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ma <abdel-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 02:10:21 by abdel-ma          #+#    #+#             */
/*   Updated: 2023/12/08 02:15:56 by abdel-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	return (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	res;

	sign = 1;
	res = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if ((unsigned long)res * 10 + (*str - 48)
			> 9223372036854775807 && sign == 1)
			return (-1);
		else if ((unsigned long)res * 10 + (*str - 48)
			> (unsigned long)9223372036854775807 + 1 && sign == -1)
			return (0);
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res * sign);
}

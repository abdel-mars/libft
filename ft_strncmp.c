/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ma <abdel-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 02:51:18 by abdel-ma          #+#    #+#             */
/*   Updated: 2023/11/30 01:36:14 by abdel-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char )str1[i] != '\0' && (unsigned char )str2[i] != '\0')
		&& (unsigned char )str1[i] == (unsigned char )str2[i] && i + 1 < n)
		i++;
	return ((unsigned char )str1[i] - (unsigned char )str2[i]);
}

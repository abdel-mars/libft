/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ma <abdel-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 02:56:13 by abdel-ma          #+#    #+#             */
/*   Updated: 2023/11/30 01:32:05 by abdel-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	bc;
	size_t	i;

	str = (char *)s;
	bc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == bc)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

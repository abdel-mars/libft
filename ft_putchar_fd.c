/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ma <abdel-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:54:28 by abdel-ma          #+#    #+#             */
/*   Updated: 2023/12/14 05:40:58 by abdel-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int main()
{
	int check;

	check  = open("mars", O_CREAT | O_WRONLY | O_RDONLY);
	if(check == -1)
		return(0);
	int i = 0;
	while (i < 4)
	{
		ft_putchar_fd('c', check);
		i++;
	}
}*/

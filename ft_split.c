/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ma <abdel-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 02:14:11 by abdel-ma          #+#    #+#             */
/*   Updated: 2023/12/14 07:59:01 by abdel-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *str, char sep)
{
	size_t	word;
	size_t	res;

	res = 0;
	word = 0;
	while (*str)
	{
		if (*str == sep)
			word = 0;
		else if (!word)
		{
			word = 1;
			res ++;
		}
		str++;
	}
	return (res);
}

static void	ft_free(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static void	copyelements(char *res, const char *start, char const *s, size_t *i)
{
	size_t	j;
	size_t	tmp;

	j = 0;
	tmp = s - start;
	while (j < tmp)
	{
		res[j] = start[j];
		j++;
	}
	res[j] = '\0';
	(*i)++;
}

int	ft_check(char **res)
{
	if (!res)
	{
		ft_free(res);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	const char	*start;
	char		**res;

	i = 0;
	res = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!s || !res)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			start = s;
			while (*s && *s != c)
				s++;
			res[i] = (char *)malloc((s - start + 1) * sizeof(char));
			if (ft_check(res) == 0)
				return (NULL);
			copyelements(res[i], start, s, &i);
		}
	}
	res[i] = NULL;
	return (res);
}

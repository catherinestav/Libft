/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 13:12:00 by vrestles          #+#    #+#             */
/*   Updated: 2018/12/04 20:15:38 by vrestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		c_words(char const *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (flag == 0)
			{
				flag = 1;
				count++;
			}
		}
		else
			flag = 0;
		s++;
	}
	return (count);
}

static int		c_letters(char const *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		if (*s != c)
			count++;
		else
			break ;
		s++;
	}
	return (count);
}

static char		*return_word(char const *s, int letters, char **array, int i)
{
	array[i] = (char *)malloc(sizeof(char) * (letters + 1));
	if (array[i] == NULL)
	{
		while (--i >= 0)
			free(array[i]);
		free(array);
		return (NULL);
	}
	array[i] = ft_strsub(s, 0, letters);
	return (array[i]);
}

char			**ft_strsplit(char const *s, char c)
{
	int		letters;
	char	**array;
	int		i;
	int		words;

	if (!s || !(array = (char **)malloc(sizeof(char *) * (c_words(s, c) + 1))))
		return (NULL);
	i = 0;
	words = c_words(s, c);
	while (*s)
	{
		letters = 0;
		if (*s != c && i < words)
		{
			letters = c_letters(s, c);
			if (!(array[i] = return_word(s, letters, array, i)))
				return (NULL);
			s += letters;
			i++;
		}
		else
			s++;
	}
	array[i] = 0;
	return (array);
}

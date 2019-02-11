/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 12:30:13 by vrestles          #+#    #+#             */
/*   Updated: 2018/12/04 14:59:47 by vrestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

static int		find_head(char const *s)
{
	int i;

	i = 0;
	while (*s)
	{
		if (is_whitespace(*s))
			i++;
		else
			break ;
		s++;
	}
	return (i);
}

static int		find_tail(char const *s)
{
	int i;

	i = (int)ft_strlen(s);
	s += i - 1;
	while (i > 0)
	{
		if (is_whitespace(*s))
			i--;
		else
			break ;
		s--;
	}
	return (i);
}

char			*ft_strtrim(char const *s)
{
	char			*c;
	unsigned int	start;
	size_t			len;
	int				n;

	if (s == NULL)
		return (NULL);
	start = (unsigned int)find_head(s);
	n = find_tail(s);
	if (n == 0)
		c = ft_strnew(0);
	else
	{
		len = (size_t)n - (size_t)start;
		c = (char *)malloc(sizeof(char) * (len + 1));
		if (c == NULL)
			return (NULL);
		c = ft_strsub(s, start, len);
	}
	return (c);
}

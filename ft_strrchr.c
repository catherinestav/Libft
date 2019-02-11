/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 12:47:24 by vrestles          #+#    #+#             */
/*   Updated: 2018/12/03 19:24:50 by vrestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*d;

	if (c == '\0')
		return (ft_strchr(s, c));
	d = NULL;
	while (*s)
	{
		if (*s == c)
			d = s;
		s++;
	}
	if (d == NULL)
		return (NULL);
	return ((char *)d);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 14:44:43 by vrestles          #+#    #+#             */
/*   Updated: 2018/12/03 13:11:49 by vrestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	c;
	char	*r;

	i = 0;
	while (haystack[i] && i < len)
	{
		r = (char *)&haystack[i];
		j = 0;
		c = 0;
		while (needle[j] && r[c] && r[c] == needle[j] && c < (len - i))
		{
			c++;
			j++;
		}
		if (needle[j] == '\0' && c <= (len - i))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

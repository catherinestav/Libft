/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:09:13 by vrestles          #+#    #+#             */
/*   Updated: 2018/12/04 20:06:57 by vrestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	int			i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (s < d)
	{
		while ((int)--len >= 0)
			*(d + len) = *(s + len);
	}
	else if (s == d)
		return (dst);
	else
	{
		while (i < (int)len)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	return (dst);
}

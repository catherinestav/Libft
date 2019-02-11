/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:33:53 by vrestles          #+#    #+#             */
/*   Updated: 2018/12/03 12:04:02 by vrestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned const char		*s;
	unsigned char			*d;

	i = 0;
	s = (unsigned const char *)src;
	d = (unsigned char *)dst;
	while (i < n)
	{
		*d = *s;
		if (*s == (unsigned char)c)
			return (++d);
		i++;
		d++;
		s++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 19:18:21 by vrestles          #+#    #+#             */
/*   Updated: 2018/12/04 15:55:33 by vrestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size == 0)
		return (dlen);
	if (dlen > size - 1)
		return (slen + size);
	dst += dlen;
	while (*src && dlen < size - 1)
	{
		*dst++ = *src++;
		dlen++;
		slen--;
	}
	*dst = '\0';
	return (dlen + slen);
}

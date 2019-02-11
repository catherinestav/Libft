/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 14:03:28 by vrestles          #+#    #+#             */
/*   Updated: 2018/12/03 13:06:06 by vrestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	char	*d;

	i = 0;
	d = (char *)dst;
	while (i < len)
	{
		if (*src)
		{
			*d = *src;
			src++;
		}
		else
			*d = '\0';
		d++;
		i++;
	}
	return (dst);
}

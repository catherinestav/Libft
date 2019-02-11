/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 12:03:56 by vrestles          #+#    #+#             */
/*   Updated: 2018/12/04 15:42:56 by vrestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned const char *n1;
	unsigned const char	*n2;

	n1 = (unsigned const char *)s1;
	n2 = (unsigned const char *)s2;
	if (n == 0)
		return (0);
	while (*n1 && (*n1 == *n2) && (--n > 0))
	{
		n1++;
		n2++;
	}
	return (*(unsigned char *)n1 - *(unsigned char *)n2);
}

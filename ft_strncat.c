/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 15:12:57 by vrestles          #+#    #+#             */
/*   Updated: 2018/12/03 13:07:25 by vrestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char		*m1;
	const char	*m2;
	size_t		len;

	m1 = (char *)s1;
	m2 = (const char *)s2;
	len = ft_strlen(s1);
	m1 += len;
	while (*m2 && n-- > 0)
	{
		*m1 = *m2;
		m1++;
		m2++;
	}
	*m1 = '\0';
	return (s1);
}

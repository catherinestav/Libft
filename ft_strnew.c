/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:05:23 by vrestles          #+#    #+#             */
/*   Updated: 2018/12/04 20:56:01 by vrestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*n;
	size_t	i;

	if (!++size)
		return (NULL);
	n = (char *)malloc(sizeof(char) * size);
	if (n == NULL)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		n[i] = 0;
		i++;
	}
	return (n);
}

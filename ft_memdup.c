/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 13:19:33 by vrestles          #+#    #+#             */
/*   Updated: 2018/12/04 13:21:24 by vrestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memdup(void const *src, size_t size)
{
	void	*res;

	res = (void *)malloc(size);
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, src, size);
	return (res);
}

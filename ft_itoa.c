/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:11:35 by vrestles          #+#    #+#             */
/*   Updated: 2018/12/04 15:11:58 by vrestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		count_numbers(int n)
{
	int	count;

	count = 1;
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char		*min_value(void)
{
	char	*res;
	int		i;
	int		nb;

	res = (char *)malloc(sizeof(char) * 12);
	if (res == NULL)
		return (NULL);
	nb = 214748364;
	i = 11;
	res[i--] = '\0';
	res[i--] = '8';
	while (i > 0)
	{
		res[i] = ((nb % 10) + '0');
		nb = nb / 10;
		i--;
	}
	res[i] = '-';
	return (res);
}

static char		*positive_num_into_char(int n)
{
	int		i;
	char	*res;

	i = count_numbers(n);
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (res == NULL)
		return (NULL);
	res[i--] = '\0';
	while (i >= 0)
	{
		res[i] = ((n % 10) + '0');
		n = n / 10;
		i--;
	}
	return (res);
}

static char		*negative_num_into_char(int n)
{
	int		i;
	char	*res;

	n = (-1) * n;
	i = count_numbers(n) + 1;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (res == NULL)
		return (NULL);
	res[i--] = '\0';
	while (i > 0)
	{
		res[i] = ((n % 10) + '0');
		n = n / 10;
		i--;
	}
	res[i] = '-';
	return (res);
}

char			*ft_itoa(int n)
{
	char	*res;

	if (n == -2147483648)
		res = min_value();
	else if (n < 0)
		res = negative_num_into_char(n);
	else
		res = positive_num_into_char(n);
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 14:36:10 by vrestles          #+#    #+#             */
/*   Updated: 2018/12/04 16:48:01 by vrestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*begin;

	if (lst == NULL || f == NULL)
		return (NULL);
	res = (t_list *)malloc(sizeof(t_list));
	begin = res;
	while (lst->next != NULL)
	{
		*(res) = *(f(lst));
		res->next = (t_list *)malloc(sizeof(t_list));
		res = res->next;
		lst = lst->next;
	}
	*(res) = *(f(lst));
	res->next = NULL;
	return (begin);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 09:06:19 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/04/01 09:06:21 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*pnew;

	if (!lst || !f)
		return (NULL);
	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new = f(lst);
	pnew = new;
	while (lst->next)
	{
		pnew->next = f(lst->next);
		pnew = pnew->next;
		lst = lst->next;
	}
	return (new);
}

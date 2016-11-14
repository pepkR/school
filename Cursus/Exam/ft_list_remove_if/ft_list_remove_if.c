/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:17:58 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/11/07 13:26:09 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if ((*begin_list)->next->data == data_ref)
	{
		free((*begin_list)->next_data);
		begin_list->data = NULL;
	}
	return(ft_list_remove_if(&(*begin_list)->next, *data_ref, (*cmp)()));
}

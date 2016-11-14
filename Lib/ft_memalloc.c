/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 09:06:33 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/04/01 09:06:35 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*ptr;

	ptr = NULL;
	if (size)
	{
		ptr = (char *)malloc(sizeof(char) * size);
		if (!ptr)
			return (NULL);
		ft_bzero(ptr, size);
	}
	return ((void *)ptr);
}

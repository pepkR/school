/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 09:07:06 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/04/01 09:07:07 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*ptrs;
	char		*ptrd;

	ptrs = (const char *)src;
	ptrd = (char *)dst;
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	ptrs += len;
	ptrd += len;
	while (len-- != 0)
		*--ptrd = *--ptrs;
	return (dst);
}

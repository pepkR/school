/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 09:06:39 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/04/01 09:06:41 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
		size_t n)
{
	unsigned char		*ptrd;
	const unsigned char	*ptrs;
	unsigned char		cc;

	ptrs = (const unsigned char *)src;
	ptrd = (unsigned char *)dst;
	cc = (unsigned char)c;
	while (n-- != 0)
	{
		*ptrd = *ptrs;
		if (*ptrs == cc)
			return (++ptrd);
		ptrd++;
		ptrs++;
	}
	return (NULL);
}

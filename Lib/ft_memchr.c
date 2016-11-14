/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 09:06:44 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/04/01 09:06:47 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		cc;
	const unsigned char	*ptrs;

	cc = (unsigned char)c;
	ptrs = (const unsigned char *)s;
	while (n-- != 0)
	{
		if (*ptrs == cc)
			return ((void *)ptrs);
		ptrs++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 09:09:33 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/04/01 09:09:35 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	char		*pdst;
	const char	*psrc;
	size_t		n;
	size_t		dlen;

	pdst = dst;
	psrc = src;
	n = size;
	while (*pdst != '\0' && n-- > 0)
		pdst++;
	dlen = pdst - dst;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(psrc));
	while (*psrc != '\0')
	{
		if (n > 1)
		{
			*pdst++ = *psrc;
			n--;
		}
		psrc++;
	}
	*pdst = '\0';
	return (dlen + (psrc - src));
}

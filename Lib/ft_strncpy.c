/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 09:10:07 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/04/01 09:10:12 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*pdst;

	pdst = dst;
	while (*src && len > 0)
	{
		*pdst = *src;
		pdst++;
		src++;
		len--;
	}
	if (len > 0)
		while (len > 0)
		{
			*pdst = '\0';
			pdst++;
			len--;
		}
	return (dst);
}

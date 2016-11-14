/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 09:10:28 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/04/01 09:10:30 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		llen;
	size_t		i;

	i = 0;
	llen = ft_strlen(little);
	if (!little)
		return ((char *)big);
	while (*big && (i + llen) <= len)
	{
		if (ft_memcmp(big, little, llen) == 0)
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}

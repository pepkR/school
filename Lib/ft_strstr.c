/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 09:10:50 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/04/01 09:10:51 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char		*pos;
	const char	*pl;

	if (!*little)
		return ((char *)big);
	while (*big)
	{
		if (*big == *little)
		{
			pos = (char *)big;
			pl = little;
			while (*big == *pl)
			{
				big++;
				pl++;
				if (*pl == '\0')
					return (pos);
				if (*big == '\0')
					return (NULL);
			}
			big = (const char *)pos;
		}
		big++;
	}
	return (NULL);
}

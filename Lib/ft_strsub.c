/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 09:10:54 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/04/01 09:10:56 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	s2 = NULL;
	if (s)
	{
		s2 = ft_strnew(len);
		if (s2 == NULL)
			return (NULL);
		s2 = ft_strncpy(s2, &(s[start]), len);
	}
	return (s2);
}

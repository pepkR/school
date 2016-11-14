/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 09:09:54 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/04/01 09:09:56 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;

	i = 0;
	s2 = NULL;
	if (s && f)
	{
		s2 = ft_strnew(ft_strlen(s));
		if (s2 == NULL)
			return (NULL);
		while (s[i])
		{
			s2[i] = f(i, s[i]);
			i++;
		}
	}
	return (s2);
}

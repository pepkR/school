/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 09:10:34 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/04/01 09:10:36 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *lst;
	char cc;

	lst = NULL;
	cc = (char)c;
	while (*s)
	{
		if (*s == cc)
			lst = (char *)s;
		s++;
	}
	if (*s == cc)
		lst = (char *)s;
	return (lst);
}

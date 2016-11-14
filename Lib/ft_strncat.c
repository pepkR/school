/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 09:10:00 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/11/14 12:26:57 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char	*ps1;

	ps1 = s1;
	while (*ps1)
		ps1++;
	while (n-- != 0)
	{
		*ps1 = *s2;
		ps1++;
		s2++;
	}
	*ps1 = '\0';
	return (s1);
}

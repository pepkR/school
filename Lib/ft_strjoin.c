/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 09:09:28 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/04/01 09:09:30 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*s3;

	s3 = NULL;
	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		s3 = ft_strnew(len);
		if (s3 == NULL)
			return (NULL);
		s3 = ft_strcpy(s3, s1);
		s3 = ft_strcat(s3, s2);
	}
	return (s3);
}

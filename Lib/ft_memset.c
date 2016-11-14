/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 09:07:09 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/04/01 09:07:14 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	cc;
	char			*pb;

	cc = (char)c;
	pb = (char *)b;
	while (len-- != 0)
		*(pb++) = c;
	return (b);
}

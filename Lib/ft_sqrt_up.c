/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_up.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 09:08:21 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/04/01 09:08:27 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_sqrt_up(unsigned int n)
{
	unsigned int ret;

	ret = 0;
	while (ret * ret < n)
		ret++;
	return (ret);
}

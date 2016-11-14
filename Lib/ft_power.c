/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 09:07:15 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/04/01 09:07:19 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_power(int n, int power)
{
	int res;

	res = n * n;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (n);
	if (power > 2)
		res = n * (ft_power(n, --power));
	return (res);
}

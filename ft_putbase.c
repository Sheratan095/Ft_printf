/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:39:52 by maceccar          #+#    #+#             */
/*   Updated: 2023/12/18 15:39:52 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put16(unsigned int lnb, char *base)
{
	int	i;

	i = 0;
	if (lnb > 15)
	{
		i += put16(lnb / 16, base);
		lnb %= 16;
	}
	if (lnb < 16)
	{
		i += ft_putchar(base[lnb]);
	}
	return (i);
}

int	ft_putbase(unsigned int nb, char *base)
{
	long	lnb;
	int		i;

	i = 0;
	lnb = nb;
	if (lnb > 15)
	{
		i += put16(lnb / 16, base);
		lnb %= 16;
	}
	if (lnb < 16)
	{
		i += ft_putchar(base[lnb]);
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedputnbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:40:22 by maceccar          #+#    #+#             */
/*   Updated: 2023/12/18 15:40:22 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsignedputnbr(int n)
{
	long	ln;

	ln = n;
	if (ln < 0)
	{
		ln = -ln;
		ln = 4294967296 - ln;
	}
	return (ft_putnbr(ln));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:39:47 by maceccar          #+#    #+#             */
/*   Updated: 2023/12/18 15:39:47 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

int		ft_putptr(unsigned long lnb, char *base);

int		ft_is_in(char c, const char *ptr);

int		ft_putchar(char c);

int		ft_putstr(const char *str);

int		ft_putnbr(long int nb);

int		ft_printf(const char	*format, ...);

int		ft_putbase(unsigned int nb, char *base);

int		ft_unsignedputnbr(int n);

#endif

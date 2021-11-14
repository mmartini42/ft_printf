/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 08:56:57 by mathmart          #+#    #+#             */
/*   Updated: 2021/11/14 21:40:47 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>

# define MAJ_HEXA "0123456789ABCDEF"
# define MIN_HEXA "0123456789abcdef"

/* MAIN */

int		ft_printf(const char *str, ...)__attribute__((format(printf, 1, 2)));

/* FUNCTIONS */

void	ft_print_c(va_list ap);
void	ft_print_s(va_list ap);
void	ft_print_p(va_list ap);
void	ft_print_d(va_list ap);
void	ft_print_i(va_list ap);
void	ft_print_u(va_list ap);
void	ft_print_x(va_list ap);
void	ft_print_majx(va_list ap);
void	ft_print_percent(va_list ap);

/* UTILS */

void	ft_putnbr(int n);
void	ft_putunbr(unsigned int nb);
void	ft_putchar(char c);
void	ft_putstr(const char *str);
void	ft_putnbr_base(unsigned int nbr, char *base);
void	ft_p_hexa(unsigned long long addr, int size);
size_t	ft_strlen(const char *str);

#endif

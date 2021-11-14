/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 20:08:34 by mathmart          #+#    #+#             */
/*   Updated: 2021/11/14 20:20:46 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_printf.h"

static void	ft_print_hexa(char *base, long nbr)
{
	if (nbr >= ft_strlen(base))
		ft_print_hexa(base, (nbr / ft_strlen(base)));
	ft_putchar(base[nbr % ft_strlen(base)]);
}

void	ft_putnbr_base(long nbr, char *base)
{
	if (nbr < 0)
	{
		dest[0] = '-';
		nbr *= -1;
	}
	ft_print_hexa(base,nbr);
}

void	ft_p_hexa(unsigned long long addr, int size)
{
	char	*base;
	char	hex[16];
	int		i;

	base = "0123456789abcdef";
	i = -1;
	while (++i < size)
		hex[i] = '0';
	i = -1;
	while (addr != 0)
	{
		hex[++i] = base[addr % 16];
		addr /= 16;
	}
	while (size > 0)
		write(1, &hex[--size], 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:47:47 by mathmart          #+#    #+#             */
/*   Updated: 2021/11/16 01:06:30 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_printf.h"

static void	ft_putnbr_ull_hexa(uintptr_t nbr, char *base, int *len)
{
	if (nbr >= ft_strlen(base))
		ft_putnbr_ull_hexa((nbr / ft_strlen(base)), base, len);
	*len += ft_putchar(base[nbr % ft_strlen(base)]);
}

int	ft_print_p(va_list ap)
{
	uintptr_t	addr;
	int			len;

	len = 0;
	addr = 0;
	addr += va_arg(ap, uintptr_t);
	len += ft_putstr("0x");
	ft_putnbr_ull_hexa(addr, MIN_HEXA, &len);
	return (len);
}

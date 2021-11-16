/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:47:57 by mathmart          #+#    #+#             */
/*   Updated: 2021/11/16 01:19:27 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_printf.h"

static void	ft_putnbr_base(unsigned int nbr, char *base, int *len)
{
	if (nbr >= ft_strlen(base))
		ft_putnbr_base((nbr / ft_strlen(base)), base, len);
	*len += ft_putchar(base[nbr % ft_strlen(base)]);
}

int	ft_print_x(va_list ap)
{
	unsigned int	nb;
	int				count;

	count = 0;
	nb = 0;
	nb += va_arg(ap, unsigned int);
	ft_putnbr_base(nb, MIN_HEXA, &count);
	return (count);
}

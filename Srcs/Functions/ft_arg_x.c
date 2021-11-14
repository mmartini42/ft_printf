/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:47:57 by mathmart          #+#    #+#             */
/*   Updated: 2021/11/14 21:17:59 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_printf.h"

void	ft_print_x(va_list ap)
{
	unsigned int	nb;

	nb = 0;
	nb += va_arg(ap, unsigned int);
	ft_putnbr_base(nb, MIN_HEXA);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_majx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:48:44 by mathmart          #+#    #+#             */
/*   Updated: 2021/11/14 21:17:21 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_printf.h"

void	ft_print_majx(va_list ap)
{
	unsigned int	nb;

	nb = 0;
	nb += va_arg(ap, unsigned int);
	ft_putnbr_base(nb, MAJ_HEXA);
}

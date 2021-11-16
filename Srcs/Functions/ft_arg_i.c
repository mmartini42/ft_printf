/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:47:28 by mathmart          #+#    #+#             */
/*   Updated: 2021/11/16 01:17:08 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_printf.h"

int	ft_print_i(va_list ap)
{
	int				nb;
	unsigned int	count;

	nb = 0;
	count = 0;
	nb += va_arg(ap, int);
	ft_putnbr(nb, &count);
	return (count);
}

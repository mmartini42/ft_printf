/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:42:35 by mathmart          #+#    #+#             */
/*   Updated: 2021/11/16 01:16:57 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_printf.h"

int	ft_print_d(va_list ap)
{
	int				nb;
	unsigned int	count;

	count = 0;
	nb = 0;
	nb += va_arg(ap, int);
	ft_putnbr(nb, &count);
	return (count);
}

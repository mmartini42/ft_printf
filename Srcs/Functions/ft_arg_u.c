/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:47:53 by mathmart          #+#    #+#             */
/*   Updated: 2021/11/15 23:18:15 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_printf.h"

int	ft_print_u(va_list ap)
{
	unsigned int	nb;
	unsigned int	count;

	count = 0;
	nb = 0;
	nb += va_arg(ap, unsigned int);
	ft_putunbr(nb, &count);
	return (count);
}

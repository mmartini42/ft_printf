/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:47:53 by mathmart          #+#    #+#             */
/*   Updated: 2021/11/14 21:17:53 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_printf.h"

void	ft_print_u(va_list ap)
{
	unsigned int	nb;

	nb = 0;
	nb += va_arg(ap, unsigned int);
	ft_putunbr(nb);
}

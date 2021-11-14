/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:47:47 by mathmart          #+#    #+#             */
/*   Updated: 2021/11/14 21:18:11 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_printf.h"

void	ft_print_p(va_list ap)
{
	unsigned long long	addr;

	addr = 0;
	addr += va_arg(ap, unsigned long long);
	ft_p_hexa(addr, 16);
}

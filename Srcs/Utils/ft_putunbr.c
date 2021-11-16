/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 20:48:12 by mathmart          #+#    #+#             */
/*   Updated: 2021/11/15 23:16:30 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_printf.h"

void	ft_putunbr(unsigned int nb, unsigned int *count)
{
	if (nb >= 10)
		ft_putnbr(nb / 10, count);
	*count += ft_putchar(nb % 10 + 48);
}

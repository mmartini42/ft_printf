/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:14:31 by mathmart          #+#    #+#             */
/*   Updated: 2021/11/15 23:31:03 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_printf.h"

void	ft_putnbr(int n, unsigned int *count)
{
	long	nb;

	nb = (long)n;
	if (nb < 0)
	{
		*count += ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr((nb / 10), count);
	*count += ft_putchar(nb % 10 + 48);
}

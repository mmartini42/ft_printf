/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 21:08:02 by mathmart          #+#    #+#             */
/*   Updated: 2021/11/16 01:37:50 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_printf.h"

int	ft_print_s(va_list ap)
{
	char	*str;
	int		len;

	len = 0;
	str = NULL;
	str = va_arg(ap, char *);
	len += ft_putstr(str);
	return (len);
}

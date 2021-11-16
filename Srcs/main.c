/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 08:59:47 by mathmart          #+#    #+#             */
/*   Updated: 2021/11/16 01:21:53 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

static void	ft_init(int (*ft_print[10])(va_list))
{
	ft_print[0] = ft_print_c;
	ft_print[1] = ft_print_s;
	ft_print[2] = ft_print_p;
	ft_print[3] = ft_print_d;
	ft_print[4] = ft_print_i;
	ft_print[5] = ft_print_u;
	ft_print[6] = ft_print_x;
	ft_print[7] = ft_print_majx;
	ft_print[8] = ft_print_percent;
}

static int	ft_get(char c, va_list ap, int (*ft_print[10])(va_list), int *nb)
{
	size_t	i;
	char	*base;

	base = "cspdiuxX%";
	i = 0;
	while (base[i])
	{
		if (base[i] == c)
		{
			*nb += ft_print[i](ap);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	size_t	i;
	int		(*ft_print[10])(va_list);
	int		nb;

	i = 0;
	nb = 0;
	va_start(ap, str);
	ft_init(ft_print);
	while (str[i])
	{
		if (str[i] && str[i] == '%')
		{
			if (!ft_get(str[i + 1], ap, ft_print, &nb) && i + 1)
				return (-1);
			i++;
		}
		else
			nb += ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (nb);
}

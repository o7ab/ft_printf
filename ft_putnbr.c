/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:34:40 by oabushar          #+#    #+#             */
/*   Updated: 2021/11/16 20:07:23 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, t_list *plist)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		plist->len += 11;
		return ;
	}
	else if (n < 0)
	{
		ft_putchar('-', plist);
		n *= -1;
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + 48, plist);
		return ;
	}
	else
	{
		ft_putnbr(n / 10, plist);
		ft_putnbr(n % 10, plist);
	}
}

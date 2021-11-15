/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:34:40 by oabushar          #+#    #+#             */
/*   Updated: 2021/11/15 16:09:30 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int len)
{
	if (n == -2147483648)
	{
		ft_putchar('-', len);
		ft_putchar('2', len);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-', len);
		n *= -1;
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + 48, len);
		return ;
	}
	else
	{
		ft_putnbr(n / 10, len);
		ft_putnbr(n % 10, len);
	}
}

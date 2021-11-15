/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:09:43 by oabushar          #+#    #+#             */
/*   Updated: 2021/11/15 16:12:41 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned n, int len)
{
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
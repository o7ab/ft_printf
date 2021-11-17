/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:12:56 by oabushar          #+#    #+#             */
/*   Updated: 2021/11/16 21:32:46 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(unsigned long long n, char c, t_list *plist)
{
	char	*hex;

	if (!n)
	{
		write(1, "0x0", 3);
		plist->len += 3;
		plist->i++;
	}
	else
	{
		write(1, "0x", 2);
		plist->len += 2;
		plist->i++;
		hex = "0123456789abcdef";
		if (c == 'X')
			hex = "0123456789ABCDEF";
		if (n > 15)
			ft_puthex(n / 16, c, plist);
		ft_putchar(hex[n % 16], plist);
	}
}

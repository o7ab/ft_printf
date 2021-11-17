/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:09:43 by oabushar          #+#    #+#             */
/*   Updated: 2021/11/16 21:32:24 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned n, t_list *plist)
{
	if (n >= 0 && n <= 9)
	{
		ft_pchar(n + 48, plist);
		return ;
	}
	else
	{
		ft_putnbr(n / 10, plist);
		ft_putnbr(n % 10, plist);
		plist->i++;
	}
}

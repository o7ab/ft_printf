/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpercent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:26:31 by oabushar          #+#    #+#             */
/*   Updated: 2021/11/16 10:56:56 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpercent(int i, t_list *plist)
{
	i = 0;
	ft_putchar('%', plist);
	plist->i++;
}
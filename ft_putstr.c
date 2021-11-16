/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:03:32 by oabushar          #+#    #+#             */
/*   Updated: 2021/11/16 15:01:17 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, t_list *plist)
{
	int	j;

	if (s == NULL)
	{
		write (1, "(null)", 6);
		plist->len += 6;
		plist->i++;
	}
	else
	{
		j = ft_strlen(s);
		write (1, s, j);
		plist->len += j;
		plist->i++;
	}
}

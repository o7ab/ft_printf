/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:18:53 by oabushar          #+#    #+#             */
/*   Updated: 2021/11/15 16:05:28 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_getspecifier(const char *input, int i)
{
	if (input[i] == '%')
		i = i + 1;
	if (ft_strchr("cspdiuxX%", input[i]) != 0)
		return (input[i]);
	return (0);
}

void	ft_printspecifer(const char *input, va_list plist, int i, int len)
{
	char specifier;

	specifier = ft_getspecifier(input, i);
	if (specifier == 'c')
		ft_pchar(va_arg(plist, int), i, len);
	if (specifier == 'd' || 'i')
		ft_putnbr()
}

int	ft_printf(const char *input, ...)
{
	va_list	plist;
	int	i;
	int len;

	i = 0;
	len = 0;
	va_start(plist, input);
	while (input[i] != 0)
	{
		if (input[i] == '%')
		{
			ft_printspecifier(input, plist, i, len);
		}
		else
		{
			write(1, &input[i], 1);
			i++;
			len++;
		}
	}
	va_end(plist);
}

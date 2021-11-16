/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:18:53 by oabushar          #+#    #+#             */
/*   Updated: 2021/11/16 12:57:04 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_pchar.c"
#include "ft_putnbr.c"
#include "ft_putstr.c"
#include "ft_strchr.c"
#include "ft_putchar.c"
#include "ft_strlen.c"
#include "ft_puthex.c"
#include "ft_putpercent.c"
#include "ft_putptr.c"
#include "ft_putunsigned.c"

char	ft_getspecifier(const char *input, t_list *plist)
{
	if (input[plist->i] == '%')
		plist->i++;
	if (ft_strchr("cspdiuxX%", input[plist->i]) != 0)
		return (input[plist->i]);
	return (0);
}

void	ft_printspecifier(const char *input, t_list *plist)
{
	char specifier;

	specifier = ft_getspecifier(input, plist);
	if (specifier == 'c')
		ft_pchar(va_arg(plist->arg, int), plist);
	else if (specifier == 'd' || specifier == 'i')
	{
		ft_putnbr(va_arg(plist->arg, int), plist);
		plist->i++;
	}
	else if (specifier == 's')
		ft_putstr(va_arg(plist->arg, char *), plist);
	else if (specifier == 'u')
		ft_putunsigned(va_arg(plist->arg, unsigned long), plist);
	else if (specifier == '%')
		ft_putpercent(va_arg(plist->arg, int), plist);
	else if (specifier == 'x' || specifier == 'X')
		ft_puthex(va_arg(plist->arg, unsigned long long int), specifier, plist);
	else if (specifier == 'p')
		ft_putptr(va_arg(plist->arg, unsigned long long int), specifier, plist);
	else 
	{
		ft_putchar(input[plist->i], plist);
		plist->i++;
	}
}

int	ft_printf(const char *input, ...)
{
	t_list plist;

	plist.len = 0;
	plist.i = 0;
	va_start(plist.arg, input);
	while (input[plist.i] != 0)
	{
		if (input[plist.i] == '%')
		{
			ft_printspecifier(input, &plist);
			//plist.i++;
		}
		else
		{
			write(1, &input[plist.i], 1);
			plist.i++;
			plist.len++;
		}
	}
	va_end(plist.arg);
	return (plist.len);
}
// int main()
// {
// 	int mylen = ft_printf("42 - 84 is %d", -42);
// 	printf("%i\n", mylen);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:52:59 by oabushar          #+#    #+#             */
/*   Updated: 2021/11/16 10:57:29 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long long n, char c, t_list *plist)
{
	char *hex;

	hex = "0123456789abcdef";
	if (c == 'X')
		hex = "0123456789ABCDEF";
	if (n > 15)
		ft_puthex(n / 16, c, plist);
	ft_putchar(hex[n % 16], plist);
}
// // int main()
// // {
// // 	ft_puthex(010, 'x', 0, 0);
// // 	return (0);
// }
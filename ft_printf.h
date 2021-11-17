/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:24:47 by oabushar          #+#    #+#             */
/*   Updated: 2021/11/16 21:33:57 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	va_list	arg;
	int		i;
	int		len;
}	t_list;

void	ft_putchar(char c, t_list *plist);
int		ft_printf(const char *input, ...);
void	ft_pchar(char c, t_list *plist);
char	*ft_strchr(const char *s, int c);
void	ft_putnbr(int n, t_list *plist);
size_t	ft_strlen(const char *str);
void	ft_putstr(char *s, t_list *plist);
void	ft_putunsigned(unsigned n, t_list *plist);
void	ft_putpercent(t_list *plist);
void	ft_putptr(unsigned long long n, char c, t_list *plist);
void	ft_puthex(unsigned long long n, char c, t_list *plist);

#endif
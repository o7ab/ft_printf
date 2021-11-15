/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 21:23:01 by oabushar          #+#    #+#             */
/*   Updated: 2021/11/15 01:14:42 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	j;

	j = (char) c;
	i = 0;
	if (c == 0)
	{
		return ((char *)s + ft_strlen((char *)s));
	}
	while (s[i])
	{
		if (s[i] == j)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (0);
}
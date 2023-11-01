/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:18:12 by linhnguy          #+#    #+#             */
/*   Updated: 2023/11/01 15:59:33 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*d;

	d = s;
	i = 0;
	while (i < n)
	{
		if (d[i] == c)
			return ((void *) &s[i]);
		i++;
	}
	return (NULL);
}

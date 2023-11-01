/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:31:29 by linhnguy          #+#    #+#             */
/*   Updated: 2023/11/01 18:56:59 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *)dest;
	s = (const char *)src;

	if (d[i] == '\0' || s[i] == '\0')
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return ((void *)dest);
}

// int	main(void)
// {
// 	char dest[50] = "";
// 	char src [50] = "What";
// 	size_t n = 5;
// printf("%p", ft_memcpy(dest,src,n));
// printf("%p", memcpy(dest,src,n));
	
// }


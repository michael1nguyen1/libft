/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:21:09 by linhnguy          #+#    #+#             */
/*   Updated: 2023/11/01 15:53:21 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	if (str1[i] == '\0' && str2[i] == '\0')
		return (0);
	else if (str1[i] == '\0' || str2[i] == '\0')
		return ((unsigned char) str1[i] - (unsigned char) str2 [i]);
	while (i < n && str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2 [i]);
		i++;
	}
	return (0);
}
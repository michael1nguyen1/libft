/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:04:22 by linhnguy          #+#    #+#             */
/*   Updated: 2023/10/30 17:58:43 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char* ft_strrchr(const char *s, int c)
{
int i;
i = (Null);

while (s[i])
	{
	if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
			i--;
	}
	return (NULL);

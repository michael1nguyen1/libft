/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:06:27 by linhnguy          #+#    #+#             */
/*   Updated: 2023/10/30 17:58:21 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char* ft_strchr(const char *s, int c)
{
int i;
i = 0;

while (s[i])
	{
	if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
			i++;
	}
	return (NULL);
}

// int main (void)
// {
// const char s[] = "Smart";
// int c = 'p';
// printf("%s" ,ft_strchr(s, c));
// return (0);
// }
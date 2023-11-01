/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:13:48 by linhnguy          #+#    #+#             */
/*   Updated: 2023/11/01 12:48:53 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void ft_bzero(void *s, size_t n)
{
char * d;	
size_t i;
i = 0;
d = s;

while (i < n)
	{
	d[i] = '\0';
	i++;
	}
}

// int main(void)
// {
// char s[] = "what";
// size_t n = 3;
// // printf("%s", ft_bzero(s,n))
// // printf("%s", bzero(s,n))
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:29:08 by linhnguy          #+#    #+#             */
/*   Updated: 2023/10/30 17:53:09 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int n)
{
	if ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z'))
		return (1);
	else
		return (0);
}

/*int main (void)
{
int n = '_';
if (ft_isalpha (n))
	printf ("%c is an alpha", n);
else 
	printf ("%c is not an alpha", n);
return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:04:17 by linhnguy          #+#    #+#             */
/*   Updated: 2023/10/30 18:12:45 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int n)
{
	if (n >= 0 && n <= 127)
		return (1);
	else
		return (0);
}

// int main (void)
// {
// int n = '╥';
// // int n = 'a';
// if (ft_isascii(n))
// 	printf("%c is ascii", n);
// else 
// 	printf("%c is not ascii", n);

// }

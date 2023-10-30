/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:25:32 by linhnguy          #+#    #+#             */
/*   Updated: 2023/10/24 15:25:34 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdio.h>

int	ft_isalpha(int n);

int ft_isdigit(int n);

int ft_isalnum(int n);

int ft_isprint(int n);

int ft_strlen(const char *s);

int ft_toupper(int c);

int	ft_tolower(int c);

char* ft_strchr(const char *s, int c);

#endif // LIBFT_H
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:17:11 by ehafidi           #+#    #+#             */
/*   Updated: 2019/10/26 19:13:36 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int		ft_countdigit(int n)
{
	int count;
	int nega;

	nega = 0;
	if (n < 0)
		nega++;
	count = 0;
	if (n == 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count + 1 + nega);
}

int		ft_sign(int n)
{
	int sign;

	sign = 0;
	if (n < 0)
		sign++;
	return (sign);
}

char	*ft_itoa(int n)
{
	long	n_l;
	char	*arr;
	int		dig;

	n_l = n;
	if (n_l < 0)
		n_l = -n_l;
	dig = ft_countdigit(n);
	if (!(arr = (char *)(malloc(sizeof(*arr) * (dig)))))
		return (NULL);
	arr[dig - 1] = '\0';
	while (dig != 0)
	{
		dig--;
		arr[dig - 1] = n_l % 10 + '0';
		n_l /= 10;
	}
	if (ft_sign(n) == 1)
		*arr = '-';
	return (arr);
}

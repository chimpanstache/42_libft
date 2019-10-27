/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:26:43 by ehafidi           #+#    #+#             */
/*   Updated: 2019/10/24 11:50:23 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int     ft_atoi(const char *str)
{
/*    long i;
    long nb;

    i = 0;
    nb = 0;
	while (*str == '\n' || *str == '\v' || *str == '\f' ||
			*str == '\r' || *str == '\t' || *str == ' ')
		str++;
    while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			i++;
		str++;
        break;
	}
	while ('0' <= *str && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	if (i % 2 != 0)
		nb = -nb;
	return (nb);
} */

	long long int result;
	long long int neg;

	neg = 1;
	result = 0;
	while (*str == 32 || *str == 10 || *str == 9 || *str == 12 ||
			*str == 13 || *str == 11)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
			return (result * neg);
		else
			result = (result * 10) + (long long int)(*str - '0');
		str++;
	}
	return (result * neg);
}
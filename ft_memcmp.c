/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:40:50 by ehafidi           #+#    #+#             */
/*   Updated: 2019/10/26 16:41:01 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s_1;
	unsigned char *s_2;

	s_1 = (unsigned char *)s1;
	s_2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*s_1 < *s_2)
			return (*s_1 - *s_2);
		if (*s_1 > *s_2)
			return (*s_1 - *s_2);
		n--;
		s_1++;
		s_2++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:09:44 by ehafidi           #+#    #+#             */
/*   Updated: 2019/10/26 16:34:30 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	char *str;

	if (s == NULL)
		return (NULL);
	str = s;
	while (len > 0)
	{
		*str = c;
		str++;
		len--;
	}
	return (s);
}

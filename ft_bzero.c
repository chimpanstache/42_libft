/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:30:16 by ehafidi           #+#    #+#             */
/*   Updated: 2019/10/26 16:35:07 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	char *str;

	if (s == NULL)
		return ;
	str = s;
	while (len > 0)
	{
		*str = '\0';
		str++;
		len--;
	}
}

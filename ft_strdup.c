/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:26:12 by ehafidi           #+#    #+#             */
/*   Updated: 2019/10/26 17:38:22 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *copy;
	char *start;

	if (!(copy = (char *)malloc(sizeof(*copy) * (ft_strlen(s) + 1))))
		return (NULL);
	start = copy;
	while (*s)
	{
		*copy = *s;
		copy++;
		s++;
	}
	*copy = '\0';
	return (start);
}

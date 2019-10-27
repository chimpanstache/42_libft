/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:41:00 by ehafidi           #+#    #+#             */
/*   Updated: 2019/10/26 17:42:56 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*arr;
	const char	*ptr;
	char		*ret;

	if (!s || start > len)
		return (NULL);
	ptr = s + start;
	if (!(arr = (char *)malloc(sizeof(*arr) * (len + 1))))
		return (NULL);
	ret = arr;
	while (len != 0)
	{
		*arr = *ptr;
		ptr++;
		arr++;
		len--;
	}
	*arr = '\0';
	return (ret);
}

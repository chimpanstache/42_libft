/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:41:00 by ehafidi           #+#    #+#             */
/*   Updated: 2019/11/04 11:49:13 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	int 	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		if (!(arr = malloc(sizeof(*arr))))
			return (NULL);
		*arr = '\0';
		return (arr);
	}
	if (!(arr = (char *)malloc((sizeof(*arr)) * (len + 1))))
		return (NULL);
	i = 0;
	while (len-- && start < ft_strlen(s))
	{
		arr[i] = s[start];
		i++;
		start++;
	}
	arr[i] = '\0';
	return (arr);
}

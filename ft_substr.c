/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:41:00 by ehafidi           #+#    #+#             */
/*   Updated: 2019/11/14 10:06:01 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*arr;

	if (!s)
		return (0);
	if (!(arr = malloc(sizeof(*arr) * (len + 1))))
		return (0);
	i = 0;
	if (ft_strlen(s) > start)
	{
		while (i < len && s[start + i])
		{
			arr[i] = s[start + i];
			i++;
		}
	}
	arr[i] = '\0';
	return (arr);
}

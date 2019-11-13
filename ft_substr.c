/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:41:00 by ehafidi           #+#    #+#             */
/*   Updated: 2019/11/13 17:57:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*arr;

	i = 0;
	if (!s)
		return (0);
	if (!(arr = malloc(sizeof(*arr) * (len + 1))))
		return (0);
	if (ft_strlen(s) > start)
	{
		while (i < len && s[start + i])
		{
			arr[i] = s[start + i];
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}

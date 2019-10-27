/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 13:37:05 by ehafidi           #+#    #+#             */
/*   Updated: 2019/10/26 19:12:09 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;
	char			*res_strt;

	if (s == '\0')
		return (NULL);
	if (!(result = ft_strdup((char const *)s)))
		return (NULL);
	i = 0;
	res_strt = result;
	while (*result)
	{
		*result = f(i, *result);
		result++;
		s++;
		i++;
	}
	return (res_strt);
}

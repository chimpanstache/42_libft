/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:40:25 by ehafidi           #+#    #+#             */
/*   Updated: 2019/10/26 18:53:47 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		trim(char const *set, char *trimstrt)
{
	char *set_strt;

	set_strt = (char *)set;
	while (*set)
	{
		if (*trimstrt == *set)
			return (1);
		set++;
	}
	set = set_strt;
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *trimstrt;
	char *trimend;
	char *new;

	if (!s1 || !set)
		return (NULL);
	trimstrt = (char *)s1;
	trimend = (char *)s1 + ft_strlen(s1);
	while (trim(set, trimstrt))
	{
		trimstrt++;
		if (trimstrt == trimend)
			return ("\0");
	}
	trimend--;
	while (trim(set, trimend))
		trimend--;
	new = ft_substr(trimstrt, 0, trimend - trimstrt + 1);
	return (new);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:40:25 by ehafidi           #+#    #+#             */
/*   Updated: 2019/11/05 10:07:35 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		trim(char const *set, char *trimstrt)
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

char				*ft_strtrim(char const *s1, char const *set)
{
	char	*trimstrt;
	char	*trimend;
	char	*new;
	int		cal;
	int		i;

	if (!s1 || !set)
		return (NULL);
	trimstrt = (char *)s1;
	trimend = (char *)s1 + ft_strlen(s1);
	while (trim(set, trimstrt))
		trimstrt++;
	if (trimstrt < trimend)
		trimend--;
	while (trim(set, trimend))
		trimend--;
	cal = trimend - trimstrt + 1;
	if (!(new = (char *)malloc(sizeof(*new) * (cal + 1))))
		return (NULL);
	i = 0;
	while (cal-- > 0)
		new[i++] = *trimstrt++;
	new[i] = '\0';
	return (new);
}

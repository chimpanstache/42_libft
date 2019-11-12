/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:40:25 by ehafidi           #+#    #+#             */
/*   Updated: 2019/11/08 20:02:12 by ehafidi          ###   ########.fr       */
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
	char	*trstrt;
	char	*trnd;
	char	*new;
	int		s;
	int		i;

	if (!s1 || !set)
		return (NULL);
	trstrt = (char *)s1;
	trnd = (char *)s1 + ft_strlen(s1);
	while (trim(set, trstrt))
		trstrt++;
	if (trstrt < trnd)
		trnd--;
	while (trim(set, trnd))
		trnd--;
	s = trnd - trstrt + 1;
	if (!(new = (char *)malloc(sizeof(*new) * (s + 1))))
		return (NULL);
	i = 0;
	while (s-- > 0 && *trstrt)
		new[i++] = *trstrt++;
	new[i] = '\0';
	return (new);
}

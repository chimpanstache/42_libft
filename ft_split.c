/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 20:51:58 by ehafidi           #+#    #+#             */
/*   Updated: 2019/11/05 10:06:55 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_wrdnb(char const *s, char c)
{
	size_t wrdnmb;

	wrdnmb = 0;
	while (*s)
	{
		if (*s != c)
			if ((*(s - 1) != c && *(s + 1) == c) ||
					*(s + 1) == '\0' ||
					*(s + 1) == c)
				wrdnmb++;
		s++;
	}
	return (wrdnmb);
}

static char		**ft_liberate(char **arr, size_t ind)
{
	size_t i;

	i = 0;
	while (i < ind)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static char		*advance_in_str(char *ptr, char c)
{
	while (*ptr == c)
		ptr++;
	return (ptr);
}

static char		*advance_in_str_bis(char *ptr, char c, char const *s)
{
	ptr = (char *)s + 1;
	while (*ptr == c)
		ptr++;
	return (ptr);
}

char			**ft_split(char const *s, char c)
{
	size_t	wrdnb;
	char	**arr;
	char	*wd;
	size_t	ind;

	ind = 0;
	if (!s || (!(wrdnb = ft_wrdnb(s, c))))
		return (NULL);
	if (!(arr = ((char **)malloc(sizeof(char *) * (wrdnb + 1)))))
		return (NULL);
	s = advance_in_str((char *)s, c);
	wd = (char *)s;
	while (*s)
	{
		if ((*s == c || *(s + 1) == '\0') && *wd != c && (s - wd >= 0))
		{
			ind++;
			if (!(*(arr++) = ft_substr(wd, 0, *s == c ? s - wd : (s + 1) - wd)))
				return (ft_liberate(arr - 1, ind));
			wd = advance_in_str_bis(wd, c, s);
		}
		s++;
	}
	*arr = NULL;
	return (arr - wrdnb);
}

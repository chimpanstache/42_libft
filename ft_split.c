/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 20:51:58 by ehafidi           #+#    #+#             */
/*   Updated: 2019/10/26 19:09:35 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int		ft_wrdnb(char const *s, char c)
{
	int wrdnmb;

	wrdnmb = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		if (*(s - 1) != c && (*s == c || *(s + 1) == '\0'))
			wrdnmb++;
		s++;
	}
	return (wrdnmb);
}

char	*ft_liberate(char **arr, int ind)
{
	int i;

	i = 0;
	while (i < ind)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	*advance_in_str(char *ptr, char c)
{
	while (*ptr == c)
		ptr++;
	return (ptr);
}

char	*advance_in_str_bis(char *ptr, char c, char const *s)
{
	ptr = (char *)s + 1;
	while (*ptr == c)
		ptr++;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		wrdnb;
	char	**arr;
	char	*wd;
	int		ind;

	ind = 0;
	if (!s || (!(wrdnb = ft_wrdnb(s, c))))
		return (NULL);
	if (!(arr = ((char **)malloc(sizeof(char *) * (wrdnb + 1)))))
		return (NULL);
	s = advance_in_str((char *)s, c);
	wd = (char *)s;
	while (*s)
	{
		if ((*s == c || *(s + 1) == '\0') && *wd != c && (s - wd > 0))
		{
			if (!(*(arr++) = ft_substr(wd, 0, *s == c ? s - wd : (s + 1) - wd)))
				ft_liberate(arr, ind);
			wd = advance_in_str_bis(wd, c, s);
		}
		s++;
		ind++;
	}
	*arr = NULL;
	return (arr - wrdnb);
}

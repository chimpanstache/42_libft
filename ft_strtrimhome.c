/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:40:25 by ehafidi           #+#    #+#             */
/*   Updated: 2019/10/16 12:51:58 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>



char	*ft_strtrim(char const *s1, char const *set);
{
	char *trimstrt;
	char *trimend;
	
	while (*s1)	
	{
		while (*s1 == *set)
		{
			if (*(set + 1) == '\0')
				trimstrt = s1;
			if (*(set + 1) == '\0' && *(s1 + 1) == '\0')
				trimend = s1 - ft_strlen(set);
			set++;
			s1++;
		}
		*s1++;
	}
}


int		main()
{
	*ft_strtrim("***gunshot***", "**");
	return (0);
}
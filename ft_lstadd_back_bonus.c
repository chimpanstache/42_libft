/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stuntman <stuntman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 13:06:36 by ehafidi           #+#    #+#             */
/*   Updated: 2021/01/06 14:49:11 by stuntman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *ptr;
	t_list *debut;

	if (new && alst)
	{
		if (!*alst)
			*alst = new;
		else
		{
			debut = *alst;
			ptr = ft_lstlast(debut);
			ptr->next = new;
			new->next = 0;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stuntman <stuntman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:04:31 by ehafidi           #+#    #+#             */
/*   Updated: 2021/01/06 14:49:27 by stuntman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (new && alst)
	{
		if (!*alst)
			*alst = new;
		else
		{
			new->next = *alst;
			*alst = new;
		}
	}
}

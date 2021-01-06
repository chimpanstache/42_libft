/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stuntman <stuntman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 19:10:23 by ehafidi           #+#    #+#             */
/*   Updated: 2021/01/06 14:49:57 by stuntman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *debut;
	t_list *suivant;

	if (lst && *lst && del)
	{
		debut = *lst;
		suivant = 0;
		while (debut)
		{
			suivant = (debut->next);
			ft_lstdelone(debut, del);
			debut = suivant;
		}
		*lst = 0;
	}
}
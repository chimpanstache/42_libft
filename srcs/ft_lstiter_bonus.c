/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stuntman <stuntman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:45:50 by ehafidi           #+#    #+#             */
/*   Updated: 2021/01/06 14:50:41 by stuntman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *ptr;

	ptr = lst;
	if (lst && f)
	{
		while (ptr)
		{
			(*f)(ptr->content);
			ptr = ptr->next;
		}
	}
}
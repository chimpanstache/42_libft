/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stuntman <stuntman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 19:06:15 by ehafidi           #+#    #+#             */
/*   Updated: 2021/01/06 15:25:30 by stuntman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *ptr;

	if ((ptr = (t_list*)malloc(sizeof(*ptr))))
	{
		ptr->content = (void*)content;
		ptr->next = 0;
	}
	return (ptr);
}
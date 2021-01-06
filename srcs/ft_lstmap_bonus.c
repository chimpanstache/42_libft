/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stuntman <stuntman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 19:44:25 by ehafidi           #+#    #+#             */
/*   Updated: 2021/01/06 15:20:28 by stuntman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	int		size_lst;
	int		i;

	if (!lst || !f || !del)
		return (0);
	size_lst = ft_lstsize(lst);
	i = 0;
	if (!(ptr = (t_list*)malloc(sizeof(t_list) * size_lst)))
		return (0);
	while (lst)
	{
		ptr[i].content = f(lst->content);
		if (i < (size_lst - 1))
			ptr[i].next = &ptr[i + 1];
		else
			ptr[i].next = 0;
		i++;
		lst = lst->next;
	}
	return (ptr);
}
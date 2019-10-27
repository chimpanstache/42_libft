/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:19:47 by ehafidi           #+#    #+#             */
/*   Updated: 2019/10/26 19:25:58 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_write(long tab, int fd)
{
	char c;

	c = tab + '0';
	write(fd, &c, 1);
}

void	ft_reversive(long lnb, int fd)
{
	long a;

	if (lnb != 0)
	{
		a = lnb % 10;
		ft_reversive((lnb / 10), fd);
		ft_write(a, fd);
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	long lnb;

	lnb = nb;
	if (lnb == 0)
		ft_write(lnb, fd);
	if (lnb < 0)
	{
		lnb = -lnb;
		write(fd, "-", 1);
	}
	ft_reversive(lnb, fd);
}

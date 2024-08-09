/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjungk <minjungk@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 00:29:45 by minjungk          #+#    #+#             */
/*   Updated: 2024/08/09 20:39:56 by minjungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	ssize_t	len;

	len = 0;
	while (s && s[len])
	{
		if (++len < 1024)
			continue ;
		if (len != write(fd, s, len))
			return ;
		s += len;
		len = 0;
	}
	if (len != write(fd, s, len))
		return ;
}

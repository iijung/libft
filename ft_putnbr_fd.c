/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjungk <minjungk@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 00:33:55 by minjungk          #+#    #+#             */
/*   Updated: 2024/08/09 20:55:51 by minjungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int				i;
	char			tmp[10];
	unsigned int	num;

	num = n;
	if (n == 0)
		return (ft_putchar_fd('0', fd));
	if (n < 0)
	{
		num = -n;
		ft_putchar_fd('-', fd);
	}
	i = 0;
	while (num)
	{
		tmp[i++] = num % 10 + '0';
		num /= 10;
	}
	while (--i >= 0)
		ft_putchar_fd(tmp[i], fd);
}

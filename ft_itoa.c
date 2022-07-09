/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjungk <minjungk@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 22:05:50 by minjungk          #+#    #+#             */
/*   Updated: 2022/07/09 23:16:59 by minjungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	int		tmp;
	char	*rtn;

	len = (n < 0) - (n > 0);
	tmp = n;
	while (tmp)
	{
		tmp /= 10;
		++len;
	}
	rtn = ft_calloc(len + 1, sizeof(char));
	if (rtn == 0)
		return (0);
	rtn[0] = '-';
	while (n && --len >= 0)
	{
		rtn[len] = n % 10;
		n /= 10;
	}
	return (rtn);
}

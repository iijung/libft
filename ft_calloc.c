/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjungk <minjungk@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 21:41:22 by minjungk          #+#    #+#             */
/*   Updated: 2022/07/09 21:16:56 by minjungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	size_t			tmp;
	unsigned char	*rtn;

	tmp = count * size;
	if (tmp < count || tmp < size)
		return (0);
	rtn = (unsigned char *)malloc(count * size);
	if (rtn)
	{
		i = -1;
		while (++i < count * size)
			rtn[i] = 0;
	}
	return (rtn);
}

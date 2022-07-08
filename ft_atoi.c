/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjungk <minjungk@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 20:10:10 by minjungk          #+#    #+#             */
/*   Updated: 2022/07/08 21:29:47 by minjungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int				sign;
	unsigned long	rtn;

	rtn = 0;
	sign = 1;
	while ((9 <= *str && *str <= 13) || *str == ' ')
		++str;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	while ('0' <= *str && *str <= '9')
	{
		rtn = rtn * 10 + *str - '0';
		if (sign > 0 && rtn > 0x7FFFFFFFFFFFFFFF)
			return ((int)0x7FFFFFFFFFFFFFFF);
		if (sign < 0 && rtn > 0x8000000000000000)
			return ((int)0x8000000000000000);
		++str;
	}
	rtn *= sign;
	return ((int)rtn);
}

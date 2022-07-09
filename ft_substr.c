/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjungk <minjungk@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:10:13 by minjungk          #+#    #+#             */
/*   Updated: 2022/07/10 03:47:35 by minjungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*dst;

	if (s == 0)
		return (0);
	slen = ft_strlen(s);
	if (slen <= start)
		len = 0;
	if (slen < len)
		len = slen;
	dst = (char *)ft_calloc(len + 1, sizeof(char));
	if (dst)
	{
		i = -1;
		while (++i < len && s[start + i])
			dst[i] = s[start + i];
	}
	return (dst);
}

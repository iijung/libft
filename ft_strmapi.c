/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjungk <minjungk@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 23:53:23 by minjungk          #+#    #+#             */
/*   Updated: 2022/12/05 22:58:31 by minjungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	slen;
	char	*rtn;

	if (s == NULL)
		return (NULL);
	i = -1;
	slen = ft_strlen(s);
	rtn = (char *)ft_calloc(slen + 1, sizeof(char));
	while (rtn && s[++i])
		rtn[i] = f(i, s[i]);
	return (rtn);
}

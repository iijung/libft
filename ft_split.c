/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjungk <minjungk@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:18:06 by minjungk          #+#    #+#             */
/*   Updated: 2022/07/09 20:35:42 by minjungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_word(char *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		while (*s && *s == c)
			++s;
		if (*s)
			++cnt;
		while (*s && *s != c)
			++s;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	size_t	cnt;
	char	*start;
	char	*end;
	char	**rtn;

	if (s == 0)
		return (0);
	cnt = count_word((char *)s, c);
	rtn = ft_calloc(cnt + 1, sizeof(char *));
	start = ft_strrchr(s, 0);
	while (rtn)
	{
		end = start - 1;
		start = (char *)s;
		if (start > end)
			break ;
		while (*end == c)
			--end;
		start = end;
		while (start && start != s - 1 && *start != c)
			--start;
		rtn[--cnt] = ft_substr(s, start - s + 1, end - start);
	}
	return (rtn);
}

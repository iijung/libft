/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjungk <minjungk@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:40:40 by minjungk          #+#    #+#             */
/*   Updated: 2022/07/08 18:49:41 by minjungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{

}
#if 0
The strnstr() function 
locates the first occurrence of the null-terminated string needle in the string haystack, 
where not more than len characters are searched. 

Characters that appear after a `\0' character are not searched.
Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern.

While the strcasestr() function uses the current locale, the strcasestr_l() function may be passed a locale directly. See xlocale(3) for more information.

RETURN VALUES
If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned; otherwise a pointer to the first character of the first occurrence of needle is returned.
#endif

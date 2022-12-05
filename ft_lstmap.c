/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjungk <minjungk@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 01:53:35 by minjungk          #+#    #+#             */
/*   Updated: 2022/12/06 00:21:20 by minjungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

enum e_type
{
	HEAD = 0,
	TAIL = 1
};

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*rtn[2];
	t_list	*new;
	void	*tmp;

	ft_memset(rtn, 0, 2 * sizeof(t_list *));
	while (lst && f)
	{
		tmp = f(lst->content);
		new = ft_lstnew(tmp);
		if (new == NULL)
		{
			if (del)
				del(tmp);
			ft_lstclear(&rtn[HEAD], del);
			return (NULL);
		}
		if (rtn[TAIL] == NULL)
			ft_lstadd_back(&rtn[HEAD], new);
		else
			rtn[TAIL]->next = new;
		rtn[TAIL] = new;
		lst = lst->next;
	}
	return (rtn[HEAD]);
}

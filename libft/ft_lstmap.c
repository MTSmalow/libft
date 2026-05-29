/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 10:46:02 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/29 11:03:55 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*n;

	nlst = NULL;
	if (lst && f && del)
	{
		while (lst)
		{
			n = ft_lstnew(f(lst->content));
			if (n)
				ft_lstadd_back(&nlst, n);
			else
			{
				ft_lstclear(&nlst, del);
				return (NULL);
			}
			lst = lst->next;
		}
		return (nlst);
	}
	return (NULL);
}

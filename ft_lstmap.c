/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:31:51 by ipersids          #+#    #+#             */
/*   Updated: 2024/10/30 14:49:05 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a new list by applying a function to each element.
 * 
 * Iterates through the list `lst` and applies the function `f` to 
 * the content of each element. A new list is created from the 
 * results of `f`. If allocation fails, `del` is used to delete the 
 * content of any allocated elements.
 * 
 * @param lst A pointer to the first element of the list.
 * @param f A function pointer to apply to each element's content.
 * @param del A function pointer to free the content in case of error.
 * @return t_list* A pointer to the new list, or NULL if allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*last_node;
	t_list	*current;

	if (!lst || !f || !del)
		return (0);
	res = ft_lstnew(f(lst->content));
	if (!res)
		return (0);
	last_node = res;
	current = lst->next;
	while (current != 0)
	{
		last_node->next = ft_lstnew(f(current->content));
		if (!last_node->next)
		{
			ft_lstclear(&res, del);
			return (0);
		}
		last_node = last_node->next;
		current = current->next;
	}
	return (res);
}

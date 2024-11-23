/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:30:53 by ipersids          #+#    #+#             */
/*   Updated: 2024/10/30 14:48:49 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes and frees the given element and all its successors.
 * 
 * Deletes the specified element and all successors from the list, 
 * using the `del` function to free the content of each element, 
 * and `free(3)` to free the list nodes. After clearing, the list 
 * pointer is set to `NULL`.
 * 
 * @param lst A pointer to the address of the first element.
 * @param del A function pointer to free the content of each element.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*current;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current != 0)
	{
		temp = current;
		current = current->next;
		del(temp->content);
		free(temp);
	}
	*lst = 0;
}

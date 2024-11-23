/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:31:25 by ipersids          #+#    #+#             */
/*   Updated: 2024/10/30 14:48:57 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates through the linked list `lst` and applies the function `f` 
 *        to the content of each element.
 * 
 * This function takes a pointer to the first element of the list and 
 * applies the provided function to each element's content. 
 * 
 * @param lst A pointer to the first element of the linked list.
 * @param f A pointer to the function to be applied to each element's content.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst || !f)
		return ;
	current = lst;
	while (current != 0)
	{
		f(current->content);
		current = current->next;
	}
}

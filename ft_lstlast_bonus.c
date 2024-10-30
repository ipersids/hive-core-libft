/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:28:34 by ipersids          #+#    #+#             */
/*   Updated: 2024/10/30 14:48:31 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the last element of a linked list.
 * 
 * This function traverses the linked list starting from 
 * the element pointed to by 'lst' and returns a pointer 
 * to the last element.
 * 
 * @param lst A pointer to the first element of the linked list.
 * @return t_list* A pointer to the last element of the linked list.
 *                 Returns NULL if the list is empty.
 */
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (!lst)
		return (0);
	current = lst;
	while (current->next != 0)
		current = current->next;
	return (current);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:27:58 by ipersids          #+#    #+#             */
/*   Updated: 2024/10/30 14:48:25 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of elements in a linked list.
 * 
 * This function iterates through a linked list starting 
 * from the element pointed to by 'lst' and returns the 
 * total number of elements in the list.
 * 
 * @param lst A pointer to the first element of the linked list.
 * @return int The number of elements in the list.
 */
int	ft_lstsize(t_list *lst)
{
	int		res;
	t_list	*current;

	if (!lst)
		return (0);
	res = 0;
	current = lst;
	while (current != 0)
	{
		res++;
		current = current->next;
	}
	return (res);
}

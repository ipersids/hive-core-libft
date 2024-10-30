/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:30:20 by ipersids          #+#    #+#             */
/*   Updated: 2024/10/30 14:48:44 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Frees the memory of a linked list element.
 * 
 * This function frees the memory of the content of the given element 
 * using the function `del` provided as a parameter. It then frees the 
 * element itself. The memory of the `next` pointer is not freed.
 * 
 * @param lst A pointer to the element to be freed.
 * @param del A function pointer to the function used to free the content.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

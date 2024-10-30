/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:25:26 by ipersids          #+#    #+#             */
/*   Updated: 2024/10/30 14:48:07 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates and initializes a new linked list element.
 * 
 * This function allocates memory for a new element using malloc(3) 
 * and initializes its content with the value of the parameter `content`. 
 * The `next` pointer of the new element is initialized to NULL.
 * 
 * @param content The content to assign to the new element.
 * @return t_list* A pointer to the newly created element, or NULL if 
 *                 the allocation fails.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*res;

	res = (t_list *) malloc(sizeof(t_list));
	if (!res)
		return (0);
	res->content = content;
	res->next = 0;
	return (res);
}

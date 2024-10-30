/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:59:42 by ipersids          #+#    #+#             */
/*   Updated: 2024/10/30 14:43:33 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Place n zero-valued bytes in the area pointed to by s.
 * 
 * LEGACY: Because the memset() function is preferred over bzero function, 
 * this replica simply reuse ft_memset(s, '\0', n) inside.
 * 
 * ! If `s` point to null, the result is a segmentation error.
 * 
 * @param s pointer to the memory block.
 * @param n numbers of bytes to be written
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

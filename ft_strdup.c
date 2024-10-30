/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:13:56 by ipersids          #+#    #+#             */
/*   Updated: 2024/10/30 14:46:14 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplicate the null-terminated byte string.
 * 
 * Function shall return a pointer to a new string, which is a duplicate 
 * of the string pointed to by str. The returned pointer can be passed 
 * to free(). A null pointer is returned if storage space available 
 * is insufficient (memory allocation fail) or str pointed NULL.
 * 
 * Notes: this function doesn't set `errno` to indicate the error.
 * 
 * @param str pointer to the null-terminated byte string to duplicate
 * @return char* pointer to a new string on success. 
 * Otherwise, it shall return a null pointer
 */
char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*copy;

	if (!str)
		return (0);
	len = ft_strlen(str);
	copy = (char *)malloc(len + 1);
	if (!copy)
		return (0);
	ft_memcpy(copy, str, len);
	copy[len] = '\0';
	return (copy);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:20:03 by ipersids          #+#    #+#             */
/*   Updated: 2024/12/06 13:09:44 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs a character to the specified file descriptor.
 * 
 * This function writes the character `c` to the given file descriptor `fd`.
 * 
 * @param c The character to output.
 * @param fd The file descriptor to which the character is written.
 * 
 * @return size_t Number of characters that are written.
 */
size_t	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}

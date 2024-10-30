/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:21:13 by ipersids          #+#    #+#             */
/*   Updated: 2024/10/30 14:48:00 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs a string to the specified file descriptor, 
 *        followed by a newline.
 * 
 * This function writes the string `s` to the given file descriptor `fd`, 
 * and then appends a newline character (`\n`).
 * 
 * @param s The string to output.
 * @param fd The file descriptor to which the string and newline are written.
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

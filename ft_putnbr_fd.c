/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:21:53 by ipersids          #+#    #+#             */
/*   Updated: 2024/10/30 14:47:49 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs an integer to the specified file descriptor.
 * 
 * This function writes the integer `n` to the given file descriptor `fd`.
 * 
 * @param n The integer to output.
 * @param fd The file descriptor to which the integer is written.
 */
void	ft_putnbr_fd(int n, int fd)
{
	char	ch;

	if (fd < 0)
		return ;
	ch = '0';
	if (n < 0)
	{
		write(fd, "-", 1);
		if (n == -2147483648)
		{
			write(fd, "2", 1);
			n = 147483648;
		}
		else
			n = n * (-1);
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ch = ch + (n % 10);
	write(fd, &ch, 1);
}

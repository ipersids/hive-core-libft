/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:19:23 by ipersids          #+#    #+#             */
/*   Updated: 2024/10/30 14:47:25 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Applies a given function to each character of the input string.
 * 
 * This function iterates over each character of the string `s`, 
 * applying the function `f` to each character while also passing 
 * its index as the first argument. Each character is passed by 
 * address to `f`, allowing for modifications if necessary.
 * 
 * @param s The string to iterate over.
 * @param f The function to apply to each character. It should accept 
 *           a pointer to a character and an integer index as parameters.
 * @return void This function does not return a value.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

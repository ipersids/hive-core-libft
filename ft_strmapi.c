/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:18:22 by ipersids          #+#    #+#             */
/*   Updated: 2024/10/30 14:47:20 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a new string by applying a given function to each character 
 *        of the input string.
 * 
 * This function applies the function `f` to each character of the 
 * input string `s`, allocating memory (using malloc(3)) for a new 
 * string that contains the results of these applications.
 * 
 * @param s The string to iterate over.
 * @param f The function to apply to each character of the string.
 * @return char* A pointer to the newly created string resulting from 
 *                the successive applications of `f`. Returns NULL if 
 *                memory allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*res;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	res = (char *) malloc((len + 1) * sizeof(char));
	if (!res)
		return (0);
	i = 0;
	while (i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[len] = '\0';
	return (res);
}

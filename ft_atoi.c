/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:12:08 by ipersids          #+#    #+#             */
/*   Updated: 2024/10/30 14:45:31 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Convert string to integer
 * 
 * Parses the C-string str interpreting its content as an integral number, 
 * which is returned as a value of type int.
 * 
 * The function first discards as many whitespace characters (as in isspace) 
 * as necessary until the first non-whitespace character is found. Then, starting
 * as many base-10 digits as possible, and interprets them as a numerical value.
 * 
 * The string can contain additional characters after those that form 
 * the integral number, which are ignored and have no effect on the behavior 
 * of this function.
 * 
 * If the first sequence of non-whitespace characters in str is not a valid
 * integral number, or if no such sequence exists because either str is empty
 * or it contains only whitespace characters, no conversion is performed 
 * and zero is returned.
 * 
 * @param str C-string beginning with the representation of an integral number.
 * @return On success, the function returns the converted integral number as an
 * int value. If the converted value would be out of the range of representable
 * values by an int, it causes undefined behavior.
 */
int	ft_atoi(const char *str)
{
	short int	is_negative;
	long int	res;
	int			i;

	if (!str)
		return (0);
	is_negative = 1;
	res = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_negative = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += (str[i] - '0');
		i++;
	}
	res = (int)(res * is_negative);
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:11:35 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/13 18:47:04 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* how sum works:
str = 123
sum = 0
1st loop: sum = 0 + str[0] = '1' 
2nd loop: sum = 10 + str[1] = '12' 
3rd loop: sum = 120 + str[2] = '123' 
*/

int	ft_atoi(char *str)
{
	int	sum;
	int	sign;

	sum = 0;
	sign = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		sum = sum * 10 + *str - '0';
		str++;
	}
	return (sum * sign);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_atoi("\n\t\r-+--A45\v2s2"));
// }
// revisado
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:57:09 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/14 18:59:41 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	i;

// 	i = 0;
// 	while (i <= 1000)
// 	{
// 		if (ft_is_prime(i))
// 		{
// 			printf("%d is prime\n", i);
// 		}
// 		// else
// 		// {
// 		// 	printf("%d is NOT prime\n", i);
// 		// }
// 		i++;
// 	}
// 	// printf("%d\n", ft_is_prime(2147483647));
// }
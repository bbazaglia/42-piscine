/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:03:55 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/03 09:59:23 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int a = 1;
// 	int b = 2;
// 	printf("before: %d and %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("after: %d and %d\n", a, b);
// 	return (0);
// }
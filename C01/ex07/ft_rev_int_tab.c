/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:12:30 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/04 10:43:31 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	temp = 0;
	while (start < end)
	{
		temp = tab[end];
		tab[end] = tab[start];
		tab[start] = temp;
		start++;
		end--;
	}
}

// int	main(void)
// {
// 	int	i;
// 	int	size;

// 	int arr[8] = {2, 5, 1, 3, 7, 9, 12, 0};
// 	i = 0;
// 	size = 8;
// 	while (i < size)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	ft_rev_int_tab(&arr[0], 8);
// 	i = 0;
// 	printf("\n");
// 	while (i < size)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	return (0);
// }

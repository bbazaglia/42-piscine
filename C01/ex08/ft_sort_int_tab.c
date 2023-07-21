/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:16:05 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/05 09:55:46 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// the outer loop controls the number os passes through the array
// the inner loop compares the element with the one next to it

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

// int main()
// {
//     int arr[5] = {22, 13, 8, 1, 4};
// 	int i;
// 	i = 0;
// 	ft_sort_int_tab(arr, 5);
// 	printf("the ascending order is: ");
// 	while (i < 5)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	printf("\n");
//     return (0);
// }
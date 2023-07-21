/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 15:00:32 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/05 10:10:24 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_int_to_char(int i, int j)
{
	char	digit1;
	char	digit2;
	char	digit3;
	char	digit4;

	digit1 = i / 10 + '0';
	digit2 = i % 10 + '0';
	digit3 = j / 10 + '0';
	digit4 = j % 10 + '0';
	write(1, &digit1, 1);
	write(1, &digit2, 1);
	write(1, " ", 1);
	write(1, &digit3, 1);
	write(1, &digit4, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_int_to_char(i, j);
			if (!(i == 98 && j == 99))
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			j++;
		}
		i++;
	}
}

// int main(){
// 	ft_print_comb2();
// 	return (0);
// }
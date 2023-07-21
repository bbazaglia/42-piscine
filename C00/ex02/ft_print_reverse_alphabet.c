/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:11:42 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/05 10:07:02 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;
	int		i;

	c = 'z';
	i = 0;
	while (i < 26)
	{
		write(1, &c, 1);
		c--;
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// 	return (0);
// }

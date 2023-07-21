/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:07:41 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/05 10:05:37 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;
	int		i;

	c = 'a';
	i = 0;
	while (i < 26)
	{
		write(1, &c, 1);
		c++;
		i++;
	}
}

// int main(){
// 	ft_print_alphabet();
// 	return 0;
// }

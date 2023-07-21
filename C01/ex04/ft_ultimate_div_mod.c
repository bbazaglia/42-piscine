/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:32:45 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/05 08:58:04 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;	
	int	mod;

	if (*b)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}
// int main()
// {
//     int a = 10;
//     int b = 2;
//     ft_ultimate_div_mod(&a, &b);
//     printf("a is %d and b is %d", a, b);
//     return (0);
// }

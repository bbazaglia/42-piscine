/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:12:35 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/02 14:51:58 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// int main()
// {
//     int a = 10;
//     int b = 2;
//     int div;
//     int mod;
//     ft_div_mod(a, b, &div, &mod);
//     printf("a equals to %d\nb equals to %d\nthe div result is
// 		%d\nthe mod result is %d\n", a, b, div, mod);
// //     return (0);
// // }
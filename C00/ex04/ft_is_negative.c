/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:09:00 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/05 10:09:40 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positive;
	char	negative;

	if (n >= 0)
	{
		positive = 'P';
		write(1, &positive, 1);
	}
	else
	{
		negative = 'N';
		write(1, &negative, 1);
	}
}

// int main(){
// 	ft_is_negative(2);
// 	return (0);
// }
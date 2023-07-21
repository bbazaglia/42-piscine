/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:28:45 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/09 18:08:38 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_int_to_char(int nb)
{
	if (nb > 9)
	{
		ft_int_to_char(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
	{
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
		ft_int_to_char(nb);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		ft_int_to_char(nb);
	}
}

// int	main(void)
// {
// 	ft_putnbr(1323);
// 	return (0);
// }

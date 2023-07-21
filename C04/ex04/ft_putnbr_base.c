/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:11:42 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/13 17:28:39 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// long type to trick the overflow
void	ft_print_nbr(int n, int base_value, char *symbols)
{
	long	n_long;

	n_long = n;
	if (n_long < 0)
	{
		n_long = -n_long;
		write(1, "-", 1);
	}
	if (n_long >= base_value)
		ft_print_nbr(n_long / base_value, base_value, symbols);
	write(1, &symbols[n_long % base_value], 1);
}

int	double_char(char *symbols)
{
	int	i;
	int	j;

	i = 0;
	while (symbols[i])
	{
		j = i + 1;
		while (symbols[j])
		{
			if (symbols[i] == symbols[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_value;

	base_value = 0;
	while (base[base_value])
	{
		if (base[base_value] == '+' || base[base_value] == '-')
			return ;
		base_value++;
	}
	if (base_value < 2)
		return ;
	if (double_char(base))
		return ;
	ft_print_nbr(nbr, base_value, base);
}

// int	main(void)
// {
// 	ft_putnbr_base(-2147483648, "0123456789");
// 	return (0);
// }
//revisado
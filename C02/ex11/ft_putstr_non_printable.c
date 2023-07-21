/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:04:42 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/10 09:59:36 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 || str[i] > 126))
		{
			write(1, "\\", 1);
			write(1, &hex[(unsigned char)str[i] / 16], 1);
			write(1, &hex[(unsigned char)str[i] % 16], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_putstr_non_printable("Coucou\ntu vas bien ?");
// 	return (0);
// }

// int	main(void)
// {
// 	char str[] = {'~', '1', '\n', -2, 16, '4', 'a', 19, 127, 31, 32, 126};
// 	ft_putstr_non_printable(str);
// 	write(1, "\n", 1);
// 	return (0);
// }

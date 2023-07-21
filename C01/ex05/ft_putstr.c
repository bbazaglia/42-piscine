/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:23:32 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/04 11:02:17 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

// int	main(void)
// {
//     char *str = "bia";
// 	ft_putstr(&str[0]);
// 	return (0);
// }

// int	main(void)
// {
// 	ft_putstr("bia");
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:14:11 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/06 18:55:45 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_str_is_numeric("abcdef"));
// 	printf("%d\n", ft_str_is_numeric("-12345"));
// 	printf("%d\n", ft_str_is_numeric("12345"));
// 	return (0);
// }
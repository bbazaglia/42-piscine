/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:48:29 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/06 19:16:52 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
// 	printf("%d\n", ft_str_is_printable(""));
// 	printf("%d\n", ft_str_is_printable("~"));
// 	printf("%d\n", ft_str_is_printable(" "));
// 	printf("%d\n", ft_str_is_printable("ß"));
// 	printf("%d\n", ft_str_is_printable("\n"));
// 	return (0);
// }
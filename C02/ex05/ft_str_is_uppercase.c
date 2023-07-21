/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:42:54 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/06 19:14:11 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
// 	printf("%d\n", ft_str_is_uppercase("HAKUNAMATATA"));
// 	printf("%d\n", ft_str_is_uppercase("HAKUNA MATATA"));
// 	printf("%d\n", ft_str_is_uppercase("hakunamatata"));
// 	printf("%d\n", ft_str_is_uppercase("123"));
// 	printf("%d\n", ft_str_is_uppercase(""));
// 	return (0);
// }
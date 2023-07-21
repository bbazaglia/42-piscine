/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:26:07 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/06 19:36:44 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
// 	printf("%d\n", ft_str_is_lowercase("hakunamatata"));
//     printf("%d\n", ft_str_is_lowercase("hakuna matata"));
//     printf("%d\n", ft_str_is_lowercase(""));
//     printf("%d\n", ft_str_is_lowercase("HAKUNA MATATA"));
// 	return (0);
// }
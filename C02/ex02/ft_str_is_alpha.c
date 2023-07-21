/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 23/06/04 14:29:10 by bbazagli          #+#    #+#             */
/*   Updated: 23/06/06 18:33:12 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			if (str[i] < 'a' || str[i] > 'z')
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *string1 = "hello!!!";
// 	char *string2 = "hakunamatata13";
// 	char *string3 = "hakuna matata";
// 	char *string4 = "HAKUNAMATATA";
// 	char *string5 = "";
// 	printf("%d\n", ft_str_is_alpha(string1));
// 	printf("%d\n", ft_str_is_alpha(string2));
// 	printf("%d\n", ft_str_is_alpha(string3));
// 	printf("%d\n", ft_str_is_alpha(string4));
// 	printf("%d\n", ft_str_is_alpha(string5));
// 	return (0);
// }
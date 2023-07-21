/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:27:55 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/09 15:09:20 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char string1[] = "HAKUNA MATATA";
// 	char string2[] = "HAKUNA matata";
// 	char string3[] = "HAKUNA 123";
// 	char string4[] = "H A K U N A  MATATA!";
// 	ft_strlowcase(string1);
// 	ft_strlowcase(string2);
// 	ft_strlowcase(string3);
// 	ft_strlowcase(string4);
// 	printf("%s\n", string1);
// 	printf("%s\n", string2);
// 	printf("%s\n", string3);
// 	printf("%s\n", string4);
// 	return (0);
// 	return (0);
// }
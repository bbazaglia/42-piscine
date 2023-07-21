/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:07:54 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/06 19:31:07 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char string1[] = "hakuna matata";
// 	char string2[] = "HAKUNA matata";
// 	char string3[] = "hakuna 123";
// 	char string4[] = "hakuna matata!";
// 	ft_strupcase(string1);
// 	ft_strupcase(string2);
// 	ft_strupcase(string3);
// 	ft_strupcase(string4);
// 	printf("%s\n", string1);
// 	printf("%s\n", string2);
// 	printf("%s\n", string3);
// 	printf("%s\n", string4);
// 	return (0);
// }
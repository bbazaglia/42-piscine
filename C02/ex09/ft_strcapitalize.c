/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:29:32 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/10 10:01:01 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i])
	{
		if (!((str[i - 1] >= '0' && str[i - 1] <= '9') || (str[i - 1] >= 'A'
					&& str[i - 1] <= 'Z') || (str[i - 1] >= 'a' && str[i
						- 1] <= 'z')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char string[] = "salut, coMMent tu vas ?
// 	42motS quarante-deux; cinquante+et+UN";
// 		ft_strcapitalize(&string[0]);
// 	printf("%s\n", string);
// 	return (0);
// }
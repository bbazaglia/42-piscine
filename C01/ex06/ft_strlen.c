/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:21:04 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/02 14:45:40 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

//while (str[size] != '\0') could be written as while (*(str + size))

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

// int	main(void)
// {
// 	char *w;
// 	w = "hakuna matata";
//     printf("%d\n", ft_strlen(&w[0]));
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:00:46 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/11 14:25:07 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int	main(void)
// {
// 	char str1[] = "hellos";
// 	char str2[] = "hello";
// 	int result = ft_strcmp(str1, str2);
// 	printf("%d", result);
// 	return (0);
// }

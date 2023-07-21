/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:55:32 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/12 10:22:45 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((*s1 == *s2) && (*s1 != '\0' && *s2 != '\0') && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// int	ft_strncmp(char *s1, char *s2, unsigned int n)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (i < n && s1[i])
// 	{
// 		if (s1[i] != s2[i])
// 		{
// 			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
// 		}
// 		i++;
// 	}
// 	return (0);
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int	main(void)
// {
// 	char str1[] = "a";
// 	char str2[] = "ab";
// 	int result = ft_strncmp(str1, str2, 2);
// 	printf("%d", result);
// 	return (0);
// }

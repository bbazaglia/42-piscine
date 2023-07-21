/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:24:36 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/09 17:19:35 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return a pointer to the substring, or NULL if the substring is not found
// char *strstr(const char *haystack, const char *needle);
// ABCD 2 1
// CD 1

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	if (*str == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (to_find[j] && str[i + j] == to_find[j])
				j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int	main(void)
// {
// 	char *src = "abbbde";
// 	char *find = "bbd";
// 	char *buff = ft_strstr(src, find);
// 	printf("%s", buff);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:41:32 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/12 14:28:59 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	total_length;

	total_length = ft_strlen(dest) + ft_strlen(src);
	i = ft_strlen(dest);
	j = 0;
	if (size > i)
	{
		while (src[j] && i < size - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
		return (total_length);
	}
	return (ft_strlen(src) + size);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <bsd/string.h>
// cc ft_strlcat.c -lbsd

// int	main(void)
// {
// 	char source[] = "ab";
// 	char dest[20] = "012";
// 	printf("%d\n", ft_strlcat(dest, source, 2));
// 	// printf("%ld\n", strlcat(dest, source, 2));
// 	printf("%s", dest);
// 	return (0);
// }

// int	main(void)
// {
// 	char	buffer[5];
// 	int		result;

// 	buffer[5] = "Hello";
// 	result = ft_strlcat(buffer, "World!!!!!!", 5);
// 	printf("%d", result);
// 	return (0);
// }

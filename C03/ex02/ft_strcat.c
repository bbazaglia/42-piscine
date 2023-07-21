/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:03:12 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/09 17:20:27 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int	main(void)
// {
// 	char src[20] = "happy\n";
// 	char dest[20] = "I am ";
// 	*ft_strcat(dest, src);
// 	printf("%s", dest);
// 	return (0);
// }
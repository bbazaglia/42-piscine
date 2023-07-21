/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 11:20:34 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/08 17:31:26 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char src[20] = "hakuna matata";
// 	char dest[20] = "hello world";
// 	printf("before string 2 was: %s\n", dest);
// 	ft_strcpy(dest, src);
// 	printf("now string 2 is: %s\n", dest);
// 	printf("%s\n", strcpy(dest, src));
// 	return (0);
// }
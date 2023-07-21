/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:43:49 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/09 17:20:02 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && nb > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int	main(void)
// {
// 	char dest[20] = "happy";
// 	char src[20] = "day";
// 	printf("%s", ft_strncat(dest, src, 1));
// 	return (0);
// }

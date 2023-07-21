/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 10:29:55 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/10 09:51:56 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// the function returns the length of source
/* if not used "while (src[len] &&len < size -1":
use:
while (src[len] && --size) 
return (len + 1)
*/

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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	src_len;

	len = 0;
	src_len = (unsigned int)ft_strlen(src);
	if (size > 0)
	{
		while (len < (size - 1) && src[len] != '\0')
		{
			dest[len] = src[len];
			len++;
		}
		dest[len] = '\0';
	}
	return (src_len);
}

// #include <stdio.h>
// #include <stdlib.h>

// int				main(void)
// {
// 	int 	src_size;
// 	char 	*src;
// 	char 	*dest;

// 	src = calloc(11, sizeof(char));
// 	dest = calloc(8, sizeof(char));
// 	src = "alo galera";
// 	src_size = ft_strlcpy(dest, src, 8);
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	printf("src_size: %d\n", src_size);
// 	return(0);
// }

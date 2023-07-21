/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:04:10 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/14 11:50:57 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc > 1)
	{
		j = argc - 1;
		while (j > 0)
		{
			i = 0;
			while (argv[j][i])
			{
				write(1, &argv[j][i], 1);
				i++;
			}
			j--;
			write(1, "\n", 1);
		}
	}
	return (0);
}

//revisado
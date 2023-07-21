/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:02:57 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/14 11:52:38 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_putargv(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argc > i)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

char	**ft_sort_argv(int size, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 1;
	while (i < size)
	{
		j = 1;
		while (j < size - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (argv);
}

int	main(int argc, char *argv[])
{
	ft_putargv(argc, ft_sort_argv(argc, argv));
	return (0);
}

//revisado
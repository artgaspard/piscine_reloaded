/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:11:49 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/05 16:20:38 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_print_params(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

void		ft_swap(char **av, int i, int j)
{
	char	*tmp;

	tmp = av[i];
	av[i] = av[j];
	av[j] = tmp;
}

void		ft_sort_params(int ac, char **av)
{
	int	i;
	int j;
	int k;

	i = 0;
	while (++i < ac)
	{
		j = i;
		while (++j < ac)
		{
			k = 0;
			while (av[i][k] == av[j][k] && av[i][k] != '\0' && av[j][k] != '\0')
				k++;
			if (av[i][k] > av[j][k])
				ft_swap(av, i, j);
		}
	}
	i = 0;
	while (++i < ac)
	{
		ft_print_params(av[i]);
	}
}

int			main(int ac, char **av)
{
	if (ac > 1)
		ft_sort_params(ac, av);
	return (0);
}

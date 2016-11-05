/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:51:17 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/05 16:47:43 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int res;

	i = -1;
	res = 0;
	while (tab[++i])
	{
		if (f(tab[i]) == 1)
			res++;
	}
	return (res);
}

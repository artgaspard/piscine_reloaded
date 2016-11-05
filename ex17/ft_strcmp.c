/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:29:23 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/03 18:49:48 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1 && s2)
	{
		i++;
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
	}
	return (s1[i] - s2[i]);
}

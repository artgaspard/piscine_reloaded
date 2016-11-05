/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 19:07:20 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/05 16:54:17 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#define BUF_SIZE 4096

int			ft_error(int fd, int ac)
{
	if (ac < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	else if (fd == -1)
	{
		write(2, "open() failed\n", 14);
		return (1);
	}
	return (0);
}

int			main(int ac, char **av)
{
	int		fd;
	int		size;
	char	buf[BUF_SIZE + 1];

	if (ft_error(100, ac) == 0)
	{
		fd = open(av[1], O_RDONLY);
		if (ft_error(fd, ac) == 0)
		{
			size = read(fd, buf, BUF_SIZE);
			buf[size] = '\0';
			write(1, buf, size - 1);
			write(1, "\n", 1);
		}
		else
			return (1);
		if (close(fd) == -1)
		{
			write(2, "close() error\n", 14);
			return (1);
		}
	}
	return (0);
}

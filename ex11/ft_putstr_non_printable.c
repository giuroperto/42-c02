/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 22:25:31 by goka-rop          #+#    #+#             */
/*   Updated: 2019/10/16 14:54:47 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(char c)
{
	char	str[16];
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (i < 16)
	{
		if (i < 9)
			str[i] = i;
		else
			str[i] = 97 + j;
		i++;
	}
	if (c >= 16)
	{
		ft_putchar(str[c / 16]);
		ft_putchar(str[c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(str[c / 1]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] > 126)
		{
			ft_putchar('\\');
			ft_print_hex(str[i]);
		}
		else if (str[i] == 39 || str[i] == 94 || str[i] == 96 || str[i] == 126)
		{
			ft_putchar('\\');
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

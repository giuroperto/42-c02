/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 22:26:59 by goka-rop          #+#    #+#             */
/*   Updated: 2019/10/15 10:36:07 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int		ft_returnnb(int i)
{
	int		type;

	if (i > 0)
		type = 0;
	else
		type = 1;
	return (type);
}

int		ft_str_is_alpha(char *str)
{
	int		i;
	int		j;
	int		type;

	i = 0;
	j = 0;
	type = 0;
	if (str[0] == '\0')
		j += 0;
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 65 && str[i] <= 90)
				j += 0;
			else if (str[i] >= 97 && str[i] <= 122)
				j += 0;
			else
				j += 1;
			i++;
		}
	}
	type = ft_returnnb(j);
	return (type);
}

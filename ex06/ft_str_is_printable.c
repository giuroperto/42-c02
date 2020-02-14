/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 23:39:13 by goka-rop          #+#    #+#             */
/*   Updated: 2019/10/10 09:09:39 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int		ft_str_is_printable(char *str)
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
			if (str[i] >= 32 && str[i] <= 127)
				j += 0;
			else
				j += 1;
			i++;
		}
	}
	if (j > 0)
		type = 0;
	else
		type = 1;
	return (type);
}

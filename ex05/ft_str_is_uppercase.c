/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 23:29:05 by goka-rop          #+#    #+#             */
/*   Updated: 2019/10/10 09:02:20 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int		ft_str_is_uppercase(char *str)
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 23:19:34 by dphuntso          #+#    #+#             */
/*   Updated: 2018/06/01 12:23:45 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putwstr(wchar_t *str)
{
	int i;

	i = 0;
	while (str && str[i++])
		ft_putwchar(str[i]);
	return (i);
}

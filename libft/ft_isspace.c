/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybitton <ybitton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:38:14 by ybitton           #+#    #+#             */
/*   Updated: 2017/11/21 18:38:24 by ybitton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"

int	ft_isspace(int c)
{
	if ((c == ' ') || (c == '\f') || (c == '\r') || (c == '\v') ||
	(c == '\n') || (c == '\t'))
		return (1);
	return (0);
}

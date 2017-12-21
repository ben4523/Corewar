/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybitton <ybitton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:56:46 by ybitton           #+#    #+#             */
/*   Updated: 2017/11/21 19:28:51 by ybitton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"
#include "../../include/libft/libft.h"

int					dat_core(char *str, int len)
{
	if (str[len - 4] == '.' && str[len - 3] == 'c' && str[len - 2] == 'o'
		&& str[len - 1] == 'r')
		return (1);
	else
		return (0);
}

int					dat_s(char *str, int len)
{
	if (str[len - 2] == '.' && str[len - 1] == 's')
		return (1);
	else
		return (0);
}

int					main(int ac, char **av)
{
	t_core			*core;
	t_tree			*tree;

	tree = NULL;
	if (ac == 1)
		return (ft_error("No arg\n", NULL, NULL));
	if (!(core = ft_memalloc(sizeof(t_core))))
		return (0);
	if (!(core->header = ft_memalloc(sizeof(t_header))))
	{
		free(core);
		return (0);
	}
	if (!(launch(ac, av, core, tree)))
		return (ft_error(NULL, "Bat file", NULL));
	free_list(core, tree, tree);
	free(core->header);
	free(core);
	return (0);
}

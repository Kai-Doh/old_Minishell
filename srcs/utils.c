/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <lfaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:15:53 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/12/15 14:49:22 by lfaria-m         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../minishell.h"

int	join_len(char *s1, char *s2)
{
	return ((int)ft_strlen(s1) + ft_strlen(s2));
}

void	free_double(char **arr)
{
	char	**temp;

	if (!arr)
		return ;
	temp = arr;
	while (*temp)
	{
		free(*temp);
		temp++;
	}
	free(arr);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
	{
		del(lst->name);
		del(lst->value);
	}
	else
	{
		free(lst->name);
		free(lst->value);
	}
	free(lst);
}

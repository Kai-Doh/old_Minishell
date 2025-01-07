/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaria-m <lfaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 18:30:42 by lfaria-m          #+#    #+#             */
/*   Updated: 2024/12/15 14:45:57 by lfaria-m         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../minishell.h"

void	ft_pwd(void)
{
	char	buff[256];

	getcwd(buff, 256);
	ft_putstr_fd(buff, 1);
	write(1, "\n", 1);
}

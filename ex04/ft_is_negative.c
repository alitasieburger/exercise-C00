/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asieburg <asieburg@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 02:07:44 by asieburg          #+#    #+#             */
/*   Updated: 2022/02/16 00:00:49 by asieburg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	pos_neg;

	if (n >= 0)
	{
		pos_neg = 'P';
		write(1, &pos_neg, 1);
	}
	else
	{
		pos_neg = 'N';
		write(1, &pos_neg, 1);
	}
}

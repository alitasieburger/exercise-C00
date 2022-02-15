/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asieburg <asieburg@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:33:30 by asieburg          #+#    #+#             */
/*   Updated: 2022/02/15 00:56:01 by asieburg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_print_comb2(void)
{
	int	num1;
	int	num2;
	
	num1 = '00';
	while(num1 <= '98')
	{
		n2 = n1 + 1;
		while(n2 <= '99')
		{
			write(1, &n1, 1);
			write(1, ", ", 1);
			write(1, &n2, 1);
			write(1, ", ", 2);
			n2++;
		}
		n1++;
	}
}

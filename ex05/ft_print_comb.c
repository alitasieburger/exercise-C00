/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asieburg <asieburg@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 03:00:45 by asieburg          #+#    #+#             */
/*   Updated: 2022/02/16 00:11:39 by asieburg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	number1;
	char	number2;
	char	number3;

	number1 = '0' ;
	while (number1 <= '7')
	{
		number2 = number1 + 1;
		while (number2 <= '8')
		{
			number3 = number2 + 1;
			while (number3 <= '9')
			{
				write (1, &number1, 1);
				write (1, &number2, 1);
				write (1, &number3, 1);
				if (!(number1 == '7' && number2 == '8' && number3 == '9'))
					write(1, ", ", 2);
				number3 = number3 + 1;
			}
			number2 = number2 + 1;
		}
		number1 = number1 + 1;
	}
}

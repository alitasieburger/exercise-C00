/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asieburg <asieburg@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 01:49:54 by asieburg          #+#    #+#             */
/*   Updated: 2022/02/11 02:06:01 by asieburg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);
void	ft_print_numbers(void)
{
	int numbers;
	
	numbers = '0';
	while(numbers <= '9')
	{
		write(1, &numbers, 1);
		numbers = numbers + 1;
	}
}

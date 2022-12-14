/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:05:01 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/30 15:09:52 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (result);
	while (nb > 1)
	{	
		result *= nb;
		nb--;
	}
	return (result);
}

/*int	main(void)
{
	int	result;

	result = ft_iterative_factorial(5);
	printf("%d\n", result);
	return (0);
}*/

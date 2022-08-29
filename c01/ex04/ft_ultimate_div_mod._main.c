/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:53:32 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/28 14:15:04 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_b % temp_b;
}

int main()
{
	int	a;
	int	b;

	a = 5;
	b = 3;
	printf("&a= %p, &b=%p\n", &a, &b);
	printf("a= %d, b=%d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("ft_ => a= %d, b=%d\n", a, b);
	return (0);
}

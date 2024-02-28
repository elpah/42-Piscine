/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:20:46 by eobeng            #+#    #+#             */
/*   Updated: 2024/02/28 12:34:43 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int outcome;

    outcome = 1;
    if (nb <= -1)
    {
        return (0);
    }
    else if (nb <= 1)
    {
        return (1);
    }
    while (nb > 0)
    {
        outcome *= nb;
        nb--;
    }
    return (outcome);
}

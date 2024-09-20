/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 23:20:15 by annmakar          #+#    #+#             */
/*   Updated: 2024/06/27 12:25:56 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	sign_count;

	result = 0;
	sign = 1;
	sign_count = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign_count++;
		str++;
	}
	if (sign_count % 2 != 0)
		sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

// void run_test(char *str, int expected) {
//     int result = ft_atoi(str);
//     if (result == expected) {
//         printf(
//     } else {
//         printf(
//     }
// }

// int main() {
//     // Test cases
//     run_test("123", 123);             // Simple
//     run_test("-123", -123);           // Simple n
//     run_test("   456", 456);          // Leading whitespaces
//     run_test("   -789", -789);        //
//     run_test("+123", 123);            // Positive sign
//     run_test("+-123", 0);             // Invalid sign sequence
//     run_test("--123", 123);           // Double negative sign
//     run_test("++123", 123);           // Double positive sign
//     run_test("  \t\n\v\f\r42", 42);   // Various w
//     run_test("   -0", 0);             // Negative zero
//     run_test("0", 0);                 // Zero
//     run_test("2147483647", 2147483647); // Maximum int value
//     run_test("-2147483648", -2147483648); // Minimum int value
//     run_test("123abc", 123);          // Number followed by characters
//     run_test("abc123", 0);            // Characters followed by number

//     return 0;
// }

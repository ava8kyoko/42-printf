#include "ft_printf.h"

int	main(void)
{
	// ft_printf(" %p %p\n", ULONG_MAX, LONG_MAX);
	// printf(" %p %p ", ULONG_MAX, LONG_MAX);

	int ft_bytes;
	int bytes;
	// int nbr = 100000;

	// ===== TEST BYTES =====
	// ft_bytes = ft_printf("%c ", 'a');
	// bytes = printf("%c ", 'a');
	// printf("ft: %d, printf: %d\n", ft_bytes, bytes);

	ft_bytes = ft_printf("%s ", "abc");
	bytes = printf("%s ", "abc");
	printf("ft: %d, printf: %d\n", ft_bytes, bytes);

	// ft_bytes = ft_printf("%p ", &bytes);
	// bytes = printf("%p ", &bytes);
	// printf("ft: %d, printf: %d\n", ft_bytes, bytes);

	// ft_bytes = ft_printf(" %x ", 3456);
	// bytes = printf(" %x ", 3456);
	// printf("ft: %d, printf: %d\n", ft_bytes, bytes);

	// ft_bytes = ft_printf("%X ", nbr);
	// bytes = printf("%X ", nbr);
	// printf("ft: %d, printf: %d\n", ft_bytes, bytes);

// int bytes_mine = 0;
// int bytes_real = 0;

//	bytes_mine = ft_printf(" %x ", 0);
//	bytes_real = printf(" %x ", 0);
//	printf("mine : %d, real : %d\n", bytes_mine, bytes_real);
	// ft_printf("2: %x ", -1);
	// printf("2: %x \n", -1);
	// ft_printf("3: %x ", 1);
	// printf("3: %x \n", 1);
	// ft_printf("4: %x ", 9);
	// printf("4: %x \n", 9);
	// ft_printf("5: %x ", 10);
	// printf("5: %x \n", 10);
	// ft_printf("6: %x ", 11);
	// printf("6: %x \n", 11);
	// ft_printf("7: %x ", 15);
	// printf("7: %x \n", 15);
	// ft_printf("8: %x ", 16);
	// printf("8: %x \n", 16);
	// ft_printf("9: %x ", 17);
	// printf("9: %x \n", 17);
	// ft_printf("10: %x ", 99);
	// printf("10: %x \n", 99);
	// ft_printf("11: %x ", 100);
	// printf("11: %x \n", 100);
	// ft_printf("12: %x ", 101);
	// printf("12: %x \n", 101);
	// ft_printf("13: %x ", -9);
	// printf("13: %x \n", -9);
	// ft_printf("14: %x ", -10);
	// printf("14: %x \n", -10);
	// ft_printf("15: %x ", -11);
	// printf("15: %x \n", -11);
	// ft_printf("16: %x ", -14);
	// printf("16: %x \n", -14);
	// ft_printf("17: %x ", -15);
	// printf("17: %x \n", -15);
	// ft_printf("18: %x ", -16);
	// printf("18: %x \n", -16);
	// ft_printf("19: %x ", -99);
	// printf("19: %x \n", -99);
	// ft_printf("20: %x ", -100);
	// printf("20: %x\n", -100);
	// ft_printf("21: %x ", -101);
	// printf("21: %x \n", -101);
	// ft_printf("22: %x ", INT_MAX);
	// printf("22: %x \n", INT_MAX);
	// ft_printf("23: %x ", INT_MIN);
	// printf("23: %x \n", INT_MIN);
	// bytes_mine = ft_printf("24: %x ", LONG_MAX);
	// bytes_real = printf("24: %lx ", LONG_MAX);
	// printf("mine : %d, real : %d\n", bytes_mine, bytes_real);
	// bytes_mine = ft_printf("25: %x ", LONG_MIN);
	// bytes_real = printf("25: %lx ", LONG_MIN);
	// printf("mine : %d, real : %d\n", bytes_mine, bytes_real);
	// ft_printf("26: %x ", UINT_MAX);
	// printf("26: %x \n", UINT_MAX);
	// // bytes_mine = ft_printf("27: %x ", ULONG_MAX);
	// // bytes_real = printf("27: %lx ", ULONG_MAX);
	// // printf("mine : %d, real : %d\n", bytes_mine, bytes_real);
	// bytes_mine = ft_printf("28: %x ", 9223372036854775807LL);
	// bytes_real = printf("28: %llx ", 9223372036854775807LL);
	// // printf("mine : %d, real : %d\n", bytes_mine, bytes_real);
	// bytes_mine = ft_printf("29: %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// bytes_real = printf("29: %x %x %lx %lx %lx %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("mine : %d, real : %d\n", bytes_mine, bytes_real);
	// ft_printf("30: %x ", 42);
	// printf("30: %x\n", 42);
	// ft_printf("31: %x ", -42);
	// printf("31: %x ", -42);

// //	// int a = -1;
// //	// char *b = "1";

// // 	// ft_printf("1: %p ", &a);
// // 	// ft_printf("2: %p ", &b);
// // 	// ft_printf("3: %p ", 15);
// // 	// ft_printf("4: %p ", 16);
// // 	// ft_printf("5: %p ", 17);
// // 	// ft_printf("6: %p %p ", LONG_MIN, LONG_MAX);
// // 	// ft_printf("7: %p %p ", INT_MIN, INT_MAX);
// // 	// ft_printf("8: %p %p ", ULONG_MAX, -ULONG_MAX);
// // 	// ft_printf("9: %p %p ", 0, 0);

// // 	// printf("1: %p ", &a);
// // 	// printf("2: %p ", &b);
// // 	// printf("3: %p ", &15);
// // 	// printf("4: %p ", &16);
// // 	// printf("5: %p ", &(17));
// // 	// printf("6: %p %p ", LONG_MIN, LONG_MAX);
// // 	// printf("7: %p %p ", INT_MIN, INT_MAX);
// // 	// printf("8: %p %p ", ULONG_MAX, -ULONG_MAX);
// // 	// printf("9: %p %p ", 0, 0);

	return (0);
}

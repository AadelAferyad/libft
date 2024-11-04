#include "../libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int	checker(int c)
{
	int a, b;
	printf("--------Test for %d (%c) --------\n", c, c);
	a = isascii(c);
	b = ft_isascii(c);
	printf("Expected : %d\n", a);
	printf("Got	 : %d\n", b);
	if ((a && b) || (!a && !b))	
		printf("\033[0;32m[PASSED]\033[0m\n");
	else
		printf("\033[0;31m[FAILD]\033[0m\n");
	return (a == b? 0 : 1);
}
int	main(void)
{
	
	printf("------ isascii test cases ------\n\n");
	
	checker(0);
	checker(1);
	checker(2);
	checker(3);
	checker(4);
	checker(5);
	checker(6);
	checker(7);
	checker(8);
	checker(9);
	checker(10);
	checker(11);
	checker(12);
	checker(13);
	checker(14);
	checker(15);
	checker(16);
	checker(17);
	checker(18);
	checker(19);
	checker(20);
	checker(21);
	checker(22);
	checker(23);
	checker(24);
	checker(25);
	checker(26);
	checker(27);
	checker(28);
	checker(29);
	checker(30);
	checker(31);
	checker(32);
	checker(33);
	checker(34);
	checker(35);
	checker(36);
	checker(37);
	checker(38);
	checker(39);
	checker(40);
	checker(41);
	checker(42);
	checker(43);
	checker(44);
	checker(45);
	checker(46);
	checker(47);
	checker(48);
	checker(49);
	checker(50);
	checker(51);
	checker(52);
	checker(53);
	checker(54);
	checker(55);
	checker(56);
	checker(57);
	checker(58);
	checker(59);
	checker(60);
	checker(61);
	checker(62);
	checker(63);
	checker(64);
	checker(65);
	checker(66);
	checker(67);
	checker(68);
	checker(69);
	checker(70);
	checker(71);
	checker(72);
	checker(73);
	checker(74);
	checker(75);
	checker(76);
	checker(77);
	checker(78);
	checker(79);
	checker(80);
	checker(81);
	checker(82);
	checker(83);
	checker(84);
	checker(85);
	checker(86);
	checker(87);
	checker(88);
	checker(89);
	checker(90);
	checker(91);
	checker(92);
	checker(93);
	checker(94);
	checker(95);
	checker(96);
	checker(97);
	checker(98);
	checker(99);
	checker(100);
	checker(101);
	checker(102);
	checker(103);
	checker(104);
	checker(105);
	checker(106);
	checker(107);
	checker(108);
	checker(109);
	checker(110);
	checker(111);
	checker(112);
	checker(113);
	checker(114);
	checker(115);
	checker(116);
	checker(117);
	checker(118);
	checker(119);
	checker(120);
	checker(121);
	checker(122);
	checker(123);
	checker(124);
	checker(125);
	checker(126);
	checker(127);
	checker(128);
	checker(129);
	checker(130);
	checker('2');
	checker(0);
	checker(-1);
	checker(255);
	checker('\0');
	checker('^');
	checker(1337);
	checker(2024);
	checker(-1337);
	return (0);
}

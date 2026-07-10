#include <unistd.h>
int main()
{
	char a;
	char b;
	char c;
	char d;
	int i;
	int s;
	i = 0;
	while (i <= 98)
	{
		s = i + 1;
		while (s <= 99)
		{
			a = ((i / 10) + '0');
			b = ((i % 10) + '0');
			c = ((s / 10) + '0');
			d = ((s % 10) + '0');
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1 );
			write(1, &c, 1);
			write(1, &d, 1);
			if (i != 98 || s != 99)	
				write(1, ", ", 2);
			if (i == 98 && s == 99)
				write (1, "\n", 1);
			s++;
		}
		i++;
	}
}

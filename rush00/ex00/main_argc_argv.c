#include <unistd.h>

void	rush(int x, int y);
int		string_to_int(char *value);
void	print_error_input(char *name);

int	main(int argc, char *argv[ ])
{
	int	x;
	int	y;

	if (argc != 3)
	{
		print_error_input(argv[0]);
	}
	else
	{
		x = string_to_int(argv[1]);
		y = string_to_int(argv[2]);
		rush(x, y);
	}
	return (0);
}

int	string_to_int(char *value)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (value[i] != '\0')
	{
		result = 10 * result + value[i] - '0';
		i++;
	}
	return (result);
}

void	print_error_input(char *name)
{
	int	i;

	i = 0;
	write(1, "Only two arguments are permitted\n", 33);
	write(1, "Use \"", 5);
	while (name[i] != '\0')
	{
		write(1, &name[i], 1);
		i++;
	}
	write(1, " integer1 integer2\"\n", 20);
}

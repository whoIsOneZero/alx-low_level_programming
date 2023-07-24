/**
 * swap_int - swaps the value to 2 integers
 * @a: first int
 * @b: second int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}

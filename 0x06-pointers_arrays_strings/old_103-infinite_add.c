/**
 * infinite_add - adds two numbers
 * @n1: 1st num to be added as a string
 * @n2: 2nd num to be added as a string
 * @r: pointer to buffer - to store result
 * @size_r: buffer size
 * Return: pinter to the buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int cary = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, hold_tot = 0;

	/*val1 and val2 store int equivalent of n1 and n2*/
	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while(j >= 0 || i>= 0 || carry == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + 1) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 +j) - '0';
		hold_tot = val1 + val2 + carry;
		if (hold_tot >= 10)
			carry = 1;
		else
			carry = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (hold_tot % 10) + '0';
		digits++;
		i--;
		j--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}

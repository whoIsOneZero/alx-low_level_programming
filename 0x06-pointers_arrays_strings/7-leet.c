/**
 * leet - encodes a string into 1337
 * @s: the string to be encoded
 * Return: a pointer to the encoded string
 */
char *leet(char *s)
{
	int i, j;

	char check[] = "aAeEoOtTlL";
	char rep[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == check[j])
			{
				s[i] = rep[j];
			}
		}
	}
	return (s);
}

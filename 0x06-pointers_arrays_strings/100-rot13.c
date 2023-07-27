/**
 * rot13 - encodes a string using rot13
 * @s: the string to be encoded
 * Return: a pointer to the encoded string
 */
char *rot13(char *s)
{
	int i, j;

	char check[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rep[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; check[j] != '\0'; j++)
		{
			if (s[i] == check[j])
			{
				s[i] = rep[j];
				break;
			}
		}
	}
	return (s);
}

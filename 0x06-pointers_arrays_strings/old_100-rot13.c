/**
 * rot13 - encodes a string using rot13
 * @s: the string to be encoded
 * Return: a pointer to the encoded string
 */
char *rot13(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'z') ||
				(s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'm') ||
					(s[i] >= 'A' && s[i] <= 'M'))
			{
				s[i] = s[i] + 13;
			}
			else
			{
				s[i] = s[i] - 13;
			}
			i++;
		}
		i++;
	}
	return (s);
}

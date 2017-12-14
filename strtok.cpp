int strch1(char *a, char *b, char *c, char *d)
{
	char *token;
	token = strtok(a, " ");
	strcpy(d, "");
	do
	{
		int p = strcmp(token, b);

		if (p != 0)
		{
			strcat(d, token);
		}
		else
		{
			strcat(d, c);
		}

		strcat(d, " ");
	} while (token = strtok(NULL, " "));

	return 1;
}

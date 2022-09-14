@@ -11,27 +11,27 @@
{
	int i;
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%i, ", i);
			else
				printf("%i", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%i, ", i);
			else
				printf("%i", i);
		}
	}
	else 
                	else 
		printf("%i", n);
	printf("\n");
}

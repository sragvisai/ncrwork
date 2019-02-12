#pragma once
void comments(FILE *fp1, FILE *fp2)
{
	char c;
	while (!(feof(fp1)))
	{
		c = fgetc(fp1);
		if (c == '/')
		{
			c = fgetc(fp1);
			if (c == '/')
			{
				c = fgetc(fp1);
				while (c != '\n')
				{
					c = fgetc(fp1);
				}
			}
			

			else if (c == '*')
			{
				c = fgetc(fp1);
				while (c != '*')
				{
					c = fgetc(fp1);
				}
				c = fgetc(fp1);

			}
			else
			{
				c = fgetc(fp1);
				fputc(c, fp1);
			}
		}
		else
		{			fputc(c, fp2);

		}
	}
}

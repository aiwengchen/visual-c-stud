#include <iostream>
#include <stdio.h>

using namespace std;

FILE *stream, *stream2;

int main()
{
	errno_t err;
	char list[100];
	// Open for read (will fail if file "crt_fopen_s.c" does not exist)
	err = fopen_s(&stream, "test_fopen_s.txt", "r");
	if (err == 0)
	{
		printf("The file 'test_fopen_s.txt' was opened\n");
	}
	else
	{
		printf("The file 'test_fopen_s.txt' was not opened\n");
	}

	// Open for write 
	err = fopen_s(&stream2, "data2.txt", "w+");
	if (err == 0)
	{
		printf("The file 'data2.txt' was opened\n");
		
		int numwritten;
		for (int i = 0; i < 25; i++)
			list[i] = (char)('z' - i);

		numwritten = fwrite(list, sizeof(char), 25, stream2);
		printf("写入 %d 个字符\n", numwritten);
		fclose(stream2);
	}
	else
	{
		printf("The file 'data2.txt' was not opened\n");
	}
	
	err = fopen_s(&stream2, "data2.txt", "r");
	if (err == 0)
	{
		printf("The file 'data2.txt' was opened\n");
		int numread;
		numread = fread(list, sizeof(char), 25, stream2);
		printf("读取的数据个数 = %d\n", numread);
		printf("读取的内容为 = %.25s\n", list);
		fclose(stream2);
	}
	else
	{
		printf("The file 'data2.txt' was not opened\n");
	}
	

	// Close stream if it is not NULL 
	if (stream)
	{
		err = fclose(stream);
		if (err == 0)
		{
			printf("The file 'test_fopen_s.txt' was closed\n");
		}
		else
		{
			printf("The file 'test_fopen_s.txt' was not closed\n");
		}
	}

	// All other files are closed:
	int numclosed = _fcloseall();
	printf("Number of files closed by _fcloseall: %u\n", numclosed);


	return 0;
}
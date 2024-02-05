#include <stdio.h>
#include <string.h>

#define COLUMN		80
#define ROW		30


void display_dinosaur (int* video_base, int x, int y)
{
	// row 0
	video_base[COLUMN / sizeof(int) *  0 + 0] = '    ';
	video_base[COLUMN / sizeof(int) *  0 + 1] = '    ';
	video_base[COLUMN / sizeof(int) *  0 + 2] = 'X   ';
	video_base[COLUMN / sizeof(int) *  0 + 3] = 'XXXX';
	video_base[COLUMN / sizeof(int) *  0 + 4] = 'XXXX';
	video_base[COLUMN / sizeof(int) *  0 + 5] = '   X';

	// row 1
	video_base[COLUMN / sizeof(int) *  1 + 0] = '    ';
	video_base[COLUMN / sizeof(int) *  1 + 1] = '    ';
	video_base[COLUMN / sizeof(int) *  1 + 2] = 'XX  ';
	video_base[COLUMN / sizeof(int) *  1 + 3] = 'XXX ';
	video_base[COLUMN / sizeof(int) *  1 + 4] = 'XXXX';
	video_base[COLUMN / sizeof(int) *  1 + 5] = '  XX';

	// row 2
	video_base[COLUMN / sizeof(int) *  2 + 0] = '    ';
	video_base[COLUMN / sizeof(int) *  2 + 1] = '    ';
	video_base[COLUMN / sizeof(int) *  2 + 2] = 'XX  ';
	video_base[COLUMN / sizeof(int) *  2 + 3] = 'XXXX';
	video_base[COLUMN / sizeof(int) *  2 + 4] = 'XXXX';
	video_base[COLUMN / sizeof(int) *  2 + 5] = ' XXX';


	// row 3
	video_base[COLUMN / sizeof(int) *  3 + 0] = '    ';
	video_base[COLUMN / sizeof(int) *  3 + 1] = '    ';
	video_base[COLUMN / sizeof(int) *  3 + 2] = 'XX  ';
	video_base[COLUMN / sizeof(int) *  3 + 3] = 'XXXX';
	video_base[COLUMN / sizeof(int) *  3 + 4] = 'XXXX';
	video_base[COLUMN / sizeof(int) *  3 + 5] = ' XXX';

	// row 4
	video_base[COLUMN / sizeof(int) *  4 + 0] = '    ';
	video_base[COLUMN / sizeof(int) *  4 + 1] = '    ';
	video_base[COLUMN / sizeof(int) *  4 + 2] = 'XX  ';
	video_base[COLUMN / sizeof(int) *  4 + 3] = 'XXXX';
	video_base[COLUMN / sizeof(int) *  4 + 4] = 'XXXX';
	video_base[COLUMN / sizeof(int) *  4 + 5] = ' XXX';

	// row 5
	video_base[COLUMN / sizeof(int) *  5 + 0] = '    ';
	video_base[COLUMN / sizeof(int) *  5 + 1] = '    ';
	video_base[COLUMN / sizeof(int) *  5 + 2] = 'XX  ';
	video_base[COLUMN / sizeof(int) *  5 + 3] = 'XXXX';
	video_base[COLUMN / sizeof(int) *  5 + 4] = '   X';
	video_base[COLUMN / sizeof(int) *  5 + 5] = '    ';

	// row 6
	video_base[COLUMN / sizeof(int) *  6 + 0] = '   X';
	video_base[COLUMN / sizeof(int) *  6 + 1] = '    ';
	video_base[COLUMN / sizeof(int) *  6 + 2] = 'XXX ';
	video_base[COLUMN / sizeof(int) *  6 + 3] = 'XXXX';
	video_base[COLUMN / sizeof(int) *  6 + 4] = 'XXXX';
	video_base[COLUMN / sizeof(int) *  6 + 5] = '    ';

	// row 7
	video_base[COLUMN / sizeof(int) *  7 + 0] = '   X';
	video_base[COLUMN / sizeof(int) *  7 + 1] = '    ';
	video_base[COLUMN / sizeof(int) *  7 + 2] = 'XXXX';
	video_base[COLUMN / sizeof(int) *  7 + 3] = ' XXX';
	video_base[COLUMN / sizeof(int) *  7 + 4] = '    ';
	video_base[COLUMN / sizeof(int) *  7 + 5] = '    ';

	// row 8
	video_base[COLUMN / sizeof(int) *  8 + 0] = '  XX';
	video_base[COLUMN / sizeof(int) *  8 + 1] = 'X   ';
	video_base[COLUMN / sizeof(int) *  8 + 2] = 'XXXX';
	video_base[COLUMN / sizeof(int) *  8 + 3] = ' XXX';
	video_base[COLUMN / sizeof(int) *  8 + 4] = '    ';
	video_base[COLUMN / sizeof(int) *  8 + 5] = '    ';

	// row 9
	video_base[COLUMN / sizeof(int) *  9 + 0] = 'XXXX';
	video_base[COLUMN / sizeof(int) *  9 + 1] = 'XX  ';
	video_base[COLUMN / sizeof(int) *  9 + 2] = 'XXXX';
	video_base[COLUMN / sizeof(int) *  9 + 3] = 'XXXX';
	video_base[COLUMN / sizeof(int) *  9 + 4] = '  XX';
	video_base[COLUMN / sizeof(int) *  9 + 5] = '    ';

	// row 10
	video_base[COLUMN / sizeof(int) * 10 + 0] = 'XXXX';
	video_base[COLUMN / sizeof(int) * 10 + 1] = 'XXXX';
	video_base[COLUMN / sizeof(int) * 10 + 2] = 'XXXX';
	video_base[COLUMN / sizeof(int) * 10 + 3] = 'XXXX';
	video_base[COLUMN / sizeof(int) * 10 + 4] = '  X ';
	video_base[COLUMN / sizeof(int) * 10 + 5] = '    ';

	// row 11
	video_base[COLUMN / sizeof(int) * 11 + 0] = 'XXX ';
	video_base[COLUMN / sizeof(int) * 11 + 1] = 'XXXX';
	video_base[COLUMN / sizeof(int) * 11 + 2] = 'XXXX';
	video_base[COLUMN / sizeof(int) * 11 + 3] = 'XXXX';
	video_base[COLUMN / sizeof(int) * 11 + 4] = '    ';
	video_base[COLUMN / sizeof(int) * 11 + 5] = '    ';

	// row 12
	video_base[COLUMN / sizeof(int) * 12 + 0] = 'XX  ';
	video_base[COLUMN / sizeof(int) * 12 + 1] = 'XXXX';
	video_base[COLUMN / sizeof(int) * 12 + 2] = 'XXXX';
	video_base[COLUMN / sizeof(int) * 12 + 3] = 'XXXX';
	video_base[COLUMN / sizeof(int) * 12 + 4] = '    ';
	video_base[COLUMN / sizeof(int) * 12 + 5] = '    ';


	// row 13
	video_base[COLUMN / sizeof(int) * 13 + 0] = 'X   ';
	video_base[COLUMN / sizeof(int) * 13 + 1] = 'XXXX';
	video_base[COLUMN / sizeof(int) * 13 + 2] = 'XXXX';
	video_base[COLUMN / sizeof(int) * 13 + 3] = ' XXX';
	video_base[COLUMN / sizeof(int) * 13 + 4] = '    ';
	video_base[COLUMN / sizeof(int) * 13 + 5] = '    ';

	// row 14
	video_base[COLUMN / sizeof(int) * 14 + 0] = '    ';
	video_base[COLUMN / sizeof(int) * 14 + 1] = 'XXXX';
	video_base[COLUMN / sizeof(int) * 14 + 2] = 'XXXX';
	video_base[COLUMN / sizeof(int) * 14 + 3] = '  XX';
	video_base[COLUMN / sizeof(int) * 14 + 4] = '    ';
	video_base[COLUMN / sizeof(int) * 14 + 5] = '    ';

	// row 15
	video_base[COLUMN / sizeof(int) * 15 + 0] = '    ';
	video_base[COLUMN / sizeof(int) * 15 + 1] = 'XXX ';
	video_base[COLUMN / sizeof(int) * 15 + 2] = ' XX ';
	video_base[COLUMN / sizeof(int) * 15 + 3] = '    ';
	video_base[COLUMN / sizeof(int) * 15 + 4] = '    ';
	video_base[COLUMN / sizeof(int) * 15 + 5] = '    ';

	// row 16
	video_base[COLUMN / sizeof(int) * 16 + 0] = '    ';
	video_base[COLUMN / sizeof(int) * 16 + 1] = ' XX ';
	video_base[COLUMN / sizeof(int) * 16 + 2] = ' X  ';
	video_base[COLUMN / sizeof(int) * 16 + 3] = '    ';
	video_base[COLUMN / sizeof(int) * 16 + 4] = '    ';
	video_base[COLUMN / sizeof(int) * 16 + 5] = '    ';

	// row 17
	video_base[COLUMN / sizeof(int) * 17 + 0] = '    ';
	video_base[COLUMN / sizeof(int) * 17 + 1] = '  X ';
	video_base[COLUMN / sizeof(int) * 17 + 2] = ' X  ';
	video_base[COLUMN / sizeof(int) * 17 + 3] = '    ';
	video_base[COLUMN / sizeof(int) * 17 + 4] = '    ';
	video_base[COLUMN / sizeof(int) * 17 + 5] = '    ';

	// row 18
	video_base[COLUMN / sizeof(int) * 18 + 0] = '    ';
	video_base[COLUMN / sizeof(int) * 18 + 1] = ' XX ';
	video_base[COLUMN / sizeof(int) * 18 + 2] = 'XX  ';
	video_base[COLUMN / sizeof(int) * 18 + 3] = '    ';
	video_base[COLUMN / sizeof(int) * 18 + 4] = '    ';
	video_base[COLUMN / sizeof(int) * 18 + 5] = '    ';
}

int main (void)
{
	char buffer[COLUMN * ROW] = {0};

	char onerow[COLUMN + 1] = {0};

	int i = 0;

	display_dinosaur((int*)buffer, 0, 0);
	
	for (i = 0; i < ROW; i++)
	{
		memset(onerow, 0, COLUMN + 1);
		memcpy(onerow, buffer + COLUMN * i, COLUMN);

		printf("%s\n", onerow);
	}


	return 0;
}

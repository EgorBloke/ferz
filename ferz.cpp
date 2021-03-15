# include <iostream>
# include <cstdlib>
# include <windows.h>
//Расставить ферзей на шахматной доске без взаимного боя
struct pos
{
	int a, b;
};
int main()
{
	pos ferz[8];
	srand(9);
	/*for (int i = 0; i < 8; ++i)
	{
		ferz[i].a = rand() / 8;
		ferz[i].b = rand() / 8;
	}
	*/
	/*ferz[0].a = 1;
	ferz[0].b = 1;

	ferz[1].a = 3;
	ferz[1].b = 2;

	ferz[2].a = 5;
	ferz[2].b = 4;

	ferz[3].a = 7;
	ferz[3].b = 4;

	ferz[4].a = 6;
	ferz[4].b = 2;

	ferz[5].a = 7;
	ferz[5].b = 1;

	ferz[6].a = 3;
	ferz[6].b = 4;

	ferz[7].a = 5;
	ferz[7].b = 3;*/



	ferz[0].a = 0;
	ferz[0].b = 0;

	ferz[1].a = 1;
	ferz[1].b = 4;

	ferz[2].a = 2;
	ferz[2].b = 7;

	ferz[3].a = 3;
	ferz[3].b = 5;

	ferz[4].a = 4;
	ferz[4].b = 2;

	ferz[5].a = 5;
	ferz[5].b = 6;

	ferz[6].a = 6;
	ferz[6].b = 1;

	ferz[7].a = 7;
	ferz[7].b = 3;
	
	char c;
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			c = 15;
			for (int p = 0; p < 8; ++p)
			{
				if (j == ferz[p].a && i == ferz[p].b)
				{
					c = 'X';
				}
				
			}
			std::cout << c;
		}
		std::cout<<std::endl;
	}


	for (int i = 0; i < 8; ++i)
	{
		for (int j = i + 1; j < 8 ; ++j)
		{
			if (i != j) 
			{
				if (ferz[i].a == ferz[j].a || ferz[i].b == ferz[j].b || ferz[i].a - ferz[i].b == ferz[j].a - ferz[j].b || ferz[i].a + ferz[i].b == ferz[j].a + ferz[j].b)
				{
					std::cout << "CAPTION!" << std::endl;
				}
			}
			
		}

	}

	char a = 49;
	std::cout << a;
	/*for (int i = 0; i < 8; ++i)
	{
		for (int h = ferz[i].a, v=ferz[i].b;   ; ++h,++v)
		{
			for
			if (ferz[i].a == ferz[j].a || ferz[i].b == ferz[j].b)
			{
				std::cout << "CAPTION!" << std::endl;
			}
		}

	}*/

}	
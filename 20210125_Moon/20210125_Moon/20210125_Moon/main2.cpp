#include <iostream>
#include <time.h>




int main()
{
	/*
	*
	**
	***
	****
	***** 
	*/

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			std::cout << "*";
		}

		std::cout << std::endl; //���ٰ���
	}

	/*
	*****
	****
	***
	**
	*
	*/

	std::cout << std::endl;

	for (int i = 4; i >= 0; --i)
	{
		for (int j = 0; j <= i; ++j)
		{
			std::cout << "*";
		}

		std::cout << std::endl;
	}

	/*
	    *
	   **
	  ***
	 ****
	*****
	*/

	std::cout << std::endl;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 4; j > i; --j)
		{
			std::cout << " ";
		}

		for (int j = 0; j <= i; ++j)
		{
			std::cout << "*";
		}

		std::cout << std::endl;

	}

	/*
	*****
	 ****
	  ***
	   **
	    * 
	*/

	std::cout << std::endl;

	for (int i = 4; i >= 0; --i)
	{
		for (int j = 4; j > i; --j)
		{
			std::cout << " ";
		}

		for (int j = 0; j <= i; ++j)
		{
			std::cout << "*";
		}

		std::cout << std::endl;
	}
	std::cout << std::endl;
	/*
		*				//3ĭ 2ĭ 1ĭ 0 ĭ 
	   ***
	  *****
	 *******
	 */

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 3; j > i; --j)
		{
			std::cout << " ";
		}

		for (int j = 0; j < i * 2 + 1; ++j)
		{
			std::cout << "*";
		}

		std::cout << std::endl;
	}

	/*
	  *				//3ĭ 2ĭ 1ĭ 0 ĭ // 1ĭ 2ĭ 3ĭ 
	 ***
	*****
   *******
    *****
	 ***
	  *
	*/
	int iStar = 0;
	for (int i = 0; i < 7; ++i)
	{
		if (i > 3)
			iStar = 6 - i;
		else
			iStar = i;

	
			for (int j = 3; j > iStar; --j)
			{
				std::cout << " ";
			}

			for (int j = 0; j < iStar * 2 + 1; ++j)
			{
				std::cout << "*";
			}

			std::cout << std::endl;
		
	}
	


	return 0;
}
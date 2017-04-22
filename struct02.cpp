//assingning structures
#include<iostream>
#include "struct02.h"

int main()
{

	inflatable bouquet =
	{
		"sunflowers",
		0.20,
		12.49
	};

	inflatable choice;
     
	std::cout << "bouquet " << bouquet.name << " for $";
	std::cout << bouquet.price << std::endl;

	choice = bouquet;
	std::cout << "choice " << choice.name << " for $ ";
	std::cout << choice.price << std::endl;



	return 0;
}
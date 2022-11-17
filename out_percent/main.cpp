#include "percent_windows.cpp"


int main(int argc, char const *argv[])
{
	long int b = 0;
	long int e = 1000000;


	std::cout << "Type range: ";
	// std::cin >> b >> e;
	Percent bar(b, e);
	
	long int c = 0;
	while(c < e) {
		// std::cout << "-> ";
	 //    std::cin >> c;
	    bar.update(++c);
	}
	return 0;
}
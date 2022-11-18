#include "percent_windows.cpp"


int main(int argc, char const *argv[])
{
	long int b = 0;
	long int e = 500;


	std::cout << "Type range: ";
	// std::cin >> b >> e;
	Percent bar(b, e);
	
	long int c = 0;
	while(c < e) {
		// std::cout << "-> ";
	 //    std::cin >> c;
		bar.clear_current_line();
	    std::cout << "c = " << c << std::endl;
	    bar.update(++c);
	    // Sleep(100);
	}
	return 0;
}
#include <iostream>
// #include <vector>
#include <string>
#include <cmath>

template <typename B, typename E>
double evaluate(B bg, E ed){
	std::cout << "evaluate('";
	for(auto i = bg; i != ed; i++){
		std::cout << *i;
	}
	std::cout << "')" << std::endl;
	double res = 0;
	
//  	IT'S DOESN'T WORK, ABSOLUTELY INCORRECT	////////////////////

	// for(auto itr = bg; itr != ed; itr++){
	// 	if(*itr == '+'){
	// 		std::cout << "+\r\n";
	// 		return evaluate(bg, itr) + evaluate(itr + 1, ed);
	// 	} else if(*itr == '-'){
	// 		std::cout << "-\r\n";
	// 		return evaluate(bg, itr) - evaluate(itr + 1, ed);
	// 	}
	// 	// std::cout << *itr << " - " << int(*itr) << std::endl;
	// }

	// for(auto itr = bg; itr != ed; itr++){
	// 	if(*itr == '*'){
	// 		std::cout << "*\r\n";
	// 		return evaluate(bg, itr) * evaluate(itr + 1, ed);
	// 	} else if(*itr == '/'){
	// 		std::cout << "/\r\n";
	// 		return evaluate(bg, itr) / evaluate(itr + 1, ed);
	// 	}
	// 	// std::cout << *itr << " - " << int(*itr) << std::endl;
	// }

	// for(auto itr = bg; itr != ed; itr++){
	// 	if(*itr == '^'){
	// 		std::cout << "^\r\n";
	// 		return pow(evaluate(bg, itr), evaluate(itr + 1, ed));
	// 	}
	// 	// std::cout << *itr << " - " << int(*itr) << std::endl;
	// }

	


	std::string conv(bg, ed);
	res = stoi(conv);


	return res;
}


int main(int argc, char const *argv[])
{
	for(int i = 0; i < argc; i++){
		std::cout << argv[i] << " ";
	}
	std::cout << std::endl;
	if(argc < 2) return 0;
	std::string data = argv[1];
	std::string ss(data.begin(), data.end());
	int t = stoi(ss);
	std::cout << "Result: " << evaluate(data.begin(), data.end());


	return 0;
}


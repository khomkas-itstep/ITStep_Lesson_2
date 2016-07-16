  #include <iostream> 
  using namespace std;
  
  int main(int argc, char** argv) {
  		int a;
		int b;
	
		std::cout << "VVedite chislo:";
		std::cin >> a;
		std::cout << "VVedite chislo:";
		std::cin >> b;	
	
				while (b != 0) {
						a %=b;
						swap(a,b);
				}
				
		int NOD = a;
		
		std::cout << "NOD =" << NOD;	
	
		return 0;
  }

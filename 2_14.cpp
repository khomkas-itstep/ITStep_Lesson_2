  #include <iostream>
   
  void multipl(int, int);
  
  int main(int argc, char** argv) { 
  		int a;
		int b;
		
		std::cout << " Vvedite a :\t";
		std::cin >> a;
		std::cout << " Vvedite b :\t";
		std::cin >> b;
		
		multipl(a,b);	
			
  		return 0;
  }
			
  void multipl(int a, int b) {
  	
  		std::cout << "\t\t" << a << '*' << b << '=' << a*b;
  }

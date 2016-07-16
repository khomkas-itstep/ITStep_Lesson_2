  #include <iostream>
  
  int main(int argc, char** argv) {  
		int N;
		int z = 1;
		std::cout << " N = ";
		std::cin >> N;
			for (int i = N; i >= 1; i--) { 	
					for (int a = i; a >= 1; a--)			
	 						std::cout <<' ';		
					for(int j = 1; j <= z; j++) {		
	 						std::cout <<'*';
					}
					z+=2;
					std::cout <<  std::endl;
			}
			
  		return 0;
  }

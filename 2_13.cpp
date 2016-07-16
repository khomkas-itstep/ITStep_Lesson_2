  #include <iostream> 

  int main(int argc, char** argv) {
		int sum = 0;
   		int i = 0;
		int count = -1;

	 			do {
	 					std::cin >> i;
	 					sum+=i;
	 					++count;					 					
				 }	 
				while (i != 0);						
	   
        std::cout << "SUM = " << sum << std::endl;			
	    std::cout << "COUNT = " << count;
		
	    return 0;
  }

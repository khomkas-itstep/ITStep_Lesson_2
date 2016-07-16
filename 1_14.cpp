  #include <iostream>  
  using namespace std;

  int main(int argc, char** argv) { 
  		int N = 8;
		int source[ ] = {1,6,-8,2,0,11,-4,5};
	    std::cout << "source = (";		
	    		for (int i = 0; i < N; i++) {		        		
						std::cout << source[i] << ',';
		        }
		        
		std::cout << ')' << std::endl;	
			     
				for(int i = 1; i < N; i++) {
					
			    		for (int j = 0; j < N-1;j++) {			
								if (source[j]>source[j+1]) { 
										swap(source[j],source[j+1]);										
								}					
						}				       	
				}
				std::cout << "source sort = (";	
	            for (int j = 0; j < N; j++) {         	            
			    		std::cout << source[j] << ',';	
				}	
				std::cout << ')' << std::endl;	
							
        return (0);
  }
	

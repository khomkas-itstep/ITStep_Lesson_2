  #include <iostream>
  #include <math.h> 

  void sr_geo(int* A,int N);
  
  int main(int argc, char** argv) {	  
  		int N = 16;	
		//std::cout << " Vvedite N :\t" ;
		std::cout << "Vvod elementov:" << std::endl;
		int a[N];
 	 			for(int i = 0; i < N; i++) {
 	 				
	  					std::cin >> a[i]; 
	  					
	  			}
	  			
		std::cout << std::endl;
		
	 			for(int i = 0; i < N; i++) {
	 				
	  					std::cout << a[i] << ','; 
	  					
	  			}
		sr_geo(a,N);	
		
	return 0;
  }
  
  void sr_geo(int* A,int N) {
  		int D = 1;	
    			for(int i=0; i<N; i++){
    					D = D * A[i];
				}
				
  		std::cout << std::endl;
  		std::cout << "Srednee geometri4eskoe = " << sqrt(sqrt(sqrt(sqrt(D)))) ;	
		  	
  }
	


	
		
	

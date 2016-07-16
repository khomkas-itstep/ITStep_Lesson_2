  #include <stdio.h>
  #include <iostream> 
  #include <conio.h>
  #include <math.h>
 

  void sr_aR(int* A,int N);
  
  int main(int argc, char** argv) {	  
  		int N = 16;	
		//std::cout << " Vvedite N :\t" ;
		//std::cin >> N;
		int a[N];
 	 			for(int i = 0; i < N; i++) {
 	 				
	  					std::cin >> a[i]; 
	  					
	  			}
	  			
		std::cout << std::endl;
		
	 			for(int i = 0; i < N; i++) {
	 				
	  					std::cout << a[i] << ','; 
	  					
	  			}
		sr_aR(a,N);	
		
	return 0;
  }
  
  void sr_aR(int* A,int N) {
  		int sum = 0;	
    			for(int i=0; i<N; i++){
    					sum = sum + A[i];
				}
				
  		std::cout << std::endl;
  		std::cout << "Srednee arifmeti4eskoe = " << sum/N ;	
		  	
  }
	


	
		
	

  #include <iostream> 
  #include <time.h>

  int main(int argc, char** argv) { 
  		unsigned long long timestamp = 1464765157274;
		int min = (timestamp/60000)%60; 
    	int hour = (timestamp/3600000)%24;
		int d = (timestamp/(3600000*24));			
		int Y1 = 1970;
		int years = d/((365 * 3 + 366)/4);
		int Y = Y1 + years;	
	
		int D = 0;	
		D = d - (years * 365 + years/4);	
	
   		int month[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    	int M = D/30;
		int S =0;		
	  			for (int j = 0; j < M; j++)	
	 					S = S + month[j];    
	  					int Month;
	 					int Day;
								if (D - S == 0) {
	      								Month = M + 1; Day = 1;
								}			
       							 else {
								 		Month = M; Day = D - S + 1;
								}
		
  		std::cout << Day  << ' ' << Month << ' ' << Y << ' ' << hour << ':' << min;
	
  		return 0;
  }
  

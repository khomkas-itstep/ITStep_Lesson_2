   #include <iostream> 

  int main(int argc, char** argv) { 
  		int N = 5;
		int A[] = {1,8,6,2,1};
		int B[] = {1,2,3,4,5};
		int Z;
		int scalar = 0;
		
		std::cout<< "Z" << "=(";
		
				for (int i = 0; i < N; i++) {
						Z = A[i] + B[i];
						
						std::cout<<  Z << ',' ;
				}
				
		std::cout << "\b)";
		std::cout << std::endl;
		std::cout << "scalar = ";
		
				for (int i = 0; i < 9; i++) {
						scalar += A[i] * B[i];
						scalar ++;
				}
		
		std::cout  << scalar; 	
	
		return 0;
  }
	

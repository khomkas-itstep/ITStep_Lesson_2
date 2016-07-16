  #include <iostream>
  #include <locale.h>
   
  int main(void) {	
		int X;	
		setlocale(LC_ALL,"Rus");
		std::cout << "Введите год\n";
    	std::cin >> X;	
	 			if ((X%4==0) && (X%100!=0) || (X%400==0))
	    				std::cout << X  << " " << " Високосный год " << std::endl;	
	  			else  
	   				 std::cout << X  << " " << " Невисокосный год " << std::endl;		
 	    return 0;
  }
  
 

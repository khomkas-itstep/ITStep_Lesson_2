  #include <iostream>
  #include <locale.h>
   
  int main(void) {	
		int X;	
		setlocale(LC_ALL,"Rus");
		std::cout << "������� ���\n";
    	std::cin >> X;	
	 			if ((X%4==0) && (X%100!=0) || (X%400==0))
	    				std::cout << X  << " " << " ���������� ��� " << std::endl;	
	  			else  
	   				 std::cout << X  << " " << " ������������ ��� " << std::endl;		
 	    return 0;
  }
  
 

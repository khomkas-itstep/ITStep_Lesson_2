  #include <iostream>  
  
 	
  int main(int argc, char** argv) {
  		int day = 24;
		int month = 11;
		int year = 2015; 
	  	int M[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	 	int sum = 0;
	 	
	 	
		printf("%i %i %i\n",day, month, year);
		
				for (int j=0; j < month-1; ++j)	
						sum =sum + M[j] ;
						int a = year - 1968;
						int b = a/4;	
						int Y = ((b * 366) + (a - b) * 365); 
						int D = ((sum+day+Y)+8)%7;
				

  switch (D) {
  		case 1:
				printf("Monday\n");
					break;
		case 2:
				printf("Tuesday\n");
					break;
		case 3:
				printf("Wednesday\n\n");
					break;
		case 4:
				printf("Thursday\n");
					break;
		case 5:
				printf("Friday\n");
					break;
		case 6:
				printf("Saturday\n");
					break;
		case 0:
				printf("Sunday\n");
					break;
		default:
				printf("Wrong arg\n");
					break;
  }	
		
		
  		return 0;
  }

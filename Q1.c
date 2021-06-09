//Samet Köser 150119910

#include<stdio.h>
void reverseN(int *number, int N){
	// Define the integers.
	int digit;
	int number2=*number;
	int number3=*number;
	int reverses[N];
	int num=0;
	int num2=0;
	//reverse the number and get how many digit there are
    while ((int) number2 !=0) { 
    	reverses[num]=number2%10;
    	num+=1;
      	number2 = number2/10;
	  	digit+=1;
    }
    int numbers[digit];
    
    num=0;
    //geting the digits in numbers array
    while ((int) number3 !=0) { 
    	numbers[num]=number3%10;
    	num+=1;
      	number3 = number3/10;
	  	
    }
    // control if digit count is bigger than N.
    if(digit>=N){
    	num=0;
    	int i;
		for(i=digit;i>0;i-=1){
			// if current digit is before the reverse  put the normal number
			if(digit-N>num){
				printf("%d", numbers[i-1]);
				num+=1;
			}
			// if current digit is after the reverse  put the reverse number
			else{
				
				printf("%d", reverses[num2]);
				num2+=1;
			}
	        
	    }
	}
	//if N is bigger than digits print N must be less than digit +1.
	else{
		printf("N must be less than %d!", digit+1); 
	}

}

int main(){
	//define the numbers and get input from user and call reverseN function with numbers.
	int num;
	int N;
	int *number= &num;
	
	scanf("%d %d", & num,&N);
	
	reverseN(&num,N);
	return 0;
	
}


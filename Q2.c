//Samet Köser 150119910

#include<stdio.h>
#include <string.h>



int main(){
	// Define the integers and string.
	int value2=0;
	int i;
	int j;
    int size;
    char letter[4];
    char answer[4];
	printf("Welcome to the letter printer.\n");
	//get the size and control it if it is available then continue otherwise until it is available get the size again and again
    while(value2==0){

        
        printf("Enter the size: ");
        scanf("%d", &size);
        while(size<5  || size%2==0){
            printf("Invalid letter: Enter the size again: ");
            scanf("%d", &size);

        }
        //get the letter and control it if it is available then continue otherwise until it is available get the letter again and again
        printf("Enter the letter: ");
        scanf("%s", letter);
        while(strcmp(letter,"X")!=0  && strcmp(letter,"Z")!=0 && strcmp(letter,"W")!=0 && strcmp(letter,"Y")!=0){
            printf("Invalid letter: Enter the letter again: ");
            scanf("%s", letter);
        }
        // control the letter if it is X then make X with * using for loop.
        if(strcmp(letter,"X")==0){
        	int num=0;
        	for(i=0;i<size;i+=1){
        		for(j=0;j<size;j+=1){
        			if(j==i||j==size-i-1){
        				printf("*");
					}
					else{
						printf(" ");
					}
				}
				printf("\n");
				

			}
		}
		// control the letter if it is Z then make Z with * using for loop.
		else if(strcmp(letter,"Z")==0){
			for-{
        		for(j=0;j<size;j+=1){
        			if(i==0||i==size-1||j==size-i-1){
					
        				printf("*");
					}
					else{
						printf(" ");
					}
				}
				printf("\n");
				

			}
		}
		// control the letter if it is W then make W with * using for loop.
		else if(strcmp(letter,"W")==0){
			for(i=0;i<size;i+=1){
        		for(j=0;j<4*size-3;j+=1){
        			if(j==i||j==2*size-i-2||j==2*size+i-2||j==4*size-4-i){
        				printf("*");
					}
					else{
						printf(" ");
					}
				}
				printf("\n");
				

			}
		}
		// control the letter if it is Y then make Y with * using for loop.
		else{
			for(i=0;i<size;i+=1){
        		for(j=0;j<size;j+=1){
        			if(i<size/2){
        				if(j==i||j==size-1-i){
	        				printf("*");
						}
						else{
							printf(" ");
						}
					}
					else{
						if(j==size/2){
	        				printf("*");
						}
						else{
							printf(" ");
						}
					}
				}
				printf("\n");
				

			}
		}
        






		// ask if the user want to continue if the user want continue the while loop else break.
        printf("Would you like to continue? (Y or N): ");
        scanf("%s", answer);
        
        value2=strcmp(answer,"Y");
        if(value2!=0){
            printf("Goodbye :)");

        }

    }
    return 0;

}

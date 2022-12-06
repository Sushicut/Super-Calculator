#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	char menu, try;
	int n, i, operator;
	float num[100], sum = 0, ave, smallest, x = 0;
	double factorial = 1;
	
	do{
		//main menu
		system("cls");
		
		printf("\t=====  ==  ==  ====   =====  ====\n");
		printf("\t||     ||  ||  ||  =  ||     ||  =\n");
		printf("\t=====  ||  ||  ====   =====  ====\n");
		printf("\t   ||  ||  ||  ||     ||     || =\n");
		printf("\t=====  ======  ==     =====  ==   =\n");
		printf("\t\t  CALCULATOR\n\n");
		
		printf("  [1] Get started\n");
		printf("  [2] About\n");
		printf("  [3] Exit\n\n");
		
		printf("What do you like to do? ");
		scanf(" %c", &menu);
		
		//get started
		if(menu == '1'){
			
			do{
				system("cls");
				
				printf("Input number of numbers: ");
				scanf(" %d", &n);
				
				//for loop for storing value of each elements in array
				for(i = 0; i < n; i++){
					printf("Enter number %d: ",  i + 1);
					scanf(" %f", &num[i]);
				}
				
				//operator selection
				printf("\t\t\tSelect Operators\n\n");
			
				printf("  [1] Average\n");
				printf("  [2] Smallest Number\n");
				printf("  [3] Factorial\n");
				printf("  [4] Square Root\n\n");
			
				printf("Operator: ");
				scanf(" %d", &operator);
			
				//average
				if(operator == 1){
				
					//formula
					for(i = 0; i < n; i++){
						sum += num[i];
					}
					ave = sum / n;
					
					printf("\n\t\t\tSummary\n\n");
					
					printf("The numbers are: ");
					for (i = 0; i < n; i++)
					printf("%.2f ",num[i]);
					
					printf("\nThe operator is : Average");
				    printf("\nThe answer is/are: %.2f", ave);
				    
				    //variable reset
				    sum = 0;
				    ave = 0;
					
				}
			
				//smallest number
				else if(operator == 2){
				
					//formula
					smallest = num[0];
				
					for (i = 0; i < n; i++){
      					if(num[i] < smallest){
        					smallest = num[i];
      					}
   					}
   					
   					printf("\n\t\t\tSummary\n\n");
			
					printf("The numbers are: ");
					for (i = 0; i < n; i++)
					printf("%.2f ",num[i]);
   				
   					printf("\nThe operator is : Smallest Number");
				    printf("\nThe answer is/are: %.2f", smallest);
				    
				}
			
				//factorial
				else if(operator == 3){
				
					//formula
					for(i = 0; i < n; i++){
						sum += num[i];
					}
				
					for(x = sum; x > 0; x--){
						factorial *= x;
					}
				
					printf("\n\t\t\tSummary\n\n");
			
					printf("The numbers are: ");
					for (i = 0; i < n; i++)
					printf("%.2f ",num[i]);
					
					printf("\nThe operator is : Factorial");
				    printf("\nThe answer is/are: %.2f", factorial);
				    
				    //variable reset
				    sum = 0;
				    factorial = 1;
				
				}
			
				//square root
				else if(operator == 4){
				
				printf("\n\t\t\tSummary\n\n");
			
				printf("The numbers are: ");
				for (i = 0; i < n; i++)
				printf("%.2f ",num[i]);
				
				printf("\nThe operator is : Square Root");
				printf("\nThe answer is/are: ");
					//formula
					for(i = 0; i < n; i++){
						printf("%.2f ", sqrt(num[i]));
					}
				}
				
				//invalid input in operator
				else{
					printf("Invalid!");
				}
			
				printf("\n\nDo you wish to try again? (y/n) ");
				scanf(" %c", &try);
			} while(try == 'y' || try == 'Y');
			if(try != 'y' || try != 'Y'){
				printf("Invalid!");
			}
		
		}
		
		//about
		else if(menu == '2'){
			system("cls");
			
			printf("\t\t\tAbout\n\n");
			printf("What is Super Calculator?\n\n");
			printf("\tThe Super Calculator is a tool that performs\n");
			printf("arithmetic operations on numbers using a wide range\n");
			printf("of operators. Simple calculators can only perform\n");
			printf("the addition, substraction, multiplication, and\n");
			printf("division. However, the Super Calculator can execute\n");
			printf("up to 100-number calculations and can display up to\n");
			printf("four decimals, and it can also handle factorial,\n");
			printf("square root, average, and lowest number computations.\n\n");
			
			printf("\t\t     Developers\n\n");
			printf("A***************a\n");
			printf("J**************s\n");
			printf("M*******************o\n");
			printf("I*******************c\n");
			printf("J*****************s");
		}
		
		//exit
		else if(menu == '3'){
			printf("\nThank you for using Super Calculator!");
			exit(0);
		}
		
		//if invalid input in main menu
		else{
			printf("Invalid!");
		}
		
		//reset to go back to main menu
		printf("\n\nBack to main menu? (y/n): ");
		scanf(" %c", &menu);
	} while(menu == 'y' || menu == 'Y');
		
		if(menu == 'n' || menu == 'N'){
			printf("\nThank you for using Super Calculator!");
			exit(0);
		}
		else{//invalid input in 
			printf("Invalid! Exiting program...");
		}
		
	return 0;
}

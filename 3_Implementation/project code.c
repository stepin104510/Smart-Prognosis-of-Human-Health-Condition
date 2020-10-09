#include<stdio.h>
#include<stdlib.h>
int main()
{
	int option,count=0;
	float result;
	char ans;
	printf("Welcome! You can calculate your risk factor for diseases Diabetes Mellitus, Heart Attack and Hypertension by answering a few questions. \n Let's get started. \n");
	l1:
	printf("Choose the disease you want to find the risk factor for\n");
	printf("1. Diabetes Mellitus\n");
	printf("2. Heart Attack (Myocardial Infraction)\n");
	printf("3. Hypertension (B.P.)\n");
	printf("Choose your option:");
	scanf("%d",&option);
	switch(option)
	{
		case 1: printf("\n\nBelow are the questions you need to answer to calculate your risk factor for Diabetes Mellitus.\n *****Your input should be y or Y if Yes and n or N if NO.*****\n");
		         printf("Question 1: Do you have increase in passage of large volume of urine?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }
				  printf("Question 2: Do you urinate frequently during night ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }
				  printf("Question 3: Do you have excessive appetite or eat excessively ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }
				  printf("Question 4: Do you feel thirsty or have dry mouth very often ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }
				  printf("Question 5: Do you have early fatigability ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }
				  printf("Question 6: Do you have delayed wound healing ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }
				  printf("Question 7: Do you have weight loss ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }
				  printf("Question 8: Is your vision blurry ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }

				 break;

		case 2: printf("\n\nBelow are the questions you need to answer to calculate your risk factor for Heart Attack.\n *****Your input should be y or Y if Yes and n or N if NO.*****\n");
		         printf("Question 1: Do you have chest pain, that is, in the substernal region that lasts atleast for 20 minutes and radiates to the neck, left shoulder and left arm ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }
				  printf("Question 2: Do you feel dizzy or does your head spin, is there any altered sense of balance and pain ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }
				  printf("Question 3: Do you have temporary loss of consciousness ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }
				  printf("Question 4: Do you have Dyspnea, which is difficulty in breathing ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }
				  printf("Question 5: Does your heart beat faster than normal or do you have fast heart rate ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }

				 break;

		case 3: printf("\n\nBelow are the questions you need to answer to calculate your risk factor for Hypertension (B.P).\n *****Your input should be y or Y if Yes and n or N if NO.*****\n");
		         printf("Question 1: Do you have a headache (usually rare) ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }
				  printf("Question 2: Does your nose bleed ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }
				  printf("Question 3: Do you feel breathless ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }
				  printf("Question 4: Do your legs hurt ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }
				  printf("Question 5: Do you feel nauseous or do you vomit ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }
				  printf("Question 6: Do you have visual disturbance ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }
				  printf("Question 7: Do you have any seizures ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }
				  printf("Question 8: Is your vision blurry ?\n");
				  scanf(" %c",&ans);
				  if(ans == 'y' || ans == 'Y')
				  {
					  count++;
				  }

				 break;

		default: printf("Wrong input! Please read the instructions carefully again!\n");
		          printf("Do you want to exit?  press y or Y\n");
				  scanf(" %c",&ans);
				  if(ans=='y' || ans=='Y')
					  exit(0);
				  else if(ans='n' || ans == 'N')
                  {
					  goto l1;
                  }
				  else
				  {
					  printf("Wrong Input again. Exiting!");
				     exit(0);
				  }


	}
	if(option==1)
	{
		result=count;
	    result = result/8*100;
	    printf("Your risk factor for Diabetes Milletus is %0.2f%%.\n", result);
	    if(result >= 50)
            printf("*****  Risk Factor is greater that 50 percent Consult Doctor  *****\n");
        else
            printf("*****  Risk Factor is less that 50 percent need not worry much  *****\n");
	   // printf("\nPress enter to exit");
	    exit(0);
	}
	else if(option == 2)
	{
		result=count;
	    result= result/5*100;
	    printf("Your risk factor for Heart Attack is  %0.2f%%.\n",result);
	    if(result >= 50)
            printf("*****  Risk Factor is greater that 50 percent Consult Doctor  *****\n");
        else
            printf("*****  Risk Factor is less that 50 percent need not worry much  *****\n");
	   // printf("\nPress enter to exit");
	    exit(0);
	}
	else
	{
	 result=count;
	 result = result/8*100;
	 printf("Your risk factor for Hypertension is %0.2f%%.\n",result);
	 if(result >= 50)
            printf("*****  Risk Factor is greater that 50 percent Consult Doctor  *****\n");
        else
            printf("*****  Risk Factor is less that 50 percent need not worry much  *****\n");
	 //printf("\nPress enter to exit");
	    exit(0);
	}
	return 0;
}


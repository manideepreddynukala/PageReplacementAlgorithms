#include<project.h>
#include<stdio.h>
int processInput()
{
	int finish=0;
	//frames
	printf("Give no. of frames:\t");
	scanf("%d",frames);
	
	//input
	while(1)
	{
		scanf("%d",input);
		if(input>=0)
		{
			match=match(input);
			if(match>=0)
			{
				matchLogic(match);
			}
			else//if(match==-1)
			{
				unmatchLogic(input);
				faults++;
			}
		}
		else
		{
			printf("\nU R DONE! ;)\n");
			finish=1;
		}
		if(finish)
			break;
		
	}

return faults;
}

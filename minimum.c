#include<project.h>
#include<stdio.h>
int minimum()
{
	int min=0;
	for(int i=1;i<frameno;i++)
	{
		if(pageframe[i]<[min])
		min=i;
	}
	return min;
}

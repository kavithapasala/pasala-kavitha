#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("d:\\23kd1a05h8\\example1.txt","w");
	fprintf(fp,"%s","hello");
	fclose(fp);
}
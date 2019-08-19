#include <stdio.h>

int main()
{
	unsigned int i=0xAABBCCDDu;	

	unsigned char* ptri=(unsigned char *)&i;

	if((*ptri)==(0xDD))
	{
		printf("litle endian system \n");
	}
	else
	{
		printf("big endian system \n");
	}

	return 0;
}

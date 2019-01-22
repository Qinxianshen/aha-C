#include <stdio.h>
#include <stdlib.h>
int main()
{
	float length,width;
    
    printf("Enter the length of the rectangle:\n");
    while(scanf("%f",&length) == 1)
    {
		printf("length = %0.2f:\n",length);
        printf("Enter its width:\n");
        scanf("%f",&width);
        if(scanf("%f",&width != 1))
			break;
        else
			printf("width=0.2f",width);
			printf("area=0.2f",length*width);
			printf("Enter the length of the rectangle\n");
    
    
    
    }
    printf("Done");
	system("pause");
	return 0;
}

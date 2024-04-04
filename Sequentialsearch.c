      
    #include <stdio.h>
    int main()
    {
    	int arr[]={12,23,78,98,67,56,45,19,65,9},key,i,flag=0;
    	printf("\nENTER A NUMBER: ");
    	scanf("%d",&key);
    	for(i=0;i<10;i++)
    	{
    		if(key==arr[i])
    			flag=1;
    	}
    	if(flag==1)
    		printf("\nTHE NUMBER %d EXISTS IN THE ARRAY",key);
    	else
    printf("\nTHE NUMBER %d DOES NOT EXIST IN THE ARRAY",key);
    return 0;
    }
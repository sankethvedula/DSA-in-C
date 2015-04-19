#include <stdio.h>
#include <string.h>
#include <stdlib.h>
main()
{
	char str[2000];
	char substr[50][50] = {0};
	int i =0;
	//scanf ("%[^\n]%*c", str);
	gets(str);
	printf("%s\n",str);
	//printf("%d\n",substr[0][20]);
	int j,k;
	j =0;
	k =0;
	while(str[i]!= '\0')
	{
	    if(str[i] != ' ')
	    {
	    	substr[j][k] = str[i];
	    	k++;
	    }
	    else{
	    	j++;
	    	k =0;
	    }
	    i++;
	}
	i =0;
	/*while(i <50)
	{
		printf("%s\n",substr[i]);
		i++;
	}*/
}
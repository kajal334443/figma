#include<stdio.h>
#include<string.h>
int main(){
	char s1[]="abcd";
	char s2[]="bcda";
	char temp[100];
	if(strlen(s1)!=strlen(s2)){
		printf("false");
		return 0;
	}
	strcpy(temp, s1);
	strcat(temp, s1);
	if(strstr(temp,s2));
	printf("true");
	else{
    printf("false")
	}
	return 0;
}
	}
}

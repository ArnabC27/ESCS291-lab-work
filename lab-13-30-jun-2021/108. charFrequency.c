/**
108:  Write a program that counts frequency of each letter in the string (string consists lowercase letters only).
Solution of the problem is given in below algorithm. Implement the solution in C.

[Marks: 15]

Algorithm :

1. Initialize an array of 26 elements for each letter (a-z) to 0. (array[26]={0})

2. Scan the entire string and for each string element check the letter and increase the frequency in array by using ASCII value.
   (array[str[i]-'a']++)
Like in str="aaabbccccddef",
str [3] ='b'
Thus, and str [2]-'a'=1
Thus it increases the frequency of 'b' by 1 (array [str [3]-'a'] turns to be array [1] ++)

3. Finally print the letter with their respective frequencies. This is the encoded string.
*/


#include <stdio.h>
#include <string.h>

int main()
{
  	char str[100];
  	int i;

  	int freq[26] = {0};

  	printf("\nPlease Enter a String : ");
  	gets(str);

  	for(i = 0; str[i] != '\0'; i++)
  	{
  	    *(freq+(str[i] - 'a')) += 1;
    }

    printf("\nCharacter\tFrequency\n\n");
  	for(i = 0; i < 26; i++)
  	{
		if(*(freq+i) != 0)
		{
			printf("  '%c' \t   ->\t   %d\n", i+'a', freq[i]);
		}
	}

  	return 0;
}

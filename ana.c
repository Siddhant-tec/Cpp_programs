#include <stdio.h>

int check_anagram(char a[], char b[]);

int main()
{
  char a[100], b[100];  //declaring two strings a and b

  printf("Enter a string 1\n");
  gets(a);

  printf("Enter a string 2\n");
  gets(b);

  if (check_anagram(a, b) == 1)
    printf("The strings are anagrams.\n");
  else
    printf("The strings aren't anagrams.\n");

  return 0;
}

int check_anagram(char a[], char b[])
{
  int first[26] = {0};
  int second[26] = {0}, i=0;  // declaring arrays first and second

  // Calculating frequency of characters of first string

  while (a[i] != '\0')
  {
    first[a[i]-'a']++;
    i++;
  }

  i = 0;

  while (b[i] != '\0')
  {
    second[b[i]-'a']++;
    i++;
  }

  // Comparing frequency of characters

  for (i = 0; i < 26; i++)
  {
    if (first[i] != second[i])     //comparing length of each string
      return 0;
  }

return 1;
}

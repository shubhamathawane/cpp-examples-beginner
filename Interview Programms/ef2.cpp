#include <stdio.h>
#include <conio.h>
#include <string.h>
 
// A function to check if a string str is palindrome
void isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;
 
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome\n", str);
            return;
        }
    }
    printf("%s is a palindrome\n", str);
}
 
// Driver program to test above function
int main()
{
    char str[50];
    char ch;
    
    printf("\n\n\tEnter the string : ");
              for(int i=0;i<50;i++)
              {
                     ch = getch();         //Statement   1

                     if(ch==13)               //Statement   2abcddc
                     break;

                     str [i] = ch;
              }
    isPalindrome(str);
    return 0;
}
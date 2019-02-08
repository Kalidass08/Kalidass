#include<stdio.h>
int main()
{
    char k;
    scanf("%c",&k);
    if( k == 'a' || k == 'A' || k == 'e' || k == 'E' || k == 'i' || k == 'I' || k == 'o' || k == 'O' || k == 'u' || k == 'U' )
    {
        printf("vowel");
        
    }
    else if(k == '!' || k == '@' || k == '#' || k == '$' || k == '%' || k == '^' || k == '&' || k == '*' || k == '(' || k == ')' || k == '-')
  {    
      printf("invalid");
  }
  else
  printf("consonant");
    return 0;
}
    

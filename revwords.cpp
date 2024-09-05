#include<iostream>
#include "revwords.h"
void reverse_substring(char str[], int start,int end)
{
   const int s=start;
   const int e=end;
   int ln=end-start+1;
   for(int j=0;j<=(ln/2)-1;j++)
   {
   	int t=str[start];
   	str[start]=str[end];
   	str[end]=t;
   	start=start+1;
   	end=end-1;
   }
   for(int j=s;j<=e;j++)
   std::cout<<str[j];
}
int find_next_start(char str[], int len, int i)
{
   while(i<=len)
   {
     if(i==0||str[i-1]==' ')
     {
     return i;
     break;
     }
     else if(str[i]==' ')
     {
      return i+1;
      break;
     }
     else if(str[i]=='\0')
     {
	 return -1;
	 break;
     }
	 i=i+1; 
   } 
}  
int find_next_end(char str[],int len, int i)
{
   int j=find_next_start(str,len,i); 
   for(int n=j;n<=len;n++)
   {
    if(str[n]==' '||str[n]=='\0')
    {
    return n-1;
    break;
    }
   }
}
void reverse_words(char s[])
{ 
  int i=0;
  int len=0;
  for(int j=0;s[j]!='\0';j++)
  len++;
  while(i<len)
  {
  int a=find_next_start(s,len,i);
  int b=find_next_end(s,len,a);
  reverse_substring(s,a,b);
  std::cout<<" ";
  if(b==len-1)
  break;
  i=b+1;
  }
}


#include <stdio.h>
#include <stdlib.h>
 int main() 
 { 
   int n,*p,i, largest,smallest ; 
   printf("enter the number of Elements: "); 
   scanf("%d",&n); 
   p=(int *)malloc(n*sizeof(int)); 
   if(p==NULL) 
   { 
   printf("error "); 
   exit(0); 
   } 
   else{ 
   printf("\nenter the Elements:"); 
   for(i=0;i<n;i++) 
   scanf("%d",p+i); 
   smallest=*p; 
   largest=*p; 
   for(i=0;i<n;i++) 
   { 
   if(*(p+i) < smallest) 
   smallest=*(p+i); 
   if(*(p+i) > largest) 
   largest=*(p+i); 
   } 
   printf("largest:%d\nsmallest:%d",largest,smallest); 
   } 
   return 0; 
 }
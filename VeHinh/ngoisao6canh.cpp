#include <iostream>
using namespace std;
int main() {
  int i,j; 
     
    for(i=1;i<=5;i++) 
    { 
        for(j=16;j>=i;j--) 
        { 
            printf(" "); 
        } 
        for(j=1;j<=i;j++) 
        { 
            printf(" *"); 
        } 
        printf(" \n"); 
    } 
  

    for(i=1;i<=6;i++) 
    { 
        for(j=1;j<=i;j++) 
        { 
            printf(" "); 
        } 
        for(j=16;j>=i;j--) 
        { 
            printf(" *"); 
        } 
        printf("\n");     
    } 
    ////////////////////////////////////// 

    for(i=12;i<=16;i++) 
    { 
        for(j=17;j>i;j--) 
        { 
            printf(" "); 
        } 
        for(j=1;j<=i;j++) 
        { 
            printf(" *"); 
        } 
        printf("\n"); 
    } 
    //////////////////////////////////////////// 
     
        for(i=5;i>=1;i--) 
        { 
           for(j=16;j>=i;j--) 
           { 
                printf(" "); 
           } 
           for(j=1;j<=i;j++) 
           { 
                printf(" *"); 
           } 
        printf(" \n"); 
        } 
  return 0;
}

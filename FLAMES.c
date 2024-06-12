#include <stdio.h>
 int main() {
    // Write C code here
    char s1[20] , s2[20] ;
    int len1,len2,sum,count=0,repeat=0;
    
    scanf("%s",s1);
    scanf("%s",s2);
    
    
    len1 =strlen(s1);
    len2=strlen(s2);
    
    for(int i=0;i<len1;i++){
        for(int j=0;j<len2;j++){
            if(s1[i]==s2[j])
            {
                s1[i]='0';
                s2[j]='0';
            }
        }
    }
    for(int i =0 ; i<len1 ; i++){
        if(s1[i]=='0')
            continue;
        else
        count++;
    }
     for(int i =0 ; i<len1 ; i++){
        if(s2[i]=='0')
            continue;
        else
        count++;
    }
    count=count%6;
    char flames[]={'f','l','a','m','e','s'};
   printf("%c ",flames[count]);
    return 0;
}


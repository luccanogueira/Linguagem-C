#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i=0,k=0;
    char str[30],str2[30];
printf ("*** Digite uma palavra ***\n");
fgets(str,51,stdin);

for(;i<30;i++){
    if (str [i] == 'a' || str [i] == 'e' || str [i] == 'i' || str [i] == 'o' || str [i] == 'u'){
                str [i]= ' ';
            }
    if(str[i]==' ')continue;
    str2[k]=str[i];
    k++;
}
printf("%s",str2);

return 0;
}

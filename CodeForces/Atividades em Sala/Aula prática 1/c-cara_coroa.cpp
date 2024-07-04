#include <bits/stdc++.h>
 
int main(){
    int lig,gar;
    scanf("%d %d",&lig,&gar);
    int total = lig + gar;
    int porc_lig = (lig*100)/total;
    int porc_gar = (gar*100)/total;
 
    printf("%d %d\n",porc_lig,porc_gar);
        
    return 0;
}

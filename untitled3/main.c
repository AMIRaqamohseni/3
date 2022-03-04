#include <stdio.h>
int main() {
    int saat,daqiqe,tabdil_saat,formol;
    printf("Saat : ");
    scanf("%i",&saat);
    printf(" Daghighe : ");
    scanf("%i",&daqiqe);
    tabdil_saat = (saat+(daqiqe/60));
    formol = (4*(tabdil_saat*tabdil_saat))/(tabdil_saat+2)-20;
    printf("Dama : ");
    printf("%.i",formol);
    printf(" Centigrade ast !");
    return 0;
}

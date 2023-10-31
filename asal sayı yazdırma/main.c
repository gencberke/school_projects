#include <stdio.h>

int main() {
    for (int i = 200; i>=1; i--) {
        int veri =0;

        for (int j = 2; j < i ; ++j) {
            if(i%j==0){
                veri=1;
                break;
            }

        }
        if(veri==1)   {
            printf("%d sayı asal değildir\n",i);
        }
        else{
            printf("%d sayı asaldır\n",i);
        }
    }
    return 0;
}

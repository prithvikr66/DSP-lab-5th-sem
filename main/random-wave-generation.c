// C code to generate a random signal with frequency has 20/128 meaning 20 cycles for 128 units of time
#include<stdio.h>
#include<math.h>
#define PI 3.141592653589793
#define PTS 128
float x[PTS];
float y[PTS];

void main(){
    for(int i=0;i<PTS;i++){
        x[i]=sin(2*PI*i*(20/128)); //here i is the time and 20/128 is the frequency
        y[i]=x[i]+rand()*10;
        printf("%d\n",y[i]);
    }
}

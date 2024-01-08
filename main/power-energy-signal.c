#include<stdio.h>

// calculating energy of the signal 
long int energy(int x[],int num){
    long int sum=0;
   for(int i=0;i<num;i++){
    sum+=(x[i]*x[i]);
   } 
   return sum;
}


long int power(long int energy_of_signal,int num){
    return energy_of_signal/((2*num)+1);

}

void main(){
    int num,x[32];
    long int energy_of_signal,power_of_signal;
    printf("Enter the Number of Samples");
    scanf("%d",&num);
    printf("Enter the Samples");
    for (int i=0;i<num;i++)
    scanf("%d",&x[i]);
    energy_of_signal=energy(x,num);
    power_of_signal=power(energy_of_signal,num);


}
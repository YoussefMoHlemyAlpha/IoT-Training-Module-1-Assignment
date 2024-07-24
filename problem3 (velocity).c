// Module 1 Assignment – Part A – Problem 4

# include <stdio.h>

double velocity;

void calculate_velocity (){

    int Startpoint,Endpoint;
    printf("Enter The Start Point : \n");
    scanf("%d",&Startpoint);
    printf("Enter The End Point : \n");
    scanf("%d",&Endpoint);

 for (int Tc=Startpoint;Tc<=Endpoint;Tc++){
  velocity=331.3+0.61*Tc;
  printf("At %d degrees Celsius the velocity of sound is %.1f m/s \n",Tc,velocity);
  
 }
}


int main(){

 calculate_velocity();

return 0;

}

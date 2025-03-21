#include <stdio.h>
#include <math.h>
#include <string.h>

#define PI=3.14159
#include <stdbool.h>
 int main(){
   /*double hole_diameter;5

   double edge_diameter;
   double thickness;
   double density ;
   double quantity;
   double weight;
   double hole_radius;
   double edge_radius;
   double rim_area;
   double unit_weight;*/
   double edgeAB;

   double edgeAC;

   double edgeBC;

   double angle;

   printf("Enter edge AB:");

   scanf("%lf", &edgeAB);

   printf("Enter edge AC:");

   scanf("%lf", &edgeAC);

   printf("Enter edge angle:");

   scanf("%lf",&angle);

  


   edgeBC=sqrt((edgeAB*edgeAB)+(edgeAC*edgeAC)-2*(edgeAB*edgeAC*cos(angle)));

   printf("Edge BC is %lf centimeter\n",edgeBC);



   return 0;
   


   







}
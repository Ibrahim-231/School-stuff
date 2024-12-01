#include <stdio.h>
#include <math.h>
double calc_dist(double x1, double y1, double x2,double y2){
    return (sqrt(pow(x1-x2,2)+pow(y1-y2,2)));
}
int main(){
   double ax =300, ay=200, bx =10, by =10;
   double cx =20, cy=240, dx=100, dy=15, ex=150, ey =250;
   //for AB & BA 
   double ab = calc_dist(ax,ay,bx,by);
   //for AC AND CA
   double ac = calc_dist(ax,ay,cx,cy);
   //for AD AND DA
   double ad = calc_dist(ax,ay,dx,dy);
   //for AE AND EA
   double ae = calc_dist(ax,ay,ex,ey);
   //for BC AND CB
   double bc = calc_dist(bx,by,cx,cy);
   //for BD AND DB
   double bd = calc_dist(bx,by,dx,dy);
   //for BE AND EB
   double be = calc_dist(bx,by,ex,ey);
   //for CD AND DC
   double cd = calc_dist(cx,cy,dx,dy);
   //for CE AND EC
   double ce = calc_dist(cx,cy,ex,ey);
   //for DE AND ED
   double de = calc_dist(dx,dy,ex,ey);
   // for ABCDE & AEDCBA
   double dis1 = ab + bc+ cd + de + ae;
   // for Abceda & adecba
   double dis2 = ab+ bc + ce+ de+ ad;
   // for abdeca & acedca
   double dis3 = ab+bd+de+ce+ac;
   // for acbdea & aedbca
   double dis4 = ac+bc+bd+de+ae;
   //for acbeda & adebca
   double dis5 = ac+bc+be+de+ad;
   // for acdeba & abedca
   double dis6 =ac+cd+de+be+ab;
   int i;
   double cases[6]= {dis1, dis2,dis3,dis4,dis5,dis6};
   double min = cases[0];
   for(i =0; i <6; i++ ){
    if(cases[i]<min){
        min = cases[i];
    }
   }
    if(min==dis1){
        printf("The shortest distance is ABCDEA and AEDCBA at %.1f km.", dis1);
    }
    if(min== dis2){
        printf("The shortest distance is ABCEDA & ADECBA at %.1f km.", dis2);
    }
     if(min== dis3){
        printf("The shortest distance is ABDECA & acedca at %.1f km.", dis3);
    }
     if(min== dis4){
        printf("The shortest distance is acbdea & aedbca at %.1f km.", dis4);
    }
     if(min== dis5){
        printf("The shortest distance is acbeda & adebca at %.1f km.", dis5);
    }
     if(min== dis6){
        printf("The shortest distance is acdeba & abedca at %.1f km.", dis6);
    }
    return 0;
   }

       
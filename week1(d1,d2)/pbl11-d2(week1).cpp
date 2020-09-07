/*time duration: 30 min;
11. Given the coordinate of two points p1(x1,y1) and p2(x2,y2). Find which point is closest to the center (0,0).*/
#include<stdio.h>
#include<math.h>

int main(){
  double x1,x2,y1,y2;
  double points1,points2;
  scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
  points1 =sqrt((x1*x1)+(y1*y1));
  points2 =sqrt((x2*x2)+(y2*y2));
  if(points1<points2){
    printf("%.lf %.lf\n",x1,y1);
  }
  else{
     printf("%.lf %.lf\n",x2,y2);
  }
  return 0;
}


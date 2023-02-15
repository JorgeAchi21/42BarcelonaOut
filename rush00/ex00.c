#include <unistd.h>

int main(void)
{
 int h;
 int hmax;
 int v;
 int vmax;
 char carac;

 h=1;
 hmax=1;
 v=1;
 vmax=5;
 carac=' ';

while ( v <= vmax)
 {
 while ( h <= hmax )
 {
   if ( (h == 1 && v == 1) || (h ==hmax && v == 1 ) || (h == 1 && v == vmax) || (h==hmax && v==vmax ) )
   {
     write(1,"o",1);
   }
   else if ( (v == 1 || v == vmax) && ( h >1  && h < hmax))
   {
     write(1,"-",1);
   } 
   else if ( (v > 1 || v < vmax ) && ( h == 1 || h == hmax))
   {
     write(1,"|",1);
   }
   else
   {
     write(1," ",1);
   }
   h=h+1;
 }
 write (1,"\n",1);
 h=1;
 v=v+1;
}
	
 return (0);
}

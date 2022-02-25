#include<stdio.h>
void main(){
    int i,j,k,y,a,b,c,d,e,f,g,h;
    int sudko[3][3];
   for ( i = 0; i < 10; i++)
   {
       sudko[0][0]=i;
       for ( j = 0; j < 10 ; j++)
       {
           sudko[0][1]=j;
           for ( k = 0; k < 10; k++)
           {
               sudko[0][2]=k;
               for ( y = 0; y < 10; y++)
               {
                   sudko[1][0]=y;
                   for ( a = 0; a < 10; a++)
                   {
                       sudko[1][1]=a;
                       for ( b = 0; b < 10; b++)
                       {
                           sudko[1][2]=b;
                           for ( c = 0; c < 10; c++)
                           {
                               sudko[2][0]=c;
                               for ( d = 0; d < 10; d++)
                               {
                                   sudko[2][1]=d;
                                   for ( e = 0; e < 10; e++)
                                   {
                                       sudko[2][2]=e;
                                       if ((sudko[0][0]+sudko[0][1]+sudko[0][2]==9)&&(sudko[0][0]+sudko[1][0]+sudko[2][0]==9)&&(sudko[0][2]+sudko[1][1]+sudko[2][0]==9)&&(sudko[0][2]+sudko[1][2]+sudko[2][2]==9)&&(sudko[1][0]+sudko[1][1]+sudko[1][2]==9)&&(sudko[2][0]+sudko[2][1]+sudko[2][2]==9)&&(sudko[0][0]+sudko[1][1]+sudko[2][2]==9)&&(sudko[0][2]+sudko[1][1]+sudko[2][0]==9))
                                       {
                                           printf("%d  %d  %d\n%d  %d  %d\n%d  %d  %d\n",sudko[0][0],sudko[0][1],sudko[0][2],sudko[1][0],sudko[1][1],sudko[1][2],sudko[2][0],sudko[2][1],sudko[2][2]);
                                           printf("\n");
                                       
                                       }


                                    }
                                   
                               }
                               
                               
                           }
                           
                       }
                       
                   }
                   
               }
               
           }
           
       }
       
   }
   
    
}
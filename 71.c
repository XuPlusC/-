 
 /*四则运算*/
 #include <stdio.h>
	int main (void)
    {for(;;)
        {   int t;
            float x,y,r,o;
            char c;
        scanf("%d%f%f  %c",&t,&o,&y,&c);
        x=o;
        if(t==1)
        {
          k:;
          switch(c)
          {   case'+':
                  x+=y;
                  break;
              case'-':
                  x-=y;
                  break;
              case'*':
                  x*=y;
                  break;
              case '/': 
                  x/=y;
                  break;
              
           }
            printf("after switch processing, the reslut is :%f\n ",x);
//             printf("after :%f %f %c\n ",o,y,c);
        }
            
            
        else
        {
                if(c=='+')             
                    o+=y;

                else if(c=='-')
                    o-=y;
                else if(c=='*')
                    o*=y;
                else if(c=='/')
                    o/=y;
                            
              printf("after if processing, the reslut is :%f\n ",o);            
               
              goto k   ;         
        }
            
        
        
        
        
        
        
        
        
        }
     }

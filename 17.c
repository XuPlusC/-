 /*最大公约数和最小公倍数*
  *   <h4>描述</h4><p><pre>输入两个整数，求它们的最大公约数和最小公倍数。
输入：有多组输入，每行两个整数，当两个整数均为0时，程序结束运行。
输出：每行输入对应一行输出(以换行符结束)。最大公约数 最小公倍数
</pre></p><h4>样例输入</h4><p><pre>1 20
5 15
20 30
88 88
16 100
0 0</pre></p><h4>样例输出</h4><p><pre>1 20
5 15
10 60
88 88
4 400
// </pre></p><h4>备注</h4><p><pre>
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  */
#include<stdio.h>
int main(void)
{
    int x,y,z,d;
    scanf(" %d %d",&x,&y);
    while((x!=0)&&(y!=0))
    {   z=x;
        d=y;
        while(z!=d)
	{
		if (z >= d)
		{
			z = z - d;
		}
		else
		{
			d = d - z;
		}
	}
	    d=((x*y)/z);

        
        
        
        printf("%d %d\n",z,d);
        scanf(" %d %d",&x,&y);
    }
    
    
    
    
    
}
 
 

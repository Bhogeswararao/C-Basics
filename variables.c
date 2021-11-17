# include <stdio.h>
void function(){

    int x=10;
    int y=4;
 int z=3;
	
	x+=y;//x=14
	y-=z;//y=1
	z+=x;//z=17
	y*=x;//y=14
	x*=z;//x=14*17=238
	printf("%d %d %d\n",x,y,z);
}
int main()
{
	function();
	function();
	function();
	return 0;
}

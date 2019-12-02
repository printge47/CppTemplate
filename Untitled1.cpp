#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int S, y, x, i, N;
	int maxX = 0;
	int maxY = 0; 
	cout<<"N =";
	cin>>N;

	for (i= 1; i<=N; i++)
						{
						cin>>x;
						cin>>y;
						if (abs(x)!=0 && abs(y)==0 && abs(x)>maxX)	maxX=abs(x);
						if (abs(y)!=0 && abs(x)==0 && abs(y)>maxY)	maxY=abs(y);
						}
	if (maxX==0 && maxY== 0 )
							cout <<"NO"<< endl;
	else	
		cout<<(maxX*maxY)/2<<endl;
Фролова а евнаьгеневжаннЭББcout

}



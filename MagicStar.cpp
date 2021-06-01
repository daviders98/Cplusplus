#include <iostream>
using namespace std;

int main(){

for(int a=1; a<=12; a++)
{
	for(int b=1;b<=12;b++)
	{
		for(int c=1;c<=12;c++)
		{
			for(int d=1;d<=12;d++)
			{
				for(int e=1;e<=12;e++)
				{
					for(int f=1;f<=12;f++)
					{
						for(int g=1;g<=12;g++)
						{
							for(int h=1;h<=12;h++)
							{
								for(int i=1;i<=12;i++)
								{
									for(int j=1;j<=12;j++)
									{
										for(int k=1;k<=12;k++)
										{
											for(int l=1;l<=12;l++)
											{
												if(a!=b && a!=c && a!=d && a!=e && a!=f && a!=g && a!=h && a!=i && a!=j && a!=k && a!=l && b!=c && b!=d && b!=e && b!=f && b!=g && b!=h && b!=i && b!=j && b!=k && b!=l && c!=d && c!=e && c!=f && c!=g && c!=h && c!=i && c!=j && c!=k && c!=l && d!=e && d!=f && d!=g && d!=h && d!=i && d!=j && d!=k && d!=l && e!=f && e!=g && e!=h && e!=i && e!=j && e!=k && e!=l && f!=g && f!=h && f!=i && f!=j && f!=k && f!=l && g!=h && g!=i && g!=j && g!=k && g!=l && h!=i && h!=j && h!=k && h!=l && i!=j && i!=k && i!=l && j!=k && j!=l && k!=l && b+c+d+e == h+i+j+k && b+c+d+e == a+c+f+h && h+i+j+k == a+d+g+k && a+d+g+k == e+g+j+l && b+c+d+e == a+b+e+h+k+l && a+c+d == i+j+l && b+c+f == g+j+k &&  d+e+g == f+h+i)
									cout<<a<<","<<b<<","<<c<<","<<d<<","<<e<<","<<f<<","<<g<<","<<h<<","<<i<<","<<j<<","<<k<<","<<l<<endl;
									
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
}
return 0;
}

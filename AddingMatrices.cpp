#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int MATRIZ[3][3],Matriz[3][3],h,i,j,SUMA;
	for(h=0;h<=1;h++)
	{
		cout<<setw(20)<<"Matriz "<<h+1<<endl;
		for(i=0;i<=2;i++)
	    {
		    for(j=0;j<=2;j++)
		    {
			cout<<"Introduce el valor en la linea "<<i+1<<" posicion "<<j+1<<endl;
			if(h==0)
			cin>>MATRIZ[i][j];
			if(h==1)
			cin>>Matriz[i][j];
		    }
	    }
    }
	system("cls");
	for(h=0;h<=2;h++)
	{
		if(h==2)
		    cout<<setw(24)<<"Matriz Resultante"<<endl;
		else
		    cout<<setw(18)<<"Matriz "<<h+1<<endl;
	        cout<<"------------------------------"<<endl;
	         for(i=0;i<=2;i++)
	         {
		      SUMA=0;
		      for(j=0;j<=2;j++)
		         {
			       SUMA=MATRIZ[i][j]+Matriz[i][j];
			      if(h==2 and j==0)
			          cout<<setw(8)<<SUMA;
			      else
			      if(h==2 and j!=0)
			          cout<<setw(11)<<SUMA;
			      else
			      if(j==0 and h==0)
			          cout<<setw(8)<<MATRIZ[i][j];
			      if(j==0 and h==1)
			          cout<<setw(8)<<Matriz[i][j];
			      else
			      if(j!=0 and h==0)
			          cout<<setw(11)<<MATRIZ[i][j];	
			          else
			          if(j!=0 and h==1)
			          cout<<setw(11)<<Matriz[i][j];
		         }
		         cout<<endl;
	         }
	}
	
	system("pause");
	return 0;
}


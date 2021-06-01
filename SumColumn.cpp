#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int SumaREN,Col,Reng,h,i,j;
	
	cin>>Col;
	cin>>Reng;
	    cout<<"SUMATORIA POR COLUMNAS"<<endl<<endl;
	    cout<<"Matriz"<<endl;
        cout<<"---------";
		for(i=0;i<=Col-1;i++)
		{
			if(i>=9)
			cout<<"--------";
			else
			cout<<"-------";
		}
		cout<<"-------"<<endl;
		
		for(h=0;h<=Col-1;h++)
		{
			if(h==0)
			cout<<setw(15)<<"Col "<<h+1;
			else
			cout<<setw(6)<<"Col "<<h+1;
		}
		cout<<"  Total"<<endl;

		for(i=0;i<=Reng-1;i++)
		{
			SumaCOL=0;
			cout<<"Renglon "<<i+1;
			for(j=0;j<=Col-1;j++)
			{
				SumaCOL+=Matriz[j][i];
					if(i>=9 and j==0)
					    cout<<setw(6)<<Matriz[i][j];
					    else
					        if(j==0)
				                cout<<setw(7)<<Matriz[i][j];
					            else
					                if(j>=9)
					                    cout<<setw(8)<<Matriz[i][j];
					                    else
					                        cout<<setw(7)<<Matriz[i][j];
			}
			cout<<setw(7)<<SumaCOL<<endl;
		}
		cout<<"---------";
		for(i=0;i<=Col-1;i++)
		{
			if(i>=9)
			cout<<"--------";
			else
			cout<<"-------";
		}
		cout<<"-------"<<endl;
}

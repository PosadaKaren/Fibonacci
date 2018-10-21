#include <iostream>
#include <time.h>
using namespace std;




void powmatrix(double matrix[2][2],double original[2][2],int n)
{ 	double temporal[2][2]={{0,0},{0,0}};
    
	for (int p=1; p<=n;p++)
	{	
		int y=0;
		for (int z=0; z<2 ; z++)
		{
	
			for (int x=0; x<2 ; x++)
			{	
				for (int a=0; a<2 ; a++)
				temporal[z][y]=temporal[z][y]+(matrix[z][a]*original[a][y]);
				y++;
			}
		y=0;
	   }
		
		for (int c=0; c<2 ; c++)
		{ for (int d=0; d<2 ; d++)
			{
				matrix[c][d]=temporal[c][d];
				temporal[c][d]=0;
				
			}
		}

	cout <<endl <<matrix[0][1];	
}
}

void FiboLog(double v[2][2],double i[2][2],int n) {
	if(n==0)
	cout << "1";

	else if (n % 2==0){
	powmatrix(v,i,n/2);
	FiboLog(v,i,n/2);
    }
	else{
	powmatrix(v,i,((n-1)/1));
	powmatrix(v,i,1);
	
    }
}



int main ()
{	double v[2][2]={{1,1},{1,0}};
    double i[2][2]={{1,1},{1,0}};
    int n;
   	cout<<"Ingrese el número de la sucesión de fibonacci que desea calcular"<<endl;
    cin>>n;
    clock_t start;
	int milisegundos;
	start=clock();
	FiboLog(v,i,n);
	milisegundos=clock()-start;
	cout<<"tiempo: "<< milisegundos<< endl;
	return 0;
}

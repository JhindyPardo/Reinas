#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int matriz[8][8],a,b,c,e,i,j,k,l,y=0,pos1=0,pos2=0, p1p2=0, pos3=0, pos4=0, p3p4=0,pos5=0,pos6=0,p5p6=0;
	float x=0,f;
	for(i=0; i<8;i++)
	{
		for(j=0; j<8;j++)
		{
			matriz[i][j]=0;
		}
	}
	cout<<endl;
	for(i=0; i<8;i++)
	{
		for(j=0; j<8;j++)
		{
			cout<<matriz[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	cout<<" Que cantidad de reinas quiere intentar. "<<endl;
	cin>>a;
	int vector[a];
	float vector1[a];
	if(a>=1 && a<=8)
	{
		for(i=0; i<a; i++)
		{
			cout<<" Digite en que posicion quiere la reina. "<<endl;
			cout<<" fila= ";
			cin>>b;
			cout<<" columna= ";
			cin>>c;
			cout<<endl;
			if((b>0) && (c>0) && (b<9) && (c<9))
			{
				matriz[b-1][c-1]=1;
		    	e=b+c;
		    	f=b-c;
	        	vector[i]=e;
	        	vector1[i]=f;
			}
			else
			{
				cout<<" El valor de la fila y columna debe ser un numero mayor a 0 y menor o igual a 8. "<<endl;
				cout<<" Intente de nuevo "<<endl;
				exit(0);
			}
			
		}
		
		for(i=0; i<8;i++)
	   {
	    	for(j=0; j<8;j++)
	    	{
	    		cout<<matriz[i][j];
	    		cout<<" ";
	    	}
	    	cout<<endl;
    	}		
		
    	//filas.
	    for(i=0; i<8;i++)
	    {	
	    	for(j=0; j<8;j++)
			{
				pos1=matriz[i][j];
	        	for( k=j+1;k<8;k++)
			   {
					pos2=matriz[i][k];
	            	if(	(pos1==1) && (pos2==1))
	    		    {
	    		    	p1p2=1;
				    }
	    		}
	    	}
	    }
			

		// columnas.
		for(j=0;j<8;j++)
		{
			for(i=0; i<8; i++)
			{
				pos3=matriz[i][j];
				for(k=i+1; k<8; k++)
				{
					pos4=matriz[k][j];
					if(pos3==1 && pos4==1)
					{
						p3p4=1;
					}
				}
			}
		}
		
		//desendente.
	    for(i=0;i<a-1;i++)
    	{
    		if(vector1[i]==vector1[i+1])
	    	{
	    		x=x+1;
	    	}
	    }
    	
		
		//asendente
		for(i=0;i<a-1;i++)
    	{
    		if(vector[i]==vector[i+1])
	    	{
	    		y=y+1;
	    	}
	    }
    	cout<<endl;
    	
    	if( (p1p2==1) || (p3p4==1) || (x>=1)||(y>=1))
	    {
			cout<<" LAS REINAS SE AMENAZAN. "<<endl;
		}
		else
		{
			cout<<" LAS REINAS NO SE AMENAZAN. "<<endl;
		}
	}
	else
	{
		cout<<" LA CANTIDAD DE REINAS NO ES POSIBLE. "<<endl;
	}
	cout<<endl;
	system("pause");
    return 0;
}

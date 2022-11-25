#include <iostream>
#include <math.h>

using namespace std;

void binarna(int d)
{
	int i=0;
	int tab[31];

	while(d)
	{
		tab[i++]=d%2;
		d/=2;
	}

    cout<<"Postać binarna: ";
    
	for(int j=i-1;j>=0;j--)
		cout<<tab[j];
		
	cout<<endl;
}

int dziesietna(string b)
{
	int a = 0, p = 1;
    for ( int i = b.length() - 1; i >= 0; --i, p <<= 1 )
    a = a + (b[i] - '0') * p;
    
    cout<<"Postać dziesietna: "<< a;
    
    cout<<endl;
    return 0;
}

void d_to_szesnastkowy(int d)
{
    int r;
    string wynik;
    
    while (d>0)
        {
        r=d%16;
        d/=16; 
 
        if (r==10)
        {
            wynik+='A';
        }
        else  
        if (r==11)
        {
            wynik+='B';
        }
        else      
        if (r==12)
        {
            wynik+='C';
        }
        else    
        if (r==13)
        {
            wynik+='D';
        }
        else    
        if (r==14)
        {
            wynik+='E';
        }
        else    
        if (r==15)
        {
            wynik+='F';
        }
        else
        wynik += to_string(r); 
    }
    
    cout<<"Postać szesnastkowa: ";
    
    for(int i=wynik.length()-1;i>=0;i--)
    {
        cout << wynik[i];
    }	
    
    cout<<endl;
}

int b_to_szesnastkowy(string b)
{
    int a = 0, p = 1;
    for ( int i = b.length() - 1; i >= 0; --i, p <<= 1 )
    {
        a = a + (b[i] - '0') * p;
    }
    
    int r;
    string wynik;
    
    while (a>0)
        {
        r=a%16;
        a/=16; 
 
        if (r==10)
        {
            wynik+='A';
        }
        else  
        if (r==11)
        {
            wynik+='B';
        }
        else      
        if (r==12)
        {
            wynik+='C';
        }
        else    
        if (r==13)
        {
            wynik+='D';
        }
        else    
        if (r==14)
        {
            wynik+='E';
        }
        else    
        if (r==15)
        {
            wynik+='F';
        }
        else
        wynik += to_string(r); 
        }
    
    cout<<"Postać szesnastkowa: ";
    
    for(int i=wynik.length()-1;i>=0;i--)
    {
        cout << wynik[i];
    }	
    
    cout<<endl;
    return 0;
}

void d_to_osemkowy(int d)
{
    int i=0;
	int tab[31];

	while(d)
	{
		tab[i++]=d%8;
		d/=8;
	}

    cout<<"Postać osemkowa: ";
    
	for(int j=i-1;j>=0;j--)
		cout<<tab[j];
		
	cout<<endl;
}

void b_to_osemkowy(string b)
{
    int a = 0, p = 1;
    for ( int i = b.length() - 1; i >= 0; --i, p <<= 1 )
    {
        a = a + (b[i] - '0') * p;
    }
    
    int i=0;
	int tab[31];

	while(a)
	{
		tab[i++]=a%8;
		a/=8;
	}

    cout<<"Postać osemkowa: ";
    
	for(int j=i-1;j>=0;j--)
		cout<<tab[j];
		
	cout<<endl;
}

int main()
{
	int d;
	string b;
	
	cout<<"Podaj liczbę dziesietna: ";
	cin>>d;
    binarna(d);
    d_to_osemkowy(d);
    d_to_szesnastkowy(d);
    
    cout<<"Podaj liczbę binarną: ";
	cin>>b;
	dziesietna(b);
	b_to_osemkowy(b);
	b_to_szesnastkowy(b);

	return 0;
}





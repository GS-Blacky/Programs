#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

void
pole (char tab[])
{
  int o = 0;

  for (int i = o; i < 31; i++)
    {
      tab[i] = 'X';
    }
    o = 30;

  for (int i = 0; i < 12; i++)
    {
        o = o + 1;
        tab[o] = 'X';
        
        for (int i = o; i < o + 29; i++)
        {
             tab[i] = ' ';
        }
        
        o = o + 28;
        o = o + 1;
        tab[o] = 'X';
    }

  for (int i = o; i < o + 31; i++)
    {
      tab[i] = 'X';
    }
}


int
main ()
{
  char l, head = '#', body = '*', k,ta;
  int o = 0, p = 0, r = 0, t = 31, u, h = 70, dl = 2;
  char tab[434];
  int bod[434]={69,68};

    pole(tab);  //entering data into the table \/

  do            //food
    {
      srand (time (NULL));
      u = rand () % 403;
      k = tab[u];

    }
  while (int (k) == 88);

    // field display \/

  while (true)
    {
	  
    system("cls");
	  
    int og=0;
    
      pole (tab);  // general field cleaning

    if (int (l) == 119)	// you press w
	{
	        for (int i = dl; i > 0; i--)
	        {
	            bod[i-1]=bod[i-2];
	        }
	        bod[0]=h;
	        
	   h = h - 30;
	   ta=tab[h];
	   
	   tab[h] = head;
	}

    if (int (l) == 115)	// you press s
	{
	        for (int i = dl; i > 0; i--)
	        {
	            bod[i-1]=bod[i-2];
	        }
	        bod[0]=h;
	        
	  h = h + 30;
	  ta=tab[h];
	
	    tab[h] = head;
	  
	}

    if (int (l) == 97)	// you press a
	{
	        for (int i = dl; i > 0; i--)
	        {
	            bod[i-1]=bod[i-2];
	        }
	        bod[0]=h;
	        
	   h = h - 1;
	   ta=tab[h];
	   
	    tab[h] = head;
	 
	}

    if (int (l) == 100)	// you press d
	{       
	        for (int i = dl; i > 0; i--)
	        {
	            bod[i-1]=bod[i-2];
	        }
	        bod[0]=h;
	        
	  h = h + 1;
	  ta=tab[h];
	  
	  tab[h] = head;
	}


    for (int i = 0; i < dl; i++)
	        {
	            tab[bod[i]] = body;
	        }
	        

      for (int i = 0; i < 14; i++)	// displays the board, i.e. the playing field
	{
	  for (int i = p; i < p + 31; i++)
	    {
	      if (i != u)
		  {
		  cout << tab[i];
		  }
	      else
		  {
		  tab[i] = '$';
		  cout << tab[i];
		  }
	    }

	  cout << endl;
	  p = p + 30;
	}
      p = 0;
        
      if (int (h) == u)		// adding length for snake
	{
	  do
	    {
	      srand (time (NULL));
	      u = rand () % 403;
	      k = tab[u];
	    }
	  while (int (k) == 88);

	  dl = dl + 1;
	}
    
      if (int (ta) == 88)		// adding death
	{
	    cout<<"koniec gry";
	    return 0;
	} 
	
	for(int i = 1; i < dl+1; i++)
    if (h == bod[i])	// adding death by hit yourself
	    {
	      cout << "koniec gry";
	      
	      return 0;
	    }


    cout<<"         punkty: "<<dl-2<<endl;
      cin >> l;			// introducing movement

    }
  return 0;
}

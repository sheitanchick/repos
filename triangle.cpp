#include <iostream>
#include <cstdlib>


using namespace std;


      int main ()
                    {  int sum = 0;
                        int mass[5][5] = { {1,0,0,0,0} , { 1,2,0,0,0 }, { 1,5,3,0,0 }, {1,9,7,4,0}, { 1,10,6,8,5 }};
                         for ( int i = 0; i < 5; i++ ) {
                          for ( int j = 0; j < 5; j++ ) {
                                                          if  ( mass [i][0] < mass [i][j+1] ) mass [i][0] = mass [i][j+1];  }  
                                                           sum += mass [i][0];
                                                        }
                            cout << sum << endl;                
                     system ("pause");
                     return 0;
                    }                      

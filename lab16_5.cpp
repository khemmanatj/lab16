#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 

void shuffle(int *a,int *b,int *c,int *d){
	int x[]={*a,*b,*c,*d};
	int z[4];

     for(int i=0;i<4;i++){
		z[i]=rand()%4;
		for(int j=0;j<i;j++){
		   if(z[i]==z[j]){
			i--;
			  break ;
		   }
		}
	 }
    *a=x[z[0]];
	* b=x[z[1]];
	 * c=x[z[2]];
	  * d=x[z[3]];

}

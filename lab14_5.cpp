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
void shuffle(int *a , int *b , int *c ,int *d){
	int money[] = {*a , *b, *c ,*d} , x , y ;
	
	for(int i = 0 ; i < 3 ; i++){
	x = rand() % 4;
	y = rand() % 4;
	int temp = money[x];
	money[x] = money[y];
	money[y] = temp;
	}

	*a = money[0];
	*b = money[1];
	*c = money[2];
	*d = money[3];

}
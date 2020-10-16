#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int n1, n2, n3;
int min;

void getRandnum(int &n1, int &n2, int &n3)
{
	srand(time(NULL));
	 n1 = rand() % 1000 + 1;
   n2 = rand() % 1000 + 1;
   n3 = rand() % 1000 + 1;
 
}

int findMin(int n1, int n2, int n3){
 int Omin;
  Omin = n1;
  cout << Omin;
  if (n2 < Omin) {
    Omin = n2;
  }
  if (n3 < Omin) {
    Omin = n3;
  }
  return Omin;
}

void printResult(int n1, int n2, int n3, int min)
{

cout << "The random numbers are: " << n1 << n2 << n3;
cout << "The minimum is: " << min;
}

int main(){

getRandnum(n1, n2, n3);
int min = findMin(n1, n2, n3);
printResult(n1, n2, n3, min);
} 
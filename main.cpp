#include <iostream>
using namespace std;

int mult (int x, int y)
{


    return (x * y);
}
int e(int n,int k = 2 )
{
    if (k == 2)
    return (n * n );

    else
        return (mult(n,k-1)*n);


}
int main()
{

    cout<<e(5,3)<< endl;

    return 0;

//aaaaasd

}

//Ders:             1
//Alıştırma:        2
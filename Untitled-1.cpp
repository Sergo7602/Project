#include <iostream>

using namespace std;

int main()
{
int ar[3][4]={
{1,6,7,11},
{5,7,14,9},
{4,6,10,2}
};
float s;
int min=ar[0][0];
int max=ar[0][0];
for (int i=1;i<3;i++){
for (int j=1; j<4; j++){
if (ar[i][j]>max) max=ar[i][j];
if (ar[i][j]<min) min=ar[i][j];
}
}
s=(float)(min+max)/2.;
cout << s << " ";

}

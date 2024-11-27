#include <iostream>
using namespace std;
int fuel(int distance);
main ()
{
float distance, fuel;
cout << "Enter distance travelled:";
cout >> distance;
fuel (distance);
}
void fuel (int distance)
{
cout << "Fuel required:" << distance * 10 << endl;

}

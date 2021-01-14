#include <Eigen/Dense>
#include <iostream>

using namespace std;
using namespace Eigen;

int main()
{
	Matrix3d m = Matrix3d::Zero(3,3);
	cout<<m<<endl;

	return 0;
}

/*#include<iostream>
#include<math.h>
using namespace std;
class complex {
private:
float real;
float img;
public:
complex(float r, float im) {
real = r;
img = im;
}
complex(float r) {
real = r;
img = 0.0;
}
~complex() {};
complex operator*(complex c) {
complex temp(0);
temp = real * c.real-img*c.img;
temp = img * c.img + img * c.real;
return temp;
}
};
int main() {
complex a(1, 1);
complex b(2, 2);
complex c=a* b;
return 0;
}
*/
/*
#include<iostream>
using namespace std;
template<class T>
T GetMax(T a, T b) {
T result;
result = (a > b) ? a : b;
return result;
}
int main() {
int i = 5, j = 6, k;
long l = 10, m = 5, n;
k = GetMax<int>(i, j);
n = GetMax<long>(l, m);
cout << k << endl;
cout << n << endl;
return 0;
}

*/
/*
#include<iostream>
using namespace std;
template<class T>
class mypair {
T a, b;
public:
mypair(T first, T second) {
a = first;
b = second;
}
T getmax();
};

template<class T>
T mypair<T>::getmax() {
T retval;
retval = a > b ? a : b;
return retval;
}
int main() {
mypair<int> myobject(100, 75);
cout << myobject.getmax();
return 0;
}
*/
/*
#include<iostream>
using namespace std;
template<class T>
class mypair {
T a, b;
public:
mypair(T first, T second) {
a = first;
b = second;
}
T getmin();
T getmax();
};

template<class T>
T mypair<T>::getmin() {
T retval;
retval = a < b ? a : b;
return retval;
}
template<class T>
T mypair<T>::getmax() {
T retval;
retval = a > b ? a : b;
return retval;
}
int main() {
mypair<int> myobject(100, 75);
cout << myobject.getmin();
cout << myobject.getmax();
return 0;
}
*/
/*
#include<iostream>
using namespace std;
template<class T,int N>
class mysequence {
T memblock[N];
public:
void setmember(int x, T value);
T getmember(int x);
T getmin();
T getmax();
};
template<class T,int N>
void mysequence<T, N>::setmember(int x, T value) {
memblock[x] = value;
}
template<class T,int N>
T mysequence<T, N>::getmember(int x) {
return memblock[x];
}
template<class T,int N>
T mysequence<T, N>::getmax() {
T max = memblock[0];
for (int i = 0; i < N; i++) {
if (max < memblock[i]) {
max = memblock[i];
}
}
}
template<class T,int N>
T mysequence<T, N>::getmin() {
T min=memblock[0];
for (int i = 0; i < N; i++) {
if (min > memblock[i]) {
min = memblock[i];
}
}

}
int main() {
mysequence<int, 5>myints;
mysequence < double, 5>myfloats;
myints.setmember(3, 3.1416);
myints.setmember(3, 4);
myints.setmember(4, 5);
myints.setmember(5, 6);
cout << myints.getmember(0) << '\n';
cout << myfloats.getmember(3) << '\n';
cout << myints.getmax() << endl;
cout << myints.getmin() << endl;


return 0;
}
*/
#include<iostream>
#include<fstream>
using namespace std;
int main(void) {
	ofstream outfile;
	outfile.open("fout.txt");

	ifstream infile("fin.txt");
	char ch;
	int count = 0;
	while (infile.get(ch)) {
		outfile << ch;
		count++;
	}
	outfile << "char count=" << count << endl;
	infile.close();
	outfile.close();
	return 0;
}
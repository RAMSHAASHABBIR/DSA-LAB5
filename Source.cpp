#include <iostream>
#include <windows.h>
#include <stack>
#include <string>
using namespace std;
//int naturalnum(int n);
//int oddnum(int n);
//int power2num(int n);
//int power3num(int n);
//int multiply3num(int n);
//int multiply2num(int n);
//string D2B(int n);
//int binarySearch(int arr[], int elementToSearch, int higher, int lower);
//int powerModolus(int x, int y, int m);
//int powerModolus1(int x, int y, int m);
//int multiplyByAdd(int a, int b);
//int multiplyByAdd1(int a, int b);
//int multiplyByAdd2(int a, int b);
//int divideModolus(int a, int b, int& quotient, int& remainder);
//void divideModolus3(int a, int b, int& quotient, int& remainder);
//int febinacciLoop(int n);
//int febinacciRecursion(int n);
//int febinacciBottomUp(int n);
//int febinacciTopDown(int n, int arrT[]);
//int TriseriesLoop(int n);
//int TriseriesRecursion(int n);
//int TriSeriesTopDown(int n, int arrT[]);
//int TriseriesBottomUp(int n);
//void subArray(int arr[], int start, int end,int size);
void stackSorting(stack <int> &Stack);
void inserting(stack <int> &Stack, int temp);

int main()
{   //question 1

	//int sum = naturalnum(4);
	//int sum = oddnum(5);
	//int sum = power2num(29);
	//int sum = power3num(55);
	//int sum = multiply3num(3); 
	//int sum = multiply2num(8);
	//string sum =  D2B(20);
	//cout << sum;
	
	//question 3

	/*int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int result = binarySearch(arr, 4, 8, 0);
	cout << result;*/

	//question 4
	
	//int result = powerModolus(2,2,4);
	/*int result = powerModolus1(2,2,3);
	cout << result;*/

	//question 5 
	
	//int result = multiplyByAdd(2, 10);
	//int result = multiplyByAdd1(2, 10);
	//int result = multiplyByAdd2(2, 3);
	//cout << result;

	//question 6
	
	//1
	/*int quotient = 0;
	int remainder = 0;
	divideModolus(400, 12, quotient, remainder);
	divideModolus3(42, 12, quotient, remainder);
	cout << quotient << endl;
	cout << remainder;*/

	//question 7 
	//1
	/*int result = febinacciLoop(3);
	cout << result;
	int result = febinacciRecursion(3);
	cout << result;*/
	//3
   // int result = febinacciBottomUp(3);
	//cout << result;
	//2
	/*const int N = 50;
	int arrT[N];
	for (int i=0;i<N;i++)
	{
		arrT[i] = -1;
	}
	int result = febinacciTopDown(8, arrT);
	cout << result;*/

	//question 8
	
	//int result = TriseriesLoop(6);
	//int result = TriseriesRecursion(4);
	//cout << result;
	//4
	/*const int N = 50;
	int arrT[N];
	for (int i = 0;i < N;i++)
	{
		arrT[i] = -1;
	}
	int result = TriSeriesTopDown(6, arrT);
	cout << result;*/
	//5
	//int result = TriseriesBottomUp(6);
	//cout << result;
	
	//challenge 2
	
	int arr[] = {1,2,3,4};
	//subArray(arr, 0, 0, 4);
	//challenge 2
	stack <int> Stack;
	Stack.push(9);
	Stack.push(-1);
	Stack.push(120);
	Stack.push(2);
	stackSorting(Stack);
}
//question 1
//1
	int naturalnum(int n)
	{
		if (n == 0)
		{
			return 0;
		}
		return n + naturalnum(n - 1);
	}
	//2
	int oddnum(int n)
	{
		if (n == 1)
		{
			return 1;
		}
		return n + oddnum(n - 2);
	}
	//3
	int power2num(int n)
	{
		if (n == 0)
		{
			return 1;
		}
		return pow(2,n) + power2num(n-1);
	}
	//4
	int power3num(int n)
	{
		if (n == 0)
		{
			return 1;
		}
		return pow(3, n) + power3num(n - 1);
	}
	//5
	int multiply3num(int n)
	{
		if (n == 1)
		{
			return 1;
		}
		return n + multiply3num(n / 3);
	}
	//6
	int multiply2num(int n)
	{
		if (n == 1)
		{
			return 1;
		}
		return n + multiply2num(n / 2);
	}
	//question 2 
	//1
	string D2B(int n)
	{
		if (n==0)
			return "";
		return (D2B(n / 2) + ((n % 2 == 0) ? "0" : "1" ));
	}
	//2
	string integerToString(int n,string s)
    {
    if (n  / 10 == 0)
    {
        return to_string(n % 10);
    }
    return (s + integerToString(n / 10, s) + to_string(n%10));
    }
	//3
	int GreteastCommonDivisor(int a, int b)
    {
    if (b == 0)
    {
        return a;
    }
    return GreteastCommonDivisor(b,a%b);
    }


	//question 3
	// 1
	int Searchingfirstelement(int n,int size,int arr[])
    {
    if (size == 0)
		 {
			 return 0;
	}
    else if (n == arr[0])
    {
        return arr[0];
    }
   
    return Searchingfirstelement(n, size-1,arr+1);
    }
	//2
	int Searchinglastelement(int n, int size, int arr[])
		{
		if (size == 0)
		{
			return 0;
			}
		else if (n == arr[size])
		    {
		        return arr[size];
		    }
		    
		    return Searchinglastelement(n, size-1,arr);
		}
	//3
	int binarySearch(int arr[],int elementToSearch,int higher ,int lower)
	{
		if (higher >= lower)
		{
			int mid = lower + (higher - lower) / 2;
			if (arr[mid] == elementToSearch)
			{
				return mid;
			}
			else if (arr[mid] > elementToSearch)
			{
				return binarySearch(arr, elementToSearch, mid - 1, lower);
			}
			else
			{
				return binarySearch(arr, elementToSearch, higher, mid + 1);
			}
			return -1;
		}
	}

	//question 4 
	
	//1
	int powerModolus(int x,int y,int m)
	{
		if (y == 0)
		{
			return 1;
		}
		return (x * powerModolus(x, y - 1, m)) % m;
	}
	//2
	int powerModolus1(int x, int y, int m)
	{
		if (y==1)
		{
			return x;
		}
		return (powerModolus1(x, y / 2, m)*powerModolus1(x, y / 2, m)) % m;
	}

	//question 5 

	//1
	int multiplyByAdd(int a, int b)
	{
		if (b==0)
		{
			return 0;
		}
		return a + multiplyByAdd(a, b - 1);
	}

	//2
	int multiplyByAdd1(int a,int b)
	{
		if (b == 1)
		{
			return a;
		}
		if (b%2==0)
		{
			return multiplyByAdd1(a, b / 2) + multiplyByAdd1(a, b / 2);
		}
		else
		{
			return a+ multiplyByAdd1(a, b / 2) + multiplyByAdd1(a, b / 2);
		}
		
	}
	//3
	int multiplyByAdd2(int a, int b)
	{
		const int N = 50;
		int arrM[50];
		if (b == 0)
		{
			return 0;
		}
		arrM[0] = 0;
		for (int i=1;i<=b;i++)
		{
			arrM[i] = a + arrM[i - 1];
		}
		return arrM[b];
	}
	//question 6

	//1
	int divideModolus(int a,int b,int& quotient,int& remainder)
	{
		if (a<b)
		{
			remainder = a;
			return 0;
		}
		else
		{
			quotient = divideModolus(a-b,b,quotient,remainder)+1;
			return quotient;
		}
	}
	//3
	void divideModolus3(int a, int b, int& quotient, int& remainder)
	{
		if (b==0)
		{
			return;
		}
		if (a < b)
		{
			remainder = a;
			quotient = 0;
			return;
		}
		const int N = 200;
		int arrF[N];
		arrF[0] = 0;
		for (int i=1;i<=a;i++)
		{
			arrF[i] = arrF[i - b] + 1;
		}
		quotient = arrF[a-b];
		remainder = a % b;
	}


	//question 7 

	//1
	int febinacciLoop(int n)
	{
		int sum = 0;
		int a = 0;
		int b = 1;
		if (n==0)
		{
			return 0;
		}
		else if (n==1)
		{
			return 1;
		}
		for (int i=2;i<=n;i++)
		{
			sum = a + b;
			a = b;
			b = sum;
		}
		return sum;
	}
	int febinacciRecursion(int n)
	{
		if (n == 0)
		{
			return 0;
		}
		else if (n == 1)
		{
			return 1;
		}
		return febinacciRecursion(n - 1) + febinacciRecursion(n - 2) ;
	}

	//2 top down or memoization technique
	int febinacciTopDown(int n, int arrT[])
	{
		
		if (n == 0)
		{
			return 0;
		}
		else if (n == 1)
		{
			return 1;
		}
		else if (arrT[n] != -1)
		{
			return arrT[n];
		}
		return arrT[n] = febinacciTopDown(n - 1,arrT) + febinacciTopDown(n - 2,arrT);
	}

	//3 bottom up technique
	int febinacciBottomUp(int n)
	{
		const int N = 50;
		int arrF[N];
		if (n <= 1)
		{
			return n;
		}
		arrF[0] = 0;
		arrF[1] = 1;
		for (int i = 2;i <= n;i++)
		{
			arrF[i] = arrF[i - 1] + arrF[i - 2 ];
		}
		return arrF[n];

	}

	//question 8
	//2
	int TriseriesLoop(int n)
	{
		int sum = 0;
		int a = 1;
		int b = 2;
		int c = 3;
		if (n == 0)
			return 1;
		else if (n == 1)
			return 2;
		else if (n == 2)
			return 3;
		for (int i = 3;i <= n;i++)
		{
			sum = a + b + c ;
			a = b;
			b = c;
			c = sum;
		}
		return sum;
	}
	int TriseriesRecursion(int n)
	{
		if (n == 0)
		{
			return 1;
		}
		else if (n == 1)
		{
			return 2;
		}
		else if (n == 2)
		{
			return 3;
		}
		return TriseriesRecursion(n-1) + TriseriesRecursion(n - 2) + TriseriesRecursion(n - 3);
	}
	//4
	int TriSeriesTopDown(int n, int arrT[])
	{

		if (n == 0)
		{
			return 1;
		}
		else if (n == 1)
		{
			return 2;
		}
		else if (n == 2)
		{
			return 3;
		}
		else if (arrT[n] != -1)
		{
			return arrT[n];
		}
		return arrT[n] = TriSeriesTopDown(n - 1,arrT) + TriSeriesTopDown(n - 2, arrT) + TriSeriesTopDown(n - 3, arrT);
	}
	//5
	int TriseriesBottomUp(int n)
	{
		const int N = 50;
		int arrF[N];
		if (n <= 1)
		{
			return n;
		}
		arrF[0] = 1;
		arrF[1] = 2;
		arrF[2] = 3;
		for (int i = 3;i <= n;i++)
		{
			arrF[i] = arrF[i - 1] + arrF[i - 2] + arrF[i - 3];
		}
		return arrF[n];

	}
	//challenge 1
	void subArray(int arr[],int start,int end,int size)
	{
		if (end == size)
		{
			cout << "[]";
		}
		else if (start > end)
		{
			subArray(arr, 0, end + 1,4);
		}
		else
		{
			cout << "[";
			for (int i=start;i<end;i++)
			{
				cout << arr[i] << ",";
			}
			cout << arr[end] << "]"<< endl;
			subArray(arr, start + 1, end,4);
		}
		return;
	}
	//challenge 2
	void stackSorting(stack <int> &Stack)
	{
		if (Stack.empty())
		{
			return;
		}
		int temp = Stack.top();
		Stack.pop();
		stackSorting(Stack);
		inserting(Stack, temp);
	}
	void inserting(stack <int> &Stack, int temp)
	{
		if (Stack.empty() || Stack.top() < temp)
		{
			Stack.push(temp);
			return;
		}
		int element = Stack.top();
		Stack.pop();
		inserting(Stack, temp);	
		Stack.push(element);
	}






#include <iostream>

using namespace std;

void normal_test(); // some normal rules
void integer_boolean_test(); // convertions between integer and boolean
void arithmetic_logical_operations(); // arithmetic logical operations on booleans

int main()
{
	normal_test();
	integer_boolean_test();
	arithmetic_logical_operations(); 
	return 0;
}

void normal_test()
{
	cout << "********** normal_test **********" << endl;
	
	//only about booleans 
	int a = 10;
	int b = 20;
	bool b1 {a==b};
	//bool b2 {true * 23};

	if(b1)
	{
		cout << "a==b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}
}

void integer_boolean_test()
{
	cout << "***** integer_boolean_test ******" << endl;
	bool bool1 = true;
	bool bool2 = false;

	int bool1_int = bool1;
	int bool2_int = bool2;

	cout << "bool1_int(true)=" << bool1_int << endl;
	cout << "bool2_int(false)=" << bool2_int << endl;

	int int1 = 0;
	int int2 = 1;
	int int3 = -23;
	int int4 = 34;

	bool int1_bool = int1;
	bool int2_bool = int2;
	bool int3_bool = int3;
	bool int4_bool = int4;
	
	if(int1_bool)
	{
		cout << "int1_bool(0)=true" << endl;
	}
	else
	{
		cout << "int1_bool(0)=false" << endl;
	}
	
	if(int2_bool)
	{
		cout << "int2_bool(1)=true" << endl;
	}
	else
	{
		cout << "int2_bool(1)=false" << endl;
	}
	
	if(int3_bool)
	{
		cout << "int3_bool(-23)=true" << endl;
	}
	else
	{
		cout << "int3_bool(-23)=false" << endl;
	}
	
	if(int4_bool)
	{
		cout << "int4_bool(34)=true" << endl;
	}
	else
	{
		cout << "int4_bool(34)=false" << endl;
	}
}

void arithmetic_logical_operations()
{
	bool a = true;
	bool b = false;
	
	int a_plus_a_int = a+a;
	int a_times_b_int = a * b;
	int a_times_23_int = a * 23;

	bool bb {a * 23};

	cout << "a_plus_b_int=" << a_plus_a_int << endl;
	cout << "a_times_b_int=" << a_times_b_int << endl;
	cout << "a_times_23_int=" << a_times_23_int << endl;
}

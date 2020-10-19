//This program takes in as input a value of x
//It will then calculate the derivative and second derivatives at the value of x

#include <iostream>  
#include <stdio.h>       
#include <math.h>  
using namespace std;


//Modules
//------------------------------------
double f(double x);
double fp(double x);
double fdp(double x);

int main() {

	//Variables 
	//---------------------------------------------
	double x, angle;
#define PI 3.1415926535897932
#define h .000010000
	cout.precision(10);




	//Inputs 
	//---------------------------------------------------------------
	cout << "This program will calculate the derivative and second derivative of a function " << endl;

	cout << "Please enter the value of x " << endl;
	cin >> x;


	//Outputs
	//-------------------------------------------------------
	cout << "The the derivative of the function is of " << x << " is " << fp(x) << endl;
	cout << "The second derivative of the function is " << x << " is " << fdp(x);

	return 0;
}

//A module to calculate the original function
//----------------------------------------------
double f(double x) {

	//*****Please insert new equation******
	return pow(x , 3); // <--------------  
}


//A module to calculate the derivative of the function
double fp(double x) {

	return (f(x + h) - f(x - h)) / (2 * h);
}

double fdp(double x) {

	return (f(x + h) + f(x - h) - (2 * f(x))) / (h * h);
}//At x = .5 the first derivative is approx .75, while the second derivative is approx. 3
// At x = 3 the first derivative is approx 3, while the second derivative is approx.
//I had the best precision when h < 10^10

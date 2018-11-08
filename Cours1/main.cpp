#include <iostream>
#include <stdio.h>
#include <string>
#include "cVect2D.h"

int main()
{
	cVect2D newVector, otherVector(20), anotherVector(&otherVector);//Différents constructeurs

	std::cout << "New vector : " << newVector.ToString() << ". Other vector : "  << otherVector.ToString() << "." << std::endl;
	//newVector = (10, 10) otherVector = (10, 10)

	newVector.Add(otherVector);
	//Addition vectorielle de New Vector et Other Vector

	std::cout << "New vector : " << newVector.ToString() << std::endl;
	//newVector = (30, 30)
	std::cout << "New vector scalar product with Other Vector : " << newVector.ScalarProduct(otherVector) << std::endl;
	//Affichage du produit scalaire des vecteurs New Vector et Other Vector

	system("pause");

	return EXIT_SUCCESS;
}
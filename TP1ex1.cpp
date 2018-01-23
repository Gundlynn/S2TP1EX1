#include<iostream>

struct fraction{
	float num;
	float den;
};

void saisie (fraction& a)
{
	std::cout<<"Entrez le numérateur : ";
	std::cin>>a.num;
	std::cout<<std::endl;

	std::cout<<"Entrez le dénominateur : ";
	std::cin>>a.den;
	std::cout<<std::endl;
}

void affichage (fraction a, fraction b)
{
	std::cout<<"La fraction est : "<<a.num<<"/"<<a.den;
	std::cout<<" La fraction est : "<<b.num<<"/"<<b.den;
	std::cout<<std::endl;
}

fraction mult (fraction a,fraction b)
{
	fraction res;
	res.num = a.num * b.num;
	res.den = b.den * a.den;
	//std::cout<<a.num<<"/"<<a.den<<"*"<<b.num<<"/"<<b.den<<"="<<res.num<<"/"<<res.den;
	//std::cout<<std::endl;
 return res;
}

int main()
{ 
 fraction A,B;
 saisie (A);
 saisie (B);
 affichage(A,B);
  affichage(A, mult(A,B));

	/*std::cout<<"La fraction finale est : "<< <<"/"<< ;
	std::cin>> ;
	std::cout<<std::endl;
*/
return 0;
}

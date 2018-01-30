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

void affichage (fraction a)
{
	std::cout << "La fraction est : " << a.num << "/" <<a.den;
	std::cout << std::endl;
}

void affichmult (fraction a)
{
  std::cout << "La multiplication est : " << a.num << "/" << a.den;
  std::cout << std::endl;
}

void affichadd (fraction a)
{
  std::cout << "L'addition est : " << a.num << "/" << a.den;
  std::cout << std::endl;
}

void affichopp (fraction a)
{
  std::cout << "L'opposé est : " << a.num << "/" << a.den;
  std::cout << std::endl;
}

void affichinv (fraction a)
{
  std::cout << "L'inverse est : " << a.num << "/" << a.den;
  std::cout << std::endl;
}

void affichsoustr (fraction a)
{
  std::cout << "La soustraction est : " << a.num << "/" << a.den;
  std::cout << std::endl;
}

void affichdiv (fraction a)
{
  std::cout << "La division est : " << a.num << "/" << a.den;
  std::cout << std::endl;
}

void affichpgcd (int a)
{
  std::cout << "Le PGCD est : " << a ;
  std::cout << std::endl;
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
 fraction add (fraction a, fraction b) 
  {
   fraction res;
   res.num = ((a.num * b.den)+(b.num * a.den));
   res.den = a.den * b.den;
   return res;
 }
fraction opp (fraction a)
  {
  fraction res;
  res.num = ( a.num * -1);
  res.den = ( a.den * -1);
  return res;
}
fraction inv (fraction a)
  {
  fraction res;
  res.num = a.den;
  res.den = a.num;
  return res;
}
fraction soustr (fraction a, fraction b)
  {
  fraction res;
  res.num = ((a.num * b.den)-(b.num * a.den));
  res.den = a.den * b.den;
  return res;
}
fraction div (fraction a, fraction b)
{
  fraction res;
  res.num = a.num * b.den;
  res.den = a.den * b.num;
  return res;
}
int pgcd (int a, int b)
{
   if ( a < b ) {
     int temp = a;
     a = b ;
     b = temp ;
   }
    while(b!=0){
      int c=a%b;
      a=b;
      b=c;
    }
      return a;
}
int main()
{ 
 fraction A,B;
 saisie (A);
 saisie (B);
 int a = 0,b = 0;
 
 affichage(A);
 affichage(B);
 affichmult(mult(A,B));
 affichadd(add(A,B));
 affichopp(opp(A));
 affichopp(opp(B));
 affichinv(inv(A));
 affichinv(inv(B));
 affichsoustr(soustr(A,B));
 affichdiv(div(A,B));
 
 std::cout << "Entrez deux entiers : ";
 std::cin >> a >> b;
 std::cout << std::endl;
 affichpgcd(pgcd(a,b));

return 0;
}

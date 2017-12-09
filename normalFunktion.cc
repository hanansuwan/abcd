#include <iostream>
#include <iostream>
#include <string>
#include <random>
#include "io.cc"
#include "io.hh"


// commen


int main ()
{
double avg = 5.00 ;
double std_dev = 1.00 ;
int N = 10 ;
double min = 2.00 ;
double max = 6.00 ;

int seed = random_seed();



std::vector<double>a=normal_distribution(5, 9,avg,std_dev) ;
for(int i=0;i<a.size();i++)
{
std:: cout<<a[i];
}

}

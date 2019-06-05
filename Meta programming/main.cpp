#include <iostream>

using namespace std;

template <unsigned int n> inline uint64_t factoriel(){
    return n * factoriel<n-1>() ;
};

template <> inline uint64_t factoriel<0>(){
    return 1 ;
};

/** COSINUS
template<unsigned int ordre, double x> inline double cosinus(){
    return cosinus<>()
};

template<,> inline double cosinus<0,x>(){

}
//*/

int main()
{
    cout << factoriel<52>() << endl ;
    return 0;
}

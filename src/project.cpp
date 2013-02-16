#include "../include/project.h"
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

project::project()
{
    //ctor
}

project::~project()
{
    //dtor
}

void project::multiples_3_and_5()
{
    int total = 0;

    for(int i = 0; i < 1000; i++){
        if(i%3 == 0 || i%5 == 0){
            total += i;
        }
    }
    cout << total << endl;
}

void project::even_fibonacce()
{
    int sum = 0, num1 = 1, num2 = 1, temp;


    while(num1 < 4000000){
        if(num1%2 == 0){
            sum += num1;
        }

        temp = num1;
        num1 += num2;
        num2 = temp;
    }
    cout << "The summation of all even numbers is " << sum << endl;
}

void project::largest_prime_factor()
{
    unsigned long long BIG = 600851475143LL;
    unsigned long long count;

    for(count = 2; count < BIG/2; count++)
    {
        if(0 == BIG % count)
        {
            BIG /= count;
        }
    }
    cout << "Biggest prime factor is " <<  BIG << endl;

}

void project::largest_palindrome_product()
{
      int numbers[2];
    int highest = 0;

    for(int i = 1000 -1 ; i > 100; i--)
    {
        numbers[0] = i;
        for(int k = 1000 - 1; k > 100; k--)
        {
            ostringstream convert;
            string palindrome;
            string final_palindrome = "";
            numbers[1] = k;
            int product = numbers[0]*numbers[1];
            convert << product;
            palindrome = convert.str();
            int range = palindrome.length();
            for(int x = 0; x < range; x++)
            {
                final_palindrome = palindrome.at(x) + final_palindrome;
                if(palindrome == final_palindrome)
                {
                    if(product > highest)
                    {
                        highest = product;
                    }
                }
            }
        }
    }
    cout << highest << endl;
}

void project::smallest_multiple()
{
    int i = 1;
    bool k = false;

    while ( !k )
    {
        for ( int j = 1; j <= 20; j++)
        {
            if ( i % j == 0 )
            {
                if ( j == 20 )
                {
                    k = true;
                    break;
                }
            }

            else
            {
                break;
            }
        }
        i++;
    }
    i--;

    cout << i << endl << endl;
}


void project::sum_square_diff(){
    int sum = 0;
    int sqr = 0;
    int temp = 0;

    for(int i = 1; i <= 100; i++){
        sum += i;
        temp = i*i;
        sqr += temp;
    }
    sum *= sum;
    cout << sum - sqr << endl;
}

void project::the_10001st_prime(){
    int x = 2;

    for(int i = 0; i < 10001; i++){
        bool c = 0;
        while(!c){
            for(int k = 2; k <= x; k++){
                if(k == x){
                    c = true;
                    break;
                }
                else if(x%k == 0){
                    break;
                }
            }
            x++;
        }
    }
    x--;
    cout << x << endl;
}

void project::largest_product_in_series()
{


    int myNum[1000];
    const int MAX    = 5;
    int greatestProd = 1;
    int temp         = 1;
    int k            = 1;

    string num = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";

    for(int i = 0; i < 1000; i++)
    {
        myNum[i] = (num[i] - 48);
    }

    while(k < 995)
    {
        temp = 1;
        for(int j = k; j < (k + MAX); j++)
        {
            temp *= myNum[j];
        }
        if (temp > greatestProd)
        {
            greatestProd = temp;
        }
    k++;
}

    cout << "Greatest Product: " << greatestProd << endl;
}

void project::special_pytho_triplet()
{
    int a=3;
    int b=4;
    int c=5;
    const int LIMIT = 1000;
    for(a = 3; a < b; a++)
    {
        for(b = 4; b < c; b++)
        {
            for(c = 5; c < LIMIT; c++)
            {
                if( (a*a + b*b == c*c) && (a + b + c == LIMIT) )
                {
                cout << "a: " << a << " b: " << b << " c: " << c << endl;
                cout << "Product a*b*c = " << a*b*c << endl;
                }
            }
        }
    }
}

void project::summation_of_primes(){
    long long sum = 0LL;
    int range = 2000000;

    for(int i = 2; i < range; i++){
        for(int k = 2; k <= i; k++){
            if(k == i){
                sum += i;
            }
            else if(i%k == 0){
                break;
            }
        }
    }
    cout << sum << endl;
}

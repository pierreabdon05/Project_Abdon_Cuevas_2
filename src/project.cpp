#include "../include/project.h"
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <fstream>

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

void project::largest_product_grid()
{

    int num_container[20][20] =
    {
    { 8,02,22,97,38,15,00,40,00,75,04,05,07,78,52,12,50,77,91, 8},
    {49,49,99,40,17,81,18,57,60,87,17,40,98,43,69,48,04,56,62,00},
    {81,49,31,73,55,79,14,29,93,71,40,67,53,88,30,03,49,13,36,65},
    {52,70,95,23,04,60,11,42,69,24,68,56,01,32,56,71,37,02,36,91},
    {22,31,16,71,51,67,63,89,41,92,36,54,22,40,40,28,66,33,13,80},
    {24,47,32,60,99,03,45,02,44,75,33,53,78,36,84,20,35,17,12,50},
    {32,98,81,28,64,23,67,10,26,38,40,67,59,54,70,66,18,38,64,70},
    {67,26,20,68,02,62,12,20,95,63,94,39,63, 8,40,91,66,49,94,21},
    {24,55,58,05,66,73,99,26,97,17,78,78,96,83,14,88,34,89,63,72},
    {21,36,23, 9,75,00,76,44,20,45,35,14,00,61,33,97,34,31,33,95},
    {78,17,53,28,22,75,31,67,15,94,03,80,04,62,16,14, 9,53,56,92},
    {16,39,05,42,96,35,31,47,55,58,88,24,00,17,54,24,36,29,85,57},
    {86,56,00,48,35,71,89,07,05,44,44,37,44,60,21,58,51,54,17,58},
    {19,80,81,68,05,94,47,69,28,73,92,13,86,52,17,77,04,89,55,40},
    {04,52, 8,83,97,35,99,16,07,97,57,32,16,26,26,79,33,27,98,66},
    {88,36,68,87,57,62,20,72,03,46,33,67,46,55,12,32,63,93,53,69},
    {04,42,16,73,38,25,39,11,24,94,72,18, 8,46,29,32,40,62,76,36},
    {20,69,36,41,72,30,23,88,34,62,99,69,82,67,59,85,74,04,36,16},
    {20,73,35,29,78,31,90,01,74,31,49,71,48,86,81,16,23,57,05,54},
    {01,70,54,71,83,51,54,69,16,92,33,48,61,43,52,01,89,19,67,48},
                                                                };

    int start = 0;
    int end = 3;
    int product = 1;

    vector<long int>final_results;

        for(int i=0; i<20; i++){
            for(int j=start; j<=end; j++){
                product=product*num_container[i][j];
                if(j==end){
                final_results.push_back(product);
                product=1;
                start++;
                end++;
                }
                if(j==19)break;
            }
            start=0;
            end=3;
            for(int k=start; k<=end; k++){
                product=product*num_container[k][i];
                if(k==end){
                final_results.push_back(product);
                product=1;
                start++;
                end++;
                }
                if(k==19){
                start=0;
                end=3;
                break;
                }
            }
        }

    int current_row = 0;

        for(int i=0; i<=16; i++)
        {
            for(int j=0; j<=16; j++)
            {
                current_row = i;
                for(int k=start; k<=end; k++)
                {
                    product = product * num_container[current_row][k];
                    current_row++;
                    if (k==end)
                        final_results.push_back(product);
                }
                product = 1;
                start++;
                end++;
            }
            start = 0;
            end = 3;

            for(int j=0; j<=16; j++)
            {
                current_row = i+3;
                for(int k=start; k<=end; k++)
                {
                    product = product * num_container[current_row][k];
                    current_row--;
                    if (k==end)
                        final_results.push_back(product);
                }
                product = 1;
                start++;
                end++;
            }
            start = 0;
            end = 3;
        }
        int max_product=0;
        for(unsigned p=0; p<final_results.size(); p++){
            if(final_results[p]>max_product)
                max_product=final_results[p];
        }
        cout << "The greatest product of four adjacent numbers: " << max_product << endl;
}

void project::divisible_triangular_number()
{
    int i,j,counter,max,ans;
  ans=0;
  max=0;
  for(i=1;i<13000;i++)
    {
    ans=ans+i;
    counter=0;
    for (j=1;j<1000000;j++){
      if(ans%j==0)
        counter++;
      }
    if (counter>max){max=counter;}
    if (counter>500)
    {
        cout << "The first triangle number is " << ans << endl;
        break;
    }
    }

}

void project::largest_sum()
{
      const string add[100] = {
        "37107287533902102798797998220837590246510135740250",
        "46376937677490009712648124896970078050417018260538",
        "74324986199524741059474233309513058123726617309629",
        "91942213363574161572522430563301811072406154908250",
        "23067588207539346171171980310421047513778063246676",
        "89261670696623633820136378418383684178734361726757",
        "28112879812849979408065481931592621691275889832738",
        "44274228917432520321923589422876796487670272189318",
        "47451445736001306439091167216856844588711603153276",
        "70386486105843025439939619828917593665686757934951",
        "62176457141856560629502157223196586755079324193331",
        "64906352462741904929101432445813822663347944758178",
        "92575867718337217661963751590579239728245598838407",
        "58203565325359399008402633568948830189458628227828",
        "80181199384826282014278194139940567587151170094390",
        "35398664372827112653829987240784473053190104293586",
        "86515506006295864861532075273371959191420517255829",
        "71693888707715466499115593487603532921714970056938",
        "54370070576826684624621495650076471787294438377604",
        "53282654108756828443191190634694037855217779295145",
        "36123272525000296071075082563815656710885258350721",
        "45876576172410976447339110607218265236877223636045",
        "17423706905851860660448207621209813287860733969412",
        "81142660418086830619328460811191061556940512689692",
        "51934325451728388641918047049293215058642563049483",
        "62467221648435076201727918039944693004732956340691",
        "15732444386908125794514089057706229429197107928209",
        "55037687525678773091862540744969844508330393682126",
        "18336384825330154686196124348767681297534375946515",
        "80386287592878490201521685554828717201219257766954",
        "78182833757993103614740356856449095527097864797581",
        "16726320100436897842553539920931837441497806860984",
        "48403098129077791799088218795327364475675590848030",
        "87086987551392711854517078544161852424320693150332",
        "59959406895756536782107074926966537676326235447210",
        "69793950679652694742597709739166693763042633987085",
        "41052684708299085211399427365734116182760315001271",
        "65378607361501080857009149939512557028198746004375",
        "35829035317434717326932123578154982629742552737307",
        "94953759765105305946966067683156574377167401875275",
        "88902802571733229619176668713819931811048770190271",
        "25267680276078003013678680992525463401061632866526",
        "36270218540497705585629946580636237993140746255962",
        "24074486908231174977792365466257246923322810917141",
        "91430288197103288597806669760892938638285025333403",
        "34413065578016127815921815005561868836468420090470",
        "23053081172816430487623791969842487255036638784583",
        "11487696932154902810424020138335124462181441773470",
        "63783299490636259666498587618221225225512486764533",
        "67720186971698544312419572409913959008952310058822",
        "95548255300263520781532296796249481641953868218774",
        "76085327132285723110424803456124867697064507995236",
        "37774242535411291684276865538926205024910326572967",
        "23701913275725675285653248258265463092207058596522",
        "29798860272258331913126375147341994889534765745501",
        "18495701454879288984856827726077713721403798879715",
        "38298203783031473527721580348144513491373226651381",
        "34829543829199918180278916522431027392251122869539",
        "40957953066405232632538044100059654939159879593635",
        "29746152185502371307642255121183693803580388584903",
        "41698116222072977186158236678424689157993532961922",
        "62467957194401269043877107275048102390895523597457",
        "23189706772547915061505504953922979530901129967519",
        "86188088225875314529584099251203829009407770775672",
        "11306739708304724483816533873502340845647058077308",
        "82959174767140363198008187129011875491310547126581",
        "97623331044818386269515456334926366572897563400500",
        "42846280183517070527831839425882145521227251250327",
        "55121603546981200581762165212827652751691296897789",
        "32238195734329339946437501907836945765883352399886",
        "75506164965184775180738168837861091527357929701337",
        "62177842752192623401942399639168044983993173312731",
        "32924185707147349566916674687634660915035914677504",
        "99518671430235219628894890102423325116913619626622",
        "73267460800591547471830798392868535206946944540724",
        "76841822524674417161514036427982273348055556214818",
        "97142617910342598647204516893989422179826088076852",
        "87783646182799346313767754307809363333018982642090",
        "10848802521674670883215120185883543223812876952786",
        "71329612474782464538636993009049310363619763878039",
        "62184073572399794223406235393808339651327408011116",
        "66627891981488087797941876876144230030984490851411",
        "60661826293682836764744779239180335110989069790714",
        "85786944089552990653640447425576083659976645795096",
        "66024396409905389607120198219976047599490197230297",
        "64913982680032973156037120041377903785566085089252",
        "16730939319872750275468906903707539413042652315011",
        "94809377245048795150954100921645863754710598436791",
        "78639167021187492431995700641917969777599028300699",
        "15368713711936614952811305876380278410754449733078",
        "40789923115535562561142322423255033685442488917353",
        "44889911501440648020369068063960672322193204149535",
        "41503128880339536053299340368006977710650566631954",
        "81234880673210146739058568557934581403627822703280",
        "82616570773948327592232845941706525094512325230608",
        "22918802058777319719839450180888072429661980811197",
        "77158542502016545090413245809786882778948721859617",
        "72107838435069186155435662884062257473692284509516",
        "20849603980134001723930671666823555245252804609722",
        "53503534226472524250874054075591789781264330331690",
        };

      const vector<std::string> nums(add, add + sizeof(add) / sizeof(add[0]));

      uint64_t summation = 0;
      int j = 0;
      string string;
      while (1) {
        int sum1 = 0;
        for (vector<std::string>::const_iterator it = nums.begin();
             it < nums.end();
             it++)
               sum1 += (*it).at(j);

        summation *= 10;
        summation += sum1 - 4800;
        std::ostringstream stringsum;
        stringsum << summation;
        std::string sum2 = stringsum.str().substr(0, 10);

        if (string != sum2)
        {
            string = sum2;
        }

        else
        {
            break;
        }

        j++;
      }
      cout <<  "The sum of the first ten digit is: " << string.c_str() << endl;
}

void project::longest_collatz_sequence()
{
    long n, largestcounter=0,num;

        for(long a=2;a<=1000000;a++)
        {
        long counter=1;
            for(n=a;n>1;)
            {
                if(n%2==0)
                {
                    n=n/2;
                    counter++;
                }
                else
                {
                    n=3*n+1;
                    counter++;
                }
            }

            if(counter>largestcounter)
            {
                largestcounter=counter;
                num=a;
            }
        }
    cout<<"Longest collatz counter is " << largestcounter<<endl;
    return;

}

void project::diophantine_reciprocals_a()
{
    cout << "No Answer." << endl;
}

void project::power_digit_sum()
{
    int power = 0, product = 0, hold = 0;
    int digits = 0;
    int summation = 0;
    string total = "1";

    for (power = 1; power <= 1000; ++power)
    {
        hold = 0;
        for (digits = total.length() - 1; digits >= 0; --digits)
        {
            product = (total[digits] - '0') * 2 + hold;
            if (product > 9)
            {
                hold = 1;
                product %= 10;
            }
            else
            {
                hold = 0;
            }
            total[digits] = '0' + product;
            if (digits == 0 && hold == 1)
            {
                total.insert(0, "1");
            }
        }
    }
    for (digits = 0; digits < total.length(); ++digits)
    {
        summation += total[digits] - '0';
    }

        cout << "The sum is " << summation << endl;

}


void project::number_letter_counts()
{

    const string onek = "one thousand";
    const int hcount = 7;
    const int handcount = 10;

      const string units_array[9] = {"one", "two", "three", "four",
      "five", "six", "seven", "eight", "nine"};
      const vector< string > units(units_array,
        units_array + sizeof(units_array) / sizeof(units_array[0]));

      const string tens_array[90] = {"ten", "eleven", "twelve", "thirteen",
      "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
      "twenty", "twentyone", "twentytwo", "twentythree", "twentyfour",
      "twentyfive", "twentysix", "twentyseven", "twentyeight", "twentynine",
      "thirty", "thirtyone", "thirtytwo", "thirtythree", "thirtyfour",
      "thirtyfive", "thirtysix", "thirtyseven", "thirtyeight", "thirtynine",
      "forty", "fortyone", "fortytwo", "fortythree", "fortyfour",
      "fortyfive", "fortysix", "fortyseven", "fortyeight", "fortynine",
      "fifty", "fiftyone", "fiftytwo", "fiftythree", "fiftyfour",
      "fiftyfive", "fiftysix", "fiftyseven", "fiftyeight", "fiftynine",
      "sixty", "sixtyone", "sixtytwo", "sixtythree", "sixtyfour",
      "sixtyfive", "sixtysix", "sixtyseven", "sixtyeight", "sixtynine",
      "seventy", "seventyone", "seventytwo", "seventythree", "seventyfour",
      "seventyfive", "seventysix", "seventyseven", "seventyeight", "seventynine",
      "eighty", "eightyone", "eightytwo", "eightythree", "eightyfour",
      "eightyfive", "eightysix", "eightyseven", "eightyeight", "eightynine",
      "ninety", "ninetyone", "ninetytwo", "ninetythree", "ninetyfour",
      "ninetyfive", "ninetysix", "ninetyseven", "ninetyeight", "ninetynine"};
      const vector< string > tens(tens_array,
        tens_array + sizeof(tens_array) / sizeof(tens_array[0]));

      int count = 0;

      for (vector< string >::const_iterator it = units.begin();
           it < units.end(); it++)
        count += it->length();
      for (vector< string >::const_iterator it = tens.begin();
           it < tens.end(); it++)
        count += it->length();
      for (vector< string >::const_iterator it = units.begin();
           it < units.end(); it++) {
        count += it->length() + hcount;
      for (vector< string >::const_iterator jt = units.begin();
             jt < units.end(); jt++)
          count += it->length() + handcount + jt->length();
      for (vector< string >::const_iterator jt = tens.begin();
             jt < tens.end(); jt++)
          count += it->length() + handcount + jt->length();
      }

      count += onek.length() - 1;
      cout << "The number of letters: " << count << endl;
}

void project::max_path_sum_one()
{

    vector< vector<int> > data;

      int arow1[1] = {75};
      vector<int> row1(arow1, arow1 + sizeof(arow1) / sizeof(arow1[0]));
      data.push_back(row1);

      int arow2[2] = {95, 64};
      vector<int> row2(arow2, arow2 + sizeof(arow2) / sizeof(arow2[0]));
      data.push_back(row2);

      int arow3[3] = {17, 47, 82};
      vector<int> row3(arow3, arow3 + sizeof(arow3) / sizeof(arow3[0]));
      data.push_back(row3);

      int arow4[4] = {18, 35, 87, 10};
      vector<int> row4(arow4, arow4 + sizeof(arow4) / sizeof(arow4[0]));
      data.push_back(row4);

      int arow5[5] = {20,  4, 82, 47, 65};
      vector<int> row5(arow5, arow5 + sizeof(arow5) / sizeof(arow5[0]));
      data.push_back(row5);

      int arow6[6] = {19,  1, 23, 75,  3, 34};
      vector<int> row6(arow6, arow6 + sizeof(arow6) / sizeof(arow6[0]));
      data.push_back(row6);

      int arow7[7] = {88,  2, 77, 73,  7, 63, 67};
      vector<int> row7(arow7, arow7 + sizeof(arow7) / sizeof(arow7[0]));
      data.push_back(row7);

      int arow8[8] = {99, 65,  4, 28,  6, 16, 70, 92};
      vector<int> row8(arow8, arow8 + sizeof(arow8) / sizeof(arow8[0]));
      data.push_back(row8);

      int arow9[9] = {41, 41, 26, 56, 83, 40, 80, 70, 33};
      vector<int> row9(arow9, arow9 + sizeof(arow9) / sizeof(arow9[0]));
      data.push_back(row9);

      int arow10[10] = {41, 48, 72, 33, 47, 32, 37, 16, 94, 29};
      vector<int> row10(arow10, arow10 + sizeof(arow10) / sizeof(arow10[0]));
      data.push_back(row10);

      int arow11[11] = {53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14};
      vector<int> row11(arow11, arow11 + sizeof(arow11) / sizeof(arow11[0]));
      data.push_back(row11);

      int arow12[12] = {70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57};
      vector<int> row12(arow12, arow12 + sizeof(arow12) / sizeof(arow12[0]));
      data.push_back(row12);

      int arow13[13] = {91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48};
      vector<int> row13(arow13, arow13 + sizeof(arow13) / sizeof(arow13[0]));
      data.push_back(row13);

      int arow14[14] = {63, 66,  4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31};
      vector<int> row14(arow14, arow14 + sizeof(arow14) / sizeof(arow14[0]));
      data.push_back(row14);

      int arow15[15] = { 4, 62, 98, 27, 23,  9, 70, 98, 73, 93, 38, 53, 60, 4, 23};
      vector<int> row15(arow15, arow15 + sizeof(arow15) / sizeof(arow15[0]));
      data.push_back(row15);


  for (int i = data.size(); i > 0; --i)
    for (int j = 0; j < (i - 1); ++j)
      data[i-2][j] += max(data[i-1][j], data[i-1][j+1]);

  cout << "The maximum total from top to bottom of the triangle: " << data[0][0] << endl;

}

void project::counting_sundays()
{
    int count = 0, daysmos, days = 1;

    for (int i = 1901; i < 2000; i++)
    {
        for (int j = 1; j <= 12; j++)
        {
            if (j == 4 || j == 6 || j == 9 || j == 11)
            {
                daysmos = 30;
            }
            else if (j == 2)
            {
                if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
                {
                    daysmos = 29;
                }
                else
                {
                    daysmos = 28;
                }
            }
            else
            {
                daysmos = 31;
            }
            if (days % 7 == 0)
            {
                count++;
            }

        days += daysmos;
        }
    }

    cout << "The number of sundays: " << count << endl;



}

void project::factorial_digit_sum()
{
    int i = 0, j = 0;
    int total = 0;
    int array[1000] = {0};
    array[0] = 1;

    for (i = 1; i <= 100; i++)
    {
        for (j = 0; j < 1000; j++)
        {
            array[j] = array[j]*i;
        }
        for (j = 0; j < 1000; j++)
        {
            array[j+1] += (array[j])/10;
            array[j] = (array[j])%10;
        }
    }
    for (j = 0; j < 1000; j++)
    {
        total += array[j];
    }
        cout << "The sum is: " << total <<endl;
    }

void project::names_scores()
{


   ifstream myfile;
   string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   string line, temp = "";
   int range=alpha.length();
   int rank=0;
   int range_x=0;
   int range_y=1;
   int letter=0;
   int prod=0;
   int i_n=0;
   unsigned long int sum = 0;
   myfile.open ("names.txt");
   getline(myfile,line);
   myfile.close();
   range_x = line.length();

   for(int i=0; i<range_x; i++ )
   {
       if(line.at(i)==',')
       {
            range_y++;
       }
   }
  string names[range_y];
    for(int i = 1; i < range_x; i++)
    {
        if(line.at(i) == '"' || line.at(i) == ',')
        {
            if(temp != "")
            {
                names[i_n] = temp;
                temp = "";
                i_n++;
            }
            continue;
        }
        temp += line.at(i);
    }

    for(int i = 0; i < range_y; i++)
    {
        for(int j = 0; j < range_y;j++)
        {
            if(names[i] > names[j])
            {
                string temp_r = names[j];
                names[j] = names[i];
                names[i] = temp_r;
            }
        }
    }


	 for(int i = 0; i < range_y; i++)
    {
        letter = 0;
        rank = range_y - i;
        int range_z = names[i].length();
        for(int m = 0; m < range_z; m++)
        {
            for(int n = 0; n < range; n++)
            {
                if(names[i].at(m) == alpha.at(n))
                {
                    letter += n + 1;
                    break;
                }
            }
        }

        prod=rank*letter;
        sum+=prod;
        }

    cout<< "Name Score Summation is:" << sum << endl;
}

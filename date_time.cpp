#include <iostream>
#include <ctime>
#include <string>
#include <sstream>

using namespace std;
//using namespace string;
string encryptDecrypt(string toEncrypt) {
    char key1 = 'C'; //Any char will work
    char key2 = 'o'; //Any char will work
    char key3 = 'N'; //Any char will work
    char key4 = 's'; //Any char will work
    string output = toEncrypt;

    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key1;
    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key2;
 for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key3;
    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key4;

    return output;
}

int main(int argc, const char * argv[])
{
    std::ostringstream ss;
    time_t now = time(0);
    cout<<now<<endl;
    long int timelong = now ;

    ss << timelong;
    string strtime = ss.str() ;


    string encrypted = encryptDecrypt(strtime);
    cout << "Encrypted:" << encrypted << "\n";

    string decrypted = encryptDecrypt(encrypted);
    cout << "Decrypted:" << decrypted << "\n";

    return 0;
}

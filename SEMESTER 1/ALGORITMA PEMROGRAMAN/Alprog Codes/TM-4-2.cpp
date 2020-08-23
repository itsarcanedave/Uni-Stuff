#include <iostream> //cout <<, cin >>
#include <string.h> //string
using namespace std;

int main()
{
	string text, hidup, mati,s;
	cout << "Please insert a text without space : " << endl;
	getline (cin, text);

	for (int i = 0; i < text.length(); i++)
    {
        if (text[i]=='a'||text[i]=='i'||text[i]=='u'||text[i]=='e'||text[i]=='o')
        {
            hidup+=text[i];
        }
        else
        {
            mati+=text[i];
        }
    }

    s= mati+hidup;

    cout << s << endl;

	return 0;
}

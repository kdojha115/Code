#include<bits/stdc++.h>
#include<cassert>

using namespace std;

char findReciValue(char takeACharValue)
{
    return 'Z' - takeACharValue + 'A';;
}

string EncodingOperation(string takeStringValue)
{
    string StringEncoding="";
    for(int i=0;i<takeStringValue.length();i++)
    {
        if((64-int(takeStringValue[i]))%2==0)
        {
            StringEncoding+=takeStringValue[i];
            StringEncoding+=findReciValue(takeStringValue[i]);
        }
        else
        {
            StringEncoding+=findReciValue(takeStringValue[i]);
        }
    }
    return StringEncoding;
}

string DecodingOperation(string takeStringValue)
{
    string StringDecoding="";
    for(int i=0;i<takeStringValue.length();i++)
    {
        if((takeStringValue[i]-64)%2==0)
        {
            if(takeStringValue[i+1]!=findReciValue(takeStringValue[i]))
            {
                StringDecoding+=findReciValue(takeStringValue[i]);
            }
            else
            {
                StringDecoding+=takeStringValue[i];
                i++;
            }
        }
    }
    return StringDecoding;
}

void Encoding()
{
    assert(EncodingOperation("ABC")=="ZBYX");
    assert(EncodingOperation("XYZ")=="XCBZA");
    assert(EncodingOperation("GHI")=="THSR");
    assert(EncodingOperation("NOP")=="NMLPK");
    assert(EncodingOperation("JKL")=="JQPLO");
    assert(EncodingOperation("UTS")=="FTGH");
    cout<<"$*-Encoding Complete-*$"<<endl;
}

void Decoding()
{
    assert(DecodingOperation("ZBYX")=="ABC");
    assert(DecodingOperation("XCBZA")=="XYZ");
    assert(DecodingOperation("THSR")=="GHI");
    assert(DecodingOperation("NMLPK")=="NOP");
    assert(DecodingOperation("JQPLO")=="JKL");
    assert(DecodingOperation("FTGH")=="UTS");
    cout<<"$*-Decoding Complete-*$"<<endl;
}
void takeInput()
{
    string takeString="";
    char takeChar;
    cout<<"Take a string : "<<endl;
    cin>>takeString;
    cout<<"Enter E for Encoding and Enter any button except E for Decoding :    "<<endl;
    cin>>takeChar;
    (takeChar=='E') ? cout<<EncodingOperation(takeString) : cout<<DecodingOperation(takeString);
    cout<<endl;
    
}


int main()
{
    Encoding();
    Decoding();
    takeInput();
    return 0;
}

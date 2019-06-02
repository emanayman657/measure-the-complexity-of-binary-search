#include <iostream>
#include<fstream>
#include<cstdlib>
#include<string>

using namespace std;
int words=0;
class searcher{
private:
    char ch;
public:
void loadData(){
ifstream indata;
indata.open("words.txt");
indata.get(ch);
while(indata){
    if(ch=='\n'){
        words++;
            }
indata.get(ch);
            }
cout<<"the number of words = "<<words<<endl;

        }
int binarySearch(istream &in, string names[],int size, string value)
{
    int first = 0,
        last=size-1;
        middle,
        position = -1;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (names[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (names[middle]> value)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;
}


/*bool binarySearch(int arr[], int size, string wordToLookFor){
ifstream indata;
indata.open("words.txt");
while(indata){
int start = 0, end = size - 1, mid;
while (start != end){
    mid = (end + start) / 2;
    if (arr[mid] == wordToLookFor)
        return true;
    else if (arr[mid] < wordToLookFor)
        start = mid + 1;
		else
        end = mid - 1;
	}

	mid = (end + start) / 2;
	if (arr[mid] == valueToLookFor)
		return true;

	return false;
}
}*/


};


int main()
{

   searcher s;
   s.loadData();
   int arr[words];
   for (int i = 0; i < words; i++)
		arr[i] = i;
    /*if (s.binarySearch(arr, 200000, "ab"))
		cout << "binary loop FOUND \n";
	else
		cout << "binary loop NOT FOUND :( \n";*/
		int size=200000;
string ch[size];
string word;
cout << "Please enter the word : ";
getline(cin, word);
ifstream indata;
indata.open("words.txt");
//indata.get(ch);
while(indata){
for(int i=0;i<=size;i++){
    if(ch[i]==word){
        cout<<"the words is find and it is equal = "<<word<<endl;
            }
     else{
        cout<<"the word is not found "<<endl;
     }
}
//indata.get(ch);
}

int results;


    results = s.binarySearch(indata,ch, size,word);


    if (results == -1)
        cout << "That name does not exist in the array.\n";
    else
    {
        cout << "That name is found at element " << results;
        cout << " in the array.\n";
    }


    return 0;
}

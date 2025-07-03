#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<string>> PhoneBook;
    vector<vector<string>> BookMark;
    string name, PhoneNumber, NickName;
    vector<string> person(3);

    while(true){
        cout << "Enter command (ADD, SEARCH, REMOVE, EXIT): ";
        string command;
        cin >> command;

        if(command == "ADD"){
            cout<<"a. Name: ";
            cin>>name;
            cout<<"b. Phone Number(unique): ";
            cin>>PhoneNumber;
            cout<<"c. Nickname: ";
            cin>>NickName;

            person[0] = name;
            person[1] = PhoneNumber;
            person[2] = NickName;

            PhoneBook.push_back(person);
            continue;
        }
        else if(command == "SEARCH"){
            for(int i=0; i<PhoneBook.size(); i++){
                cout<<i+1<<". Name: "<<PhoneBook[i][0]<<", Phone Number: "<<PhoneBook[i][1]<<", Nickname: "<<PhoneBook[i][2]<<endl;
            }
            cout<<"Enter the index of the contact to bookmark (-1 to exit): ";
            int n;
            cin>>n;
            if(n == -1) continue;
            if(n > 0 && n <= PhoneBook.size()){
                BookMark.push_back(PhoneBook[n-1]);
            }
        }
        else if(command == "REMOVE"){
            cout<<"Enter the index of the contact to remove (-1 to exit): ";
            int n;
            cin>>n;
            if(n == -1) continue;
            if(n > 0 && n <= PhoneBook.size()){
                PhoneBook.erase(PhoneBook.begin() + n - 1);
            }
        }
        else if(command == "EXIT"){
            break;
        }
    }

    return 0;
}

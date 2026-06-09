#include <bits/stdc++.h>
using namespace std;

class User1
{
public:
    int ID;
    char name[1000];
    char Section[1000];
    int totalMarks;
};

class User2
{
public:
    int ID;
    char name[1000];
    char Section[1000];
    int totalMarks;
};

class User3
{
public:
    int ID;
    char name[1000];
    char Section[1000];
    int totalMarks;
};

int main()
{

    int T;
    cin >> T;

    int ID;
    char Name[1000];
    char Section[1000];
    int totalMarks;

    User1 user1;
    User2 user2;
    User3 user3;

    for (int i = 0; i < T; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> ID >> Name >> Section >> totalMarks;
            if (i == 0)
            {
                user1.ID = ID;
                strcpy(user1.name, Name);
                strcpy(user1.Section, Section);
                user1.totalMarks = totalMarks;
            }
            else if (i == 1)
            {
                user2.ID = ID;
                strcpy(user2.name, Name);
                strcpy(user2.Section, Section);
                user2.totalMarks = totalMarks;
            }
            else
            {
                user3.ID = ID;
                strcpy(user3.name, Name);
                strcpy(user3.Section, Section);
                user3.totalMarks = totalMarks;
            }
        }

        if (user1.totalMarks > user2.totalMarks && user1.totalMarks > user3.totalMarks)
        {
            cout << user1.ID << " " << user1.name << " " << user1.Section << " " << user1.totalMarks << endl;
        }
        if (user2.totalMarks > user1.totalMarks && user2.totalMarks > user3.totalMarks)
        {
            cout << user2.ID << " " << user2.name << " " << user2.Section << " " << user2.totalMarks << endl;
        }
        if (user3.totalMarks > user1.totalMarks && user3.totalMarks > user2.totalMarks)
        {
            cout << user3.ID << " " << user3.name << " " << user3.Section << " " << user3.totalMarks << endl;
        }

        if (user1.totalMarks == user2.totalMarks && user1.totalMarks > user3.totalMarks)
        {
            if (user1.ID > user2.ID)
            {
                cout << user2.ID << " " << user2.name << " " << user2.Section << " " << user2.totalMarks << endl;
            }
            else
            {
                cout << user1.ID << " " << user1.name << " " << user1.Section << " " << user1.totalMarks << endl;
            }
        }

        if (user1.totalMarks == user3.totalMarks && user1.totalMarks > user2.totalMarks)
        {
            if (user1.ID > user3.ID)
            {
                cout << user3.ID << " " << user3.name << " " << user3.Section << " " << user3.totalMarks << endl;
            }
            else
            {
                cout << user1.ID << " " << user1.name << " " << user1.Section << " " << user1.totalMarks << endl;
            }
        }

        if (user2.totalMarks == user3.totalMarks && user2.totalMarks > user1.totalMarks)
        {
            if (user2.ID > user3.ID)
            {
                cout << user3.ID << " " << user3.name << " " << user3.Section << " " << user3.totalMarks << endl;
            }
            else
            {
                cout << user2.ID << " " << user2.name << " " << user2.Section << " " << user2.totalMarks << endl;
            }
        }

        if (user1.totalMarks == user2.totalMarks && user1.totalMarks == user3.totalMarks)
        {
            if (user1.ID < user2.ID && user1.ID < user3.ID)
            {
                cout << user1.ID << " " << user1.name << " " << user1.Section << " " << user1.totalMarks << endl;
            }
            else if (user2.ID < user1.ID && user2.ID < user3.ID)
            {
                cout << user2.ID << " " << user2.name << " " << user2.Section << " " << user2.totalMarks << endl;
            }
            else
            {
                cout << user3.ID << " " << user3.name << " " << user3.Section << " " << user3.totalMarks << endl;
            }
        }
    }

    return 0;
}
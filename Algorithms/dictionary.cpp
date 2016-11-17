#include<iostream>
#include<string>
using namespace std;

class node
{
	public:
	char keyword[20];
	node *left,*right;
	friend class bst;
};

class bst
{
	node *root,*New,*temp;
	public:
	bst()
	{
		root = NULL;
	}
	void create();
	void search(node *,char[]);
	void insert(node *,node *);
	void find();
};

void bst::create()
{
	New = new node;
	New -> left = NULL;
	New -> right = NULL;
	cout << "Enter Keyword:";
	cin >> New -> keyword;
	if (root == NULL)
		root = New;
	else
		insert(root,New);
}


void bst::insert(node *root, node *New)
{
	int d;
	d = strcmp(New -> keyword,root -> keyword);
	if(d < 0)
	{
		if (root -> left == NULL)
			root -> left = New;
		else
			insert(root -> left,New);
	}
	if(d > 0)
	{
		if(root -> right == NULL)
			root -> right = New;
		else
			insert(root -> right,New);
	}
}


void bst::find()
{
	char find[20];
	cout << "\n Enter the word you want to find:";
	cin >> find;
	temp = root;
	search(temp,find);
}
void bst::search(node *temp,char find[20])
{
	int f = 0;
	if(temp == NULL)
	{
		f = 1;
		cout << "\nDictionary is not yet created!";
	}
	else
		while(temp != NULL)
		{
			int d = strcmp(temp -> keyword,find);
			if (d == 0){
				f = 1;
				cout << "Keyword found :\n";
				cout << temp -> keyword<<endl;
				break;
				}

			if(d > 0) {
				temp = temp -> left;
			}
			if(d < 0) {
				temp = temp -> right;
			}
		}
	if(f == 0)
	{
		cout << "Not found!";
	}
}

int main()
{
	int ch;
	char f;
	bst a;

	do
	{
		cout<<"Select Operation -\n1.Create\n2.Search\n3.Stop"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
			do
			{
				a.create();
				cout << "\nEnter another word?(y/n)";
				cin >> f;
			}
			while(f == 'y');
			
			break;
			
			case 2:
				a.find();
			
			break;
				case 3:
			break;
			default:
				cout << "Incorrect Option";
			break;
		}
	}
	while(ch != 3);
	return 0;
}


#include <iostream>
#include <cstring>
using namespace std;
class String
{
private:
	char *str;
	unsigned int length;
public:
	String()
	{
		//To initialize a object, the point str is refer to NULL, and length = 0
		this->str = NULL;
		length = 0;
	}
	String(const String &other)
	{
		//Copy constructor, copy the str and length
		this->str = new char [strlen(other.str) + 1];
		strcpy(this->str, other.str);
		length = strlen(this->str);
	}
	String(const char *s)
	{
		//Assign a string to an object.
		this->str = new char [strlen(s) + 1];
		strcpy(this->str, s);
		length = strlen(this->str);
	}
	~String()
	{
		//The destuctor	
		if(this->str != NULL)
		{
			delete [] this->str;
			this->str = NULL;
			this->length = 0;
		}
	}

	unsigned int size()
	{
		//a function that return the length
		return this->length;
	}
	String& append(const String& other)
	{
		//add two length
		this->length += other.length;
		//judge whether two str all are NULL
		if (this->str != NULL && other.str != NULL)
		{
			char *t = new char [strlen(this->str) + strlen(other.str) + 1];
			strcpy(t, this->str);
			strcpy(t + strlen(this->str), other.str);
			delete [] this->str;
			this->str = t;
		}
		if (this->str == NULL)
		{
			this->str = new char [strlen(other.str) + 1];
			strcpy(this->str, other.str);
		}
		return *this;

	}

	String& operator=(const String& other)
	{
		//The point is to judge whether the str is NULL
		this->length = other.length;
		if(this->str != NULL)
		{
			delete [] this->str;
			this->str = NULL;
		}

		if(other.str != NULL)
		{
			this->str = new char [strlen(other.str) + 1];
			strcpy(this->str, other.str);
		}
		else
		{
			this->str = NULL;
		}
		return *this;
	}

	String& operator=(const char *s)
	{
		//assign a char [] to a String object
		if(this->str != NULL)
		{
			delete [] this->str;
			this->str = NULL;
		}

		if(s != NULL)
		{
			this->str = new char [strlen(s) + 1];
			strcpy(this->str, s);
			this->length = strlen(s);
		}
		else
		{
			this->str = NULL;
			this->length = 0;
		}
		return *this;
	}

	String& operator+=(const char * s)
	{
		if (this->str != NULL && s != NULL)
		{
			char *t = new char [strlen(this->str) + strlen(s) + 1];
			strcpy(t, this->str);
			strcpy(t + strlen(this->str), s);
			delete [] this->str;
			this->str = t;
			this->length += strlen(s);
		}
		if (this->str == NULL && s != NULL)
		{
			this->str = new char [strlen(s) +1];
			strcpy(this->str, s);
			this->length = strlen(s);
		}
		return *this;
	}
	void operator<<(char *s)
	{
		std::cout << this->str << s << std::endl;
	}

	char& operator[](int i)
	{
		return (this->str)[i];
	}

	friend std::ostream &operator<<(std::ostream &o, const String &a);

};
std::ostream &operator<<(std::ostream &o, const String &a)
{
 	o << a.str;
 	return o;
} 
int main()
{
	String a = "abcde";
	String b = "fghij";

	cout << "a = " << a  << endl << "b = " << b << endl;
	a.append(b);
	cout << "After a.append(b):" << endl;
	cout << "a = " << a << endl;
	a += "klmn";
	cout << "After a += \"klmn\"" << endl;
	cout << "a = " << a << endl;
	cout << "a.size() = " << a.size() << endl;

	a = b;
	cout << "After a = b" << endl;
	cout << "a = " << a << endl;
	cout << "a.size() = " << a.size() << endl;

	a = "Night";
	cout << "After a = \"Night\"" << endl;
	cout << "a = " << a << endl;

	cout << "a[3] = " << a[3] << endl;
	a[3] = 'r';
	cout << "After a[3] = r" << endl; 
	cout << a << endl;

	return 0;
}
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
		str = NULL;
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

	String operator=(const String& other)
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

	char& operator[](int i)
	{
		return (this->str)[i];
	}

	String operator+(const String &other) const
	{
		String t;
		if (this->str != NULL && other.str != NULL)
		{
			t.length = strlen(this->str) + strlen(other.str);
			t.str = new char [t.length + 1];
			strcpy(t.str, this->str);
			strcpy(t.str + this->length, other.str);
		}
		else
		{
			if (this->str != NULL)
			{
				t.length += strlen(this->str);
				t.str = new char [t.length + 1];
				strcpy(t.str, this->str);
			}
			else if (other.str != NULL)
			{
				t.length += strlen(other.str);
				t.str = new char [t.length + 1];
				strcpy(t.str, other.str);
			}
			else
			{
				t.length = 0;
				t.str = NULL;
			}
		}

		return t;
	}

	void operator<<(const String &other)
	{
		std::cout << this->str << other.str << std::endl;
	}
	friend std::ostream &operator<<(std::ostream &o, const String &a);

};

std::ostream &operator<<(std::ostream &o, const String &a)
{
	if (a.str != NULL)
 		o << a.str;
 	return o;
} 
int main(){

    String a("This is "), b(a);

    String c;

    cout << "a:" << a << "\n" << "b:" << b << "\n" << "c:" << c << "\n";

    c = "a test.";

    cout << "c:" << c << "\n";

    a.append(c);

    cout << "a:" << a << "\n";
    

    {

        String a("Hello"), b;

        a += " World";

        b  << (a + b);

        cout << "b:" << b << "\n";

        String c;

        c = b + "!";

        cout << "c:" << c << "\n";

    }

    a[0] = 't';

    cout << "a:" << a << "\n";

    return 0;

}
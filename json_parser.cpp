#include <iostream>
#include <fstream>
#include <cstdlib>
#include <jsoncpp/json/json.h>

using namespace std;


void print_value_from_json(const char *json_file,const char* key)
{
	ifstream ifs(json_file);
	if(!json_file)
	{
		cout<<"Error while opening file: "<<json_file<<endl;
		return;
	}
	Json::Reader reader;
	Json::Value val;
	reader.parse(ifs,val);
	if(val.isMember(key))
	{
		cout<<"Key "<<key<<", Value: "<<val[key].asInt()<<endl;
	}
	else
	{
		cout<<key<<": Not a valid key for file: "<<json_file<<endl;	
	}
}


int main()
{
	print_value_from_json("file.json","id");
	print_value_from_json("file.json","version");
	print_value_from_json("file.json","image_height");
	print_value_from_json("file.json","image");
	print_value_from_json("file.json","image_width");
	return 0;
}

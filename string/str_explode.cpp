
vector<string> explode(const string&, char);


vector<string> explode(const string& s, char delim)
{
	vector<string> result;
	istringstream iss(s);

	for (string token; getline(iss, token, delim); )
	{
		result.push_back(move(token));
	}
	return result;
}

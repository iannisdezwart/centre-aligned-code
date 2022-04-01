#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		fprintf(stderr,
			"Usage: ./centre-align-code input.c output.c [ max_cols = 80 ]\n");
	}

	const char *input_file_name = argv[1];
	const char *output_file_name = argv[2];
	size_t max_cols = 80;

	if (argc > 3)
		max_cols = atoi(argv[3]);

	ifstream input_file_stream(input_file_name);
	ofstream output_file_stream(output_file_name);

	string line;
	string pad_str;

	while (getline(input_file_stream, line)) {
		size_t i = 0;

		while (i < line.size())
		{
			if (line[i] == ' ' || line[i] == '\t')
			{
				i++;
			}
			else break;
		}
		
		line = line.substr(i);

		size_t padding = 0;

		if (line.size() < max_cols)
			padding = (max_cols - line.size()) / 2;

		pad_str = string(padding, ' ');
		output_file_stream << pad_str << line << '\n';
	}
}

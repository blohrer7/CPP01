/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:56:32 by blohrer           #+#    #+#             */
/*   Updated: 2025/11/20 19:08:23 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string replaceAll(const std::string& content,
						const std::string& s1,
						const std::string& s2)
{
	// If s1 is empty, we don't touch the content (otherwise we'd loop forever)
	if (s1.empty())
		return content;

	std::string result;
	std::size_t pos = 0;

	while (true)
	{
		// Find next occurrence of s1 starting from pos
		std::size_t found = content.find(s1, pos);

		if (found == std::string::npos)
		{
			// No more matches: append the rest of the string and break
			result += content.substr(pos);
			break;
		}

		// Append everything before the found occurrence
		result += content.substr(pos, found - pos);

		// Append replacement string
		result += s2;

		// Move position after the found substring
		pos = found + s1.length();
	}

	return result;
}


int main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cerr << "./replace filename s1 s2" << std::endl;
		return(1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream in(filename);
	if(!in.is_open())
	{
		std::cerr << "Error: Could not open input file \"" << filename << "\"." << std::endl;
		return(1);
	}
	std::string line;
	std::string content;
	while(std::getline(in, line))
	{
		content += line;
		content += '\n';
	}
	in.close();

	std::string replaced = replaceAll(content, s1, s2);
	std::size_t pos = filename.rfind(".");
	if (pos != std::string::npos)
		filename = filename.substr(0, pos);

	std::string outName = filename + ".replace";

	std::ofstream out(outName);
	if(!out.is_open())
	{
		std::cerr << "Error: Could not create output file \"" << outName << "\"." << std::endl;
		return(1);
	}
	out << replaced;
	out.close();

	return(0);
}

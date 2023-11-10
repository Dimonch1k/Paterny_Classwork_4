#include "ProxyDocumentAccess.h"


string ProxyDocumentAccess::writeDocument()
{
	string keyWrite;
	cout << "\tInput write key: "; cin >> keyWrite;
	if (keyWrite == "write")
	{
		return document->write();
	}
	return "\tIncorrect key. The file is lock\n";
}

string ProxyDocumentAccess::readDocument()
{
	string keyRead;
	cout << "\tInput read key: "; cin >> keyRead;
	if (keyRead == "read")
	{
		return document->read();
	}
	return "\tIncorrect key. The file is lock\n";
}
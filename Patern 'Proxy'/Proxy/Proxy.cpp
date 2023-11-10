#include <iostream>
using namespace std;


#include "DocumentAccess.h"
#include "ProxyDocumentAccess.h"
#include "RealDocumentAccess.h"

int main()
{
	Document* document = new Document();

	DocumentAccess* lockAccess = new ProxyDocumentAccess(document);
	DocumentAccess* fullAccess = new RealDocumentAccess(document);

	cout << "Lock files:\n";
	cout << "\t\t" << lockAccess->writeDocument();
	cout << "\t\t" << lockAccess->readDocument();

	cout << "\nFull Access files: \n";
	cout << "\t" << fullAccess->writeDocument();
	cout << "\t" << fullAccess->readDocument() << "\n\n";
}
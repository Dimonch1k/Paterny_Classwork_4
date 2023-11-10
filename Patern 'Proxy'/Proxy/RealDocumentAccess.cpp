#include "RealDocumentAccess.h"


string RealDocumentAccess::writeDocument()
{
	return document->write();
}

string RealDocumentAccess::readDocument()
{
	return document->read();
}
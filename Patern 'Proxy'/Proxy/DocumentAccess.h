#pragma once
#include <iostream>
using namespace std;


#include "Document.h"
class DocumentAccess
{
private:
	Document* document;

public:

	virtual string writeDocument() = 0;
	virtual string readDocument() = 0;

	DocumentAccess() {}
	DocumentAccess(Document* document_) : document(document_) {}
};
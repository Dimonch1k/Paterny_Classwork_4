#pragma once
#include <iostream>
using namespace std;


#include "DocumentAccess.h"
#include "Document.h"
class RealDocumentAccess : public DocumentAccess
{
private:
	Document* document;

public:
	RealDocumentAccess(Document* document_) : document(document_) {}

	string writeDocument();
	string readDocument();
};
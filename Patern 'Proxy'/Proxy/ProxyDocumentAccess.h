#pragma once
#include <iostream>
using namespace std;

#include "Document.h"
#include "DocumentAccess.h"
class ProxyDocumentAccess : public DocumentAccess
{
private:
	Document* document;

public:
	ProxyDocumentAccess(Document* document_) : document(document_) {}

	string writeDocument() override;
	string readDocument() override;
};
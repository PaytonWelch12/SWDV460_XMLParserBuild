#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <xercesc/sax/HandlerBase.hpp>
#include <xercesc/util/XMLString.hpp>
#include <xercesc/util/PlatformUtils.hpp>

#include <iostream>

using namespace std;
using namespace xercesc;

int main (int argc, char* args[]) {


    XMLPlatformUtils::Initialize();
    XercesDOMParser* parser = new XercesDOMParser();
    parser->setValidationScheme(XercesDOMParser::Val_Always);
    const char* xmlFile = "books.xml";

    parser->parse(xmlFile);

    DOMDocument* xmlDoc = parser->getDocument();
    DOMElement* rootElement = xmlDoc->getDocumentElement();

    DOMNodeList* titles = xmlDoc->getElementsByTagName(XMLString::transcode("title"));


    for (XMLSize_t i = 0; i < titles->getLength(); i++) {
        DOMElement* titleElement = dynamic_cast<DOMElement*>(titles->item(i));
          if (titleElement) {
                char* name  = XMLString::transcode(titleElement->getTextContent());
                cout << name << endl;
                XMLString::release(&name);
            }
        }

    delete parser;

    return 0;
}

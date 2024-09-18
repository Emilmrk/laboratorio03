#include <string>
#include <vector>

using namespace std;

class HTMLGenerator {
public:
    string createTitle(const string& title) 
{ return ""; /* TODO */ }
    string createHeader(const string& header, int level) 
{ return ""; /* TODO */ }
    string createParagraph(const string& text)
{ return "<p>".text."<p>"; /* TODO */ }
    string createLink(const string& url, const string& text)
{ return "<a href=".url.">".text."<a>"; /* TODO */ }
    string createList(const vector<string>& items, bool ordered)
        {
        string listaC = "<ol>\n";
        for(string cadena: items){
                listaC = listaC."<li>".cadena."<li>\n";
        }
        listaC = listaC."<ol>";
        return ""; /* TODO */ }
        };

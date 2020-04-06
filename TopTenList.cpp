//Manages a list of top ten hyperlinks
#include <string>
#include <iostream>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;
using std::cout;
using std::endl;

TopTenList::TopTenList() {
    _list.resize(10);    
}

void TopTenList::display_forward() {
    for(u_int i = 0; i < 10; i++) {
        cout << i + 1 << ". <ahref=\"" <<_list[i].url << ">" << _list[i].text << "/a" << endl;
    }
}

void TopTenList::display_backward() {
        for(u_int i = 9; i >= 0; i--) {
        cout << i + 1 << ". <ahref=\"" <<_list[i].url << ">" << _list[i].text << "/a" << endl;
    }
}

void TopTenList::set_at(int index, Hyperlink link) {
    _list[index - 1] = link;
}

Hyperlink TopTenList::get(int index) {
    return _list.at(index - 1);
}



#                                          STL C++

**I. ITERATOR (BIẾN LẶP): **

-Trong C++ một biến lặp là một đối tượng bất kì, trỏ tới một số phần tử trong 1 phạm vi của các phần tử (mảng hoặc contrainer)

các toán tử so sánh:

* So sánh: “==” , “!=” giữa 2 iterator
* Gán: “=” giữa 2 iterator
* Cộng trừ: “+”,”-“ với hằng số và ”++”,”—“. 
*  Lấy giá trị: “*”.



ví dụ:

```;
//khai báo iterator 'it'

vector<int> ::iterator it;

//trỏ đến phần tử đầu tiên của vector
it = vector.begin();

//trỏ đến vector vị trí kết thúc (ko phải vị trí cuối cùng)
it = vector.end();

//khai báo iterator ngược "rit"
vector<int>:: reverse_iterator rit = vector.rbegin();

//duyệt theo iterator
for (it=v.begin();it!=v.end();it++)
cout<<<*it<<endl;

//duyệt iterator ngược
for (rit=v.rbegin();rit!=v.rend();rit++)
cout<<*rit<<" ";
```





**2. VECTOR**

Vector làm việc như một mảng động



```c++
//gọi tất cả các thư viện chuẩn của C++
#include<bits/stdc++.h>

//khai báo vector

vector<int> v;

int main()
{
    for(int i=1;i<=10;i++)
        v.push_back(i); // v = {1,2,3,4,5,6,7,8,9,10}
    
    cout<<v.front()<<endl; // in ra 1
    cout<<v.end()<<endl; // in ra 10
    coutt<<v.size()<<endl; // in ra 10
    
    v.push_back(9); //{1,2,3,4,5,6,7,8,9,10,9}
    
    
    v.clear(); // v = {}
    v.pop_back(); // xóa phần tử cuối mảng
    
    v.erase(v.begin()+1);//xóa phần tử đầu
    v.erase(v.begin(),v.begin()+2); //xóa ptu từ đầu đến ptu thứ 2
    
    
}
```





**3. Priority Queue**

-Priority Queue là một loại container adaptor được thiết kế để phần tử ở đầu luôn luôn lớn nhất





```c+
//khai báo priority queue với thứ tự các phần tử tăng dần từ đầu queue

priority_queue <int> pq; 

//các phần tử giảm dần từ đầu queue
 
priority_queue<int, vector<int>, greater<int> > p;




//các phép toán linh hoạt do người dùng tự định nghĩa

struct cmp{
 bool operator() (int a,int b) {return a<b;}
};
main() {
 priority_queue <int,vector<int>,cmp > q;
} 


-size: trả về kích thước hiện tại của priority queue. ĐPT O(1)
-empty: true nếu priority queue rỗng và ngược lại ĐPT O(1)
-push: đẩy vào pq. ĐPT O(logN).
-pop: xóa đỉnh queue //ĐPT O(logN).
-top: trả về ptu đỉnh queue ĐPT O(1)
```



**4. Set**

- Set là một loại associative containers để lưu trữ các phần tử không bị trùng lặp và các phần tử này chính là khóa (keys)

- Khi duyệt set theo iterator từ begin đến end, các phần tử của set sẽ tăng dần theo phép toán so sánh
- Set mặc định là từ nhỏ -> lớn
- Set được xây dựng giống cây nhị phân



```c++
//include<set>
set<int> s;
set<int, greater<int>> s;

//viết hàm so sánh
struct cmp
{
  bool operator() (int a,int b)
  {
      return a<b;
  }
};
```

- Size: trả về kích thước hiện tại của set. ĐPT O(1)
- empty : True nếu set rỗng và ngược lại. ĐPT O(1)   
- insert: Chèn phần tử vào set. ĐPT O(logN)
- erase: có 2 kiểu xóa, xóa theo iterator hoặc xóa theo khóa. ĐPT O(logN)
- clear: Xóa tất cả set. ĐPT O(n)
- swap: đổi 2 set cho nhau:  ĐPT O(n). 
- find: trả về iterator trỏ đến phần tử tìm kiếm. Nếu không tìm thấy iterator trỏ về "end" của set.  ĐPT O(logN)
- lower_bound : trả về iterator vị trí phần tử bé nhất mà lớn hơn khóa, nếu không tìm thấy trỏ về 'end' O(logN)
- upper_bound: trả về iterator đến vị trí phần tử bé nhất mà lớn hơn khóa..... 'end' O(logN)
- count  trả về số lần xuất hiện của khóa trong container, và 0 nếu không có. ĐPT O(logN)



```c++
#include <iostream>
#include <set>
using namespace std;
main() {
 set <int> s;
 set <int> ::iterator it;
 s.insert(9); // s={9}
 s.insert(5); // s={5,9}
 cout << *s.begin() << endl; //In ra 5
 s.insert(1); // s={1,5,9}
 cout << *s.begin() << endl; // In ra 1
    it=s.find(5);
 if (it==s.end()) cout << "Khong co trong container" << endl;
 else cout << "Co trong container" << endl;

 s.erase(it); // s={1,9}
 s.erase(1); // s={9}

 s.insert(3); // s={3,9}
 s.insert(4); // s={3,4,9}

 it=s.lower_bound(4);
 if (it==s.end()) cout << "Khong co phan tu nao trong set khong be hon 4" << endl;
 else cout << "Phan tu be nhat khong be hon 4 la " << *it << endl; // In ra 4

 it=s.lower_bound(10);
 if (it==s.end()) cout << "Khong co phan tu nao trong set khong be hon 10" << endl;
 else cout << "Phan tu be nhat khong be hon 10 la " << *it << endl; // Khong co ptu nao

 it=s.upper_bound(4);
 if (it==s.end()) cout << "Khong co phan tu nao trong set lon hon 4" << endl;
 else cout << "Phan tu be nhat lon hon 4 la " << *it << endl; // In ra 9

/* Duyet set */

 for (it=s.begin();it!=s.end();it++) {
 cout << *it << " ";
 }
 // In ra 3 4 9

 cout << endl;
 system("pause");
}
```



```c++
//Customize hàm lower_bound hay upper_bound

#include<iostream>
#include<set>
using namespace std;
int main()
{
    set <int, greater <int> > s;
    set <int, grater<int> >::iterator it;// phép toán so sánh là greater
    
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(9);
    it = s.lower_bound(5);
    cout<<*it<<endl; //In ra 4
    
    it=s.upper_bound(4);
    cout << *it << endl; // In ra 2 
    
}
```



**5. Multiset **

- Multiset giống như Set nhưng có thể chứa các khóa có giá trị giống nhau.
- Khai báo:  Giống như set



Các phép toán:

- Size: Trả về kích thước hiện tại của multiset ĐPT  O(1)

- empty: True nếu multiset rỗng và ngược lại. ĐPT O(1)

- insert: Chèn phần tử vào set. ĐPT O(logN)

- erase:

  xóa theo iterator ĐPT O(logN) 

  xóa theo khóa: xóa tất cả các phần tử bằng khóa trong multiset 

  ĐPT: O(logN) + số phần tử bị xóa. 

- find: Trả về iterator trỏ đến phần tử tìm kiếm. Nếu không tìm thấy iterator trỏ về "end" của set. ĐPT O(logN). Dù

  trong multiset có nhiều phần tử bằng khóa thì nó cũng chỉ iterator đến một phần tử

- lower_bound : trả về iterator đến vị trí phần tử bé nhất mà không bé hơn (lớn hơn hoặc bằng) khóa (dĩ nhiên là theo phép so sánh), nếu không tìm thấy trả về vị trí “end” của set. ĐPT O(logN).

- upper_bound: trả về iterator đến vị trí phần tử bé nhất mà lớn hơn khóa, nếu không tìm thấy trả về vị trí “end” của set.. ĐPT O(logN). 

- count : trả về số lần xuất hiện của khóa trong multiset. ĐPT O(logN) + số phần tử tìm được.





**6. MAP**

- Map là một loại associative container. Mỗi phần tử của map là sự kết hợp của khóa (key value) và ánh xạ của nó (mapped value). Cũng giống như set, trong map không chứa các khóa mang giá trị giống nhau. 

- Trong map, các khóa được sử dụng để xác định giá trị các phần tử. Kiểu của khóa và ánh xạ có thể khác nhau. 
-  Và cũng giống như set, các phần tử trong map được sắp xếp theo một trình tự nào đó theo cách so sánh. -
- Map được cài đặt bằng red-black tree (cây đỏ đen) 
-  một loại cây tìm kiếm nhị phân tự cân bằng. Mỗi phần tử của map lại được cài đặt theo kiểu pair (xem thêm ở thư viện utility). 





```c++
#include<map>
//kiểu dữ liệu 1 là khóa, kiểu dữ liệu 2 là giá trị của khóa
map<kiểu dữ liệu 1, kiểu dữ liệu 2>

sử dụng class so sánh:
Dạng 1
    struct cmp
    {
        bool operator()(char a,char b)
        {
            return a<b;
        }
    }
map<char, cmp> m;

-Truy cập đến giá trị của các phần tử trong map khi sử dụng iterator
Ví dụ ta đang có một iterator là it khai báo cho map thì:

(*it).first; //lấy giá trị khóa, kiểu_dữ_liệu_1
(*it).second; //lấy giá trị của khóa, kiểu_dữ_liệu_2
(*it) //lấy giá trị của phần tử mà iterator đang trỏ đến, kiểu pair


it->first; //giống như (*it).first
it->second; //giống như (*it).second
```



+Các phép toán

- size: trả về kích thước hiện tại của map. ĐPT (O1)
- empty: true nếu map rỗng, và ngược lại ĐPT(O1)

Truy nhập tới phần tử 

- operator [khóa]: nếu khóa đã có trong map thì hàm sẽ trả về giá trị mà khóa ánh xạ đến nếu chưa có thì sẽ thêm vào map khóa đó. O(logN)

chỉnh sửa

- insert: Chèn phần tử vào map. Chú ý: phần tử chèn vào phải ở kiểu "pair". ĐPT O(logN)

erase:

​     Xóa theo iterator ĐPT O(logN)

​     Xóa theo khóa: xóa khóa trong map. ĐPT O(logN)

- clear: xóa tất cả set. ĐPT O(n)



```c++
#include<iostream>
#include<map>
#include<vector>
using namespace std;
main()
{
    map<char, int > m;
    map<char, int> ::iterator it;
    m['a'] = 1;               // m={{'a',1}}
    m.insert(make_pair('b',2));          // m={{'a',1};{'b',2}}
    m.insert(pair<char,int> ('c',3)); // m={{'a',1};{'b',2};{'c',3}}
    
    cout<<m['b']<<endl; // In ra 2
    m['b']++;  //m={{'a',1};{'b',3};{'c',3}}
    
    it =  m.find('c');             // it point to key 'c'	
    cout<<it->first<<endl;          // In ra 'c'
    cout<<it->second<<endl;         // In ra 3
    
    m['e'] = 100; // //m={{'a',1};{'b',3};{'c',3};{'e',100}}
    
    
    it = m.lower_bound('d');      // it point to 'e'
    cout<<it->first<<endl;        //in ra e
    cout<<it->second<<endl;       //in ra 100
}
```





**II. THƯ VIỆN THUẬT TOÁN**



- next_permutation(): hoán vị tiếp theo. Hàm sẽ trả về 1 nếu có hoán vị tiếp theo, 0 nếu không có hoán vị tiếp theo



ví dụ:

```c++
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int myints = {1,2,3};
    cout<<"The 3! possible permutations with 3 elements:\n";
    do
    {
        cout<<myints[0]<<" "<<myints[1]<<" "<<myinst[2]<<endl;
    }
    while(next_permutation (myints,myints+3));
    return 0;
}
```



- prev_permution: ngược lại với next_permutation

- Sắp xếp: sort() sắp xếp đoạn phần tử theo một trình tự nào đó. Mặc định của sort là sử dụng operator <  hoặc ta có thể tự định nghĩa phép toán sắp xếp



```c++
#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;

bool myfunction(int i, int j)
{
    return i<j;
}
struct myclass
{
  bool operator() (int i, int j) {return (i>j);}  
} myobject;

int main () {
 int myints[] = {32,71,12,45,26,80,53,33};
 // using default comparison (operator <):
 sort (myints, myints+4); //(12 32 45 71)26 80 53 33
 // using function as comp
 sort (myints+4, myints+8, myfunction); // 12 32 45 71(26 33 53 80)
 for (int i=0;i<8;i++) cout << myints[i] << " ";
 cout << endl;
 // using object as comp
 sort (myints, myints+8, myobject); //(80 71 53 45 33 32 26 12)
 for (int i=0;i<8;i++) cout << myints[i] << " ";
 cout << endl;

 system("pause");
 return 0;
} 
```



- Binary_search:

Tìm kiếm xem khóa có trong đoạn cần tìm không. ("đoạn tìm kiếm phải được sắp xếp theo một trật tự nhất định. Nếu tìm được return true, ngược lại return false")

Dạng 1: binary_search(vị trí bắt đầu, vị trí kết thúc, khóa); 

Dạng 2: binary_search(vị trí bắt đầu, vị trí kết thúc, khóa, phép so sánh); 



```c++
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool myfunction (int i,int j) { return (i<j); } 
int main () {
    
 int myints[] = {1,2,3,4,5,4,3,2,1};
 vector<int> v(myints,myints+9); // 1 2 3 4 5 4 3 2 1
 // Sử dụng toán tử so sánh mặc định
 sort (v.begin(), v.end());
 cout << "looking for a 3... ";
 if (binary_search (v.begin(), v.end(), 3))
 cout << "found!\n"; else cout << "not found.\n";
 // sử dụng hàm so sánh tự định nghĩa:
 sort (v.begin(), v.end(), myfunction);
 cout << "looking for a 6... ";
 if (binary_search (v.begin(), v.end(), 6, myfunction))
 cout << "found!\n"; else cout << "not found.\n";
 return 0;
} 

```



- lower_bound

  Hàm lower_bound và upper_bound tương tự như ở trong container set hay map. 

  Trả về iterator đến phần tử đầu tiên trong nửa đoạn [first,last] mà không bé hơn khóa tìm kiếm. -

  Dạng 1: lower_bound( đầu , cuối , khóa ); 

  Dạng 2: lower_bound( đầu , cuối , khóa , phép toán so sánh của đoạn)   

- upper_bound

Trả về iterator đến phần tử đầu tiên trong nửa đoạn [first,last] mà lớn hơn khóa tìm kiếm.

 Dạng 1: upper_bound ( đầu , cuối , khóa ); 

 Dạng 2: upper_bound ( đầu , cuối , khóa, phép toán so sánh của đoạn) 



```c++
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
 int myints[] = {10,20,30,30,20,10,10,20};
 vector<int> v(myints,myints+8); // 10 20 30 30 20 10 10 20
 vector<int>::iterator low,up; 
 sort (v.begin(), v.end()); // 10 10 10 20 20 20 30 30
 low=lower_bound (v.begin(), v.end(), 20); // ^
 up= upper_bound (v.begin(), v.end(), 20); // ^
 cout << "lower_bound at position " << int(low- v.begin()) << endl;
 cout << "upper_bound at position " << int(up - v.begin()) << endl;
 return 0;
} 

//lower_bound at position 3
//upper_bound at position 6
```





**III. THƯ VIỆN STRING**

- String là một kiểu kí tự đặc biệt của container, thiết kế đặc biệt để hoạt động với các chuỗi kí tự

- Khai báo: #include<string>
- Iterator: Tương tự trong container, string cũng hỗ trợ các iterator như begin, end, rbegin, rend với ý nghĩa như trước
- Nhập xuất string:
  + Sử dụng toán tử >>: tương tự C. Nhập đến khi gặp dấu cách.
  + Sử dụng getline: giống như gets trong C. Nhập cả một dòng kí tự (chứa cả dấu cách nếu có) cho string.
  + Xuất string: sử dụng toán tử << như bình thường
- Capacity:
  + size : trả về độ dài của string
  + length: trả về độ dài của string
  + clear: xóa string
  + empty: return true nếu string rỗng, false nếu ngược lại
- Chỉnh sửa:
  + push_back: chèn kí tự vào sau string
  + insert(n,x): chèn x vào string ở trước vị trí n. x có thể là string, char...
  + erase(pos,n): xóa khỏi string 'n' kí tự bắt đầu từ vị trí 'pos'/
  + erase(iterator): xóa khỏi string phần tử ở vị trí iterator.
  + replace (pos, size, s1): thay thế string từ vị trí 'pos'. số phần tử thay thế là 'size' và thay bằng xâu s1.
  + swap (string_cần_đổi): đổi giá trị 2 xâu cho nhau.
  + c_str : chuyển xâu từ dạng string trong C++ sang string trong C.
  + substr (pos,length): return string được trích ra từ vị trí thứ “pos”, và trích ra “length” kí tự. 
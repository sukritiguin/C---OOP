/*
** Friend Class

TODO 1. **Access to Private and Protected Members:**
   - A friend class in C++ has access to the private and protected members of the class that declares it as a friend.

TODO 2. **Declared using `friend` Keyword:**
   - A friend class is declared using the `friend` keyword in the class that wants to grant access.

TODO 3. **Bidirectional Friendship:**
   - Friendship is not mutual; if class A is a friend of class B, it doesn't automatically mean that class B is a friend of class A.

TODO 4. **Limited Encapsulation Violation:**
   - While friend classes allow access to private members, their use should be limited to cases where encapsulation violation is justified.

TODO 5. **Friendship is Not Inherited:**
   - If a class C is derived from a class B, and class B is a friend of class A, class C doesn't automatically become a friend of class A.

TODO 6. **Declaration Inside the Class:**
   - The declaration of a friend class is usually placed in the private or protected section of the class that wants to grant access.

TODO 7. **Friendship Doesn't Imply Member Status:**
   - Being a friend doesn't make a class a member of another class; it only allows access to private and protected members.

TODO 8. **Use Cases:**
   - Friend classes can be useful in scenarios where certain classes need special access to the internals of another class for collaboration or optimization.

TODO 9. **Declaration in Another Class:**
   - The friend class is declared in another class to indicate the specific class that is granted access.

TODO 10. **Encourages Caution:**
    - The use of friend classes should be approached with caution to maintain the integrity of encapsulation principles in object-oriented design.

*/



#include<bits/stdc++.h>
using namespace std;

class Base{
   private:
   int data;
   friend class FriendClass;
};


class FriendClass{
   public:
   void setter(Base& B, int data){
      B.data = data;
   }
   void getter(Base& B){
      cout << "Date : " << B.data << "\n";
   }
};


int main(){
   Base B;
   FriendClass FC;
   FC.setter(B, 10);
   FC.getter(B);


   return 0;
}
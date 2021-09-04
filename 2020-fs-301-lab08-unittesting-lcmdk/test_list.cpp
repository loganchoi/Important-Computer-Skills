#include "catch.hpp"
#include "list.h"


template class List <int>;

TEST_CASE("LIST SIZING", "[LIST]")
{
   List<int> l;

   SECTION("Constructor Test:A list with nothing amd should have cell = null")
   {
      CHECK(l.length() == 1);
      CHECK(l.empty() == true);
   }

   SECTION("Copy Constructor Test: Make sure it carries the length and capacity at least")
   {
      List<int> c(l);

      CHECK(c.length() == l.length());
      CHECK(l.empty() == c.empty());//This does the same thing as above essentially
   }

   for (int i = 0; i<10;i++)
   {
      l.append(i);
   }

   SECTION("ADD ELEMENTS TEST: I'm adding elements and the size should change accordingly, Tests Length and Empty Functions")
   {
      CHECK(l.length()==10);
      CHECK(l.empty == false);
   }

   SECTION("Copy Constructor Test 2: make sure it carries thel ength and capacity at least")
   {
      List <int> c(l);
      CHECK(c.length() == l.length());
      CHECK(l.empty() == c.empty());//This does the same thing as above essentially
   }
}


TEST_CASE("List Elements","[LIST]")
{
   List<int> l;
   for (int i = 0; i < 10; i++)
   {
      l.append(i);
   }

   SECTION("You can access elements, and shows Append works")
   {
      Cell<T> * temp = cell;
      for (int i = 0; i <10; i++)
      {
        CHECK(temp->elem == i);
        temp = temp->next;
      }
   }

   l.prepend(200);
   SECTION("The new head should hold 200, and shows Prepend works")
   {
      CHECK(l.head() == 200);
   }

   SECTION("TAIL TEST: Test to make sure it doesnt have the head element")
   {
      List<int> t = l.tail();
      CHECK(t.length() == l.length() - 1);
      CHECK(t.head()->elem == l.head()->next->elem);
   }

   SECTION("POP TEST:Test the size and head")
   {
      List <int> p(l);
      p.pop();
      CHECK(p.length() == l.length()-1);
   }
}

TEST_CASE("EDGE CASES", "[LIST]")
{
   List <int> l;
   CHECK(l.head(),"empty list");
   CHECK(l.tail(),"empty list");

}










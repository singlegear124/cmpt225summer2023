// Wordlist.h

#pragma once

/////////////////////////////////////////////////////////////////////////
//
// Student Info
// ------------
//
// Name : <Michael Chen>
// St.# : <301395680>
// Email: <mjc25@sfu.ca>
//
//
// Statement of Originality
// ------------------------
//
// All the code and comments below are my own original work. For any non-
// original work, I have provided citations in the comments with enough
// detail so that someone can see the exact source and extent of the
// borrowed work.
//
// In addition, I have not shared this work with anyone else, and I have
// not seen solutions from other students, tutors, websites, books,
// etc.
//
/////////////////////////////////////////////////////////////////////////

//
// Do not use any other #includes
//
#include "Wordlist_base.h"
#include <cassert>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class Wordlist : public Wordlist_base
{
    //
    // Use this Node to implement the singly-linked list for the word list. You
    // can *add* extra variables/methods/features to this struct if you like,
    // but you must keep its name the same, and also keep the word, count, and
    // next variables as defined.
    //
    struct Node
    {
        string word;
        int count;
        Node *next;
    };

    Node* head = nullptr;
public:
    bool empty() const {
        return head == nullptr;         //check if head is null
    }
    void pop_front() {
        assert(!empty());               //make sure not empty
        //asssert(head != nullptr);     //does the same thing
        Node* temp_ptr = head;
        head = head->next;
        delete temp_ptr;
    }

    Wordlist_base::~Wordlist_base () {
        while (!empty()) {
            pop_front();
        }
    }    
   
    int Wordlist_base::get_count (const string &w) const = 0 {
        int accumulator = 0;
        for (Node* p = head; p != nullptr; p = p->next) {
            if (w == p->word) {
                accumulator += 1;
            }
        }
        return accumulator;
    }

    int Wordlist_base::num_different_words() const = 0 {

    }

    int Wordlist_base::total_words() const = 0 {
    
    }

    bool Wordlist_base::is_sorted() const = 0 {

    }

    string Wordlist_base::most_frequent() const = 0 {

    }

    int Wordlist_base::num_singletons() const = 0 {
    
    }

    void Wordlist_base::add_word(const string &w) = 0 {
    
    }

    void Wordlist_base::print_words() const = 0 {

    }
    

    // ... write a default constructor that creates an empty Wordlist ...
    //

}; // class Wordlist

//
// ... you can write helper functions here (or before Wordlist) if you need them
// ...
//

//
// ... write functions to test every method of Wordlist ...
//

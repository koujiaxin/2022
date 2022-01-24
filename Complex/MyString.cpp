#include<iostream>
#include "MyString.h"
#pragma warning(disable : 4996)  

inline String::String(const char* cstr)
{
    if (cstr) {
        m_data = new char[strlen(cstr) + 1];
        strcpy(m_data, cstr);
    }
    else { //  Uninitialized
        m_data = new char[1];
        *m_data = '\0';
    }
}

inline String::String(const String& str)
{
    m_data = new char[strlen(str.m_data) + 1];
    strcpy(m_data, str.m_data);
}

inline String& String::operator=(const String& str)
{
    if (this == &str) // ������Ҹ�ֵ
        return *this;
    delete[] m_data; // ��ɾ��ԭ����ֵ
    m_data = new char[strlen(str.m_data) + 1];
    strcpy(m_data, str.m_data);
    return *this;
}


inline String::~String() 
{
    delete[] m_data;
}

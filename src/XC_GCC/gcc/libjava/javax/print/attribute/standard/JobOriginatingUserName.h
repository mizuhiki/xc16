
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_JobOriginatingUserName__
#define __javax_print_attribute_standard_JobOriginatingUserName__

#pragma interface

#include <javax/print/attribute/TextSyntax.h>
extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
        namespace standard
        {
            class JobOriginatingUserName;
        }
      }
    }
  }
}

class javax::print::attribute::standard::JobOriginatingUserName : public ::javax::print::attribute::TextSyntax
{

public:
  JobOriginatingUserName(::java::lang::String *, ::java::util::Locale *);
  jboolean equals(::java::lang::Object *);
  ::java::lang::Class * getCategory();
  ::java::lang::String * getName();
private:
  static const jlong serialVersionUID = -8052537926362933477LL;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_print_attribute_standard_JobOriginatingUserName__

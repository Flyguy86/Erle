//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: AddTwoInts_Response_Dcps.cpp
//  Source: /home/erle/ros2_ws/build/example_interfaces/rosidl_typesupport_opensplice_cpp/example_interfaces/srv/dds_opensplice/AddTwoInts_Response_Dcps.idl
//  Generated: Sat Nov  7 22:57:06 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "AddTwoInts_Response_Dcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < example_interfaces::srv::dds_::AddTwoInts_Response_, struct AddTwoInts_Response_Seq_uniq_>;
#endif

const char * example_interfaces::srv::dds_::AddTwoInts_Response_TypeSupportInterface::_local_id = "IDL:example_interfaces/srv/dds_/AddTwoInts_Response_TypeSupportInterface:1.0";

example_interfaces::srv::dds_::AddTwoInts_Response_TypeSupportInterface_ptr example_interfaces::srv::dds_::AddTwoInts_Response_TypeSupportInterface::_duplicate (example_interfaces::srv::dds_::AddTwoInts_Response_TypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean example_interfaces::srv::dds_::AddTwoInts_Response_TypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, example_interfaces::srv::dds_::AddTwoInts_Response_TypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

example_interfaces::srv::dds_::AddTwoInts_Response_TypeSupportInterface_ptr example_interfaces::srv::dds_::AddTwoInts_Response_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   example_interfaces::srv::dds_::AddTwoInts_Response_TypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (example_interfaces::srv::dds_::AddTwoInts_Response_TypeSupportInterface::_local_id))
   {
      result = dynamic_cast < example_interfaces::srv::dds_::AddTwoInts_Response_TypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

example_interfaces::srv::dds_::AddTwoInts_Response_TypeSupportInterface_ptr example_interfaces::srv::dds_::AddTwoInts_Response_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   example_interfaces::srv::dds_::AddTwoInts_Response_TypeSupportInterface_ptr result;
   result = dynamic_cast < example_interfaces::srv::dds_::AddTwoInts_Response_TypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * example_interfaces::srv::dds_::AddTwoInts_Response_DataWriter::_local_id = "IDL:example_interfaces/srv/dds_/AddTwoInts_Response_DataWriter:1.0";

example_interfaces::srv::dds_::AddTwoInts_Response_DataWriter_ptr example_interfaces::srv::dds_::AddTwoInts_Response_DataWriter::_duplicate (example_interfaces::srv::dds_::AddTwoInts_Response_DataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean example_interfaces::srv::dds_::AddTwoInts_Response_DataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, example_interfaces::srv::dds_::AddTwoInts_Response_DataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

example_interfaces::srv::dds_::AddTwoInts_Response_DataWriter_ptr example_interfaces::srv::dds_::AddTwoInts_Response_DataWriter::_narrow (DDS::Object_ptr p)
{
   example_interfaces::srv::dds_::AddTwoInts_Response_DataWriter_ptr result = NULL;
   if (p && p->_is_a (example_interfaces::srv::dds_::AddTwoInts_Response_DataWriter::_local_id))
   {
      result = dynamic_cast < example_interfaces::srv::dds_::AddTwoInts_Response_DataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

example_interfaces::srv::dds_::AddTwoInts_Response_DataWriter_ptr example_interfaces::srv::dds_::AddTwoInts_Response_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   example_interfaces::srv::dds_::AddTwoInts_Response_DataWriter_ptr result;
   result = dynamic_cast < example_interfaces::srv::dds_::AddTwoInts_Response_DataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * example_interfaces::srv::dds_::AddTwoInts_Response_DataReader::_local_id = "IDL:example_interfaces/srv/dds_/AddTwoInts_Response_DataReader:1.0";

example_interfaces::srv::dds_::AddTwoInts_Response_DataReader_ptr example_interfaces::srv::dds_::AddTwoInts_Response_DataReader::_duplicate (example_interfaces::srv::dds_::AddTwoInts_Response_DataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean example_interfaces::srv::dds_::AddTwoInts_Response_DataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, example_interfaces::srv::dds_::AddTwoInts_Response_DataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

example_interfaces::srv::dds_::AddTwoInts_Response_DataReader_ptr example_interfaces::srv::dds_::AddTwoInts_Response_DataReader::_narrow (DDS::Object_ptr p)
{
   example_interfaces::srv::dds_::AddTwoInts_Response_DataReader_ptr result = NULL;
   if (p && p->_is_a (example_interfaces::srv::dds_::AddTwoInts_Response_DataReader::_local_id))
   {
      result = dynamic_cast < example_interfaces::srv::dds_::AddTwoInts_Response_DataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

example_interfaces::srv::dds_::AddTwoInts_Response_DataReader_ptr example_interfaces::srv::dds_::AddTwoInts_Response_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   example_interfaces::srv::dds_::AddTwoInts_Response_DataReader_ptr result;
   result = dynamic_cast < example_interfaces::srv::dds_::AddTwoInts_Response_DataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * example_interfaces::srv::dds_::AddTwoInts_Response_DataReaderView::_local_id = "IDL:example_interfaces/srv/dds_/AddTwoInts_Response_DataReaderView:1.0";

example_interfaces::srv::dds_::AddTwoInts_Response_DataReaderView_ptr example_interfaces::srv::dds_::AddTwoInts_Response_DataReaderView::_duplicate (example_interfaces::srv::dds_::AddTwoInts_Response_DataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean example_interfaces::srv::dds_::AddTwoInts_Response_DataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, example_interfaces::srv::dds_::AddTwoInts_Response_DataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

example_interfaces::srv::dds_::AddTwoInts_Response_DataReaderView_ptr example_interfaces::srv::dds_::AddTwoInts_Response_DataReaderView::_narrow (DDS::Object_ptr p)
{
   example_interfaces::srv::dds_::AddTwoInts_Response_DataReaderView_ptr result = NULL;
   if (p && p->_is_a (example_interfaces::srv::dds_::AddTwoInts_Response_DataReaderView::_local_id))
   {
      result = dynamic_cast < example_interfaces::srv::dds_::AddTwoInts_Response_DataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

example_interfaces::srv::dds_::AddTwoInts_Response_DataReaderView_ptr example_interfaces::srv::dds_::AddTwoInts_Response_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   example_interfaces::srv::dds_::AddTwoInts_Response_DataReaderView_ptr result;
   result = dynamic_cast < example_interfaces::srv::dds_::AddTwoInts_Response_DataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}




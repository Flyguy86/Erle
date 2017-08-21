//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Range_Dcps.cpp
//  Source: /home/erle/ros2_ws/build/sensor_msgs/rosidl_typesupport_opensplice_cpp/sensor_msgs/msg/dds_opensplice/Range_Dcps.idl
//  Generated: Sun Nov  8 00:04:32 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "Range_Dcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < sensor_msgs::msg::dds_::Range_, struct Range_Seq_uniq_>;
#endif

const char * sensor_msgs::msg::dds_::Range_TypeSupportInterface::_local_id = "IDL:sensor_msgs/msg/dds_/Range_TypeSupportInterface:1.0";

sensor_msgs::msg::dds_::Range_TypeSupportInterface_ptr sensor_msgs::msg::dds_::Range_TypeSupportInterface::_duplicate (sensor_msgs::msg::dds_::Range_TypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean sensor_msgs::msg::dds_::Range_TypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, sensor_msgs::msg::dds_::Range_TypeSupportInterface::_local_id) == 0)
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

sensor_msgs::msg::dds_::Range_TypeSupportInterface_ptr sensor_msgs::msg::dds_::Range_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   sensor_msgs::msg::dds_::Range_TypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (sensor_msgs::msg::dds_::Range_TypeSupportInterface::_local_id))
   {
      result = dynamic_cast < sensor_msgs::msg::dds_::Range_TypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

sensor_msgs::msg::dds_::Range_TypeSupportInterface_ptr sensor_msgs::msg::dds_::Range_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   sensor_msgs::msg::dds_::Range_TypeSupportInterface_ptr result;
   result = dynamic_cast < sensor_msgs::msg::dds_::Range_TypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * sensor_msgs::msg::dds_::Range_DataWriter::_local_id = "IDL:sensor_msgs/msg/dds_/Range_DataWriter:1.0";

sensor_msgs::msg::dds_::Range_DataWriter_ptr sensor_msgs::msg::dds_::Range_DataWriter::_duplicate (sensor_msgs::msg::dds_::Range_DataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean sensor_msgs::msg::dds_::Range_DataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, sensor_msgs::msg::dds_::Range_DataWriter::_local_id) == 0)
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

sensor_msgs::msg::dds_::Range_DataWriter_ptr sensor_msgs::msg::dds_::Range_DataWriter::_narrow (DDS::Object_ptr p)
{
   sensor_msgs::msg::dds_::Range_DataWriter_ptr result = NULL;
   if (p && p->_is_a (sensor_msgs::msg::dds_::Range_DataWriter::_local_id))
   {
      result = dynamic_cast < sensor_msgs::msg::dds_::Range_DataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

sensor_msgs::msg::dds_::Range_DataWriter_ptr sensor_msgs::msg::dds_::Range_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   sensor_msgs::msg::dds_::Range_DataWriter_ptr result;
   result = dynamic_cast < sensor_msgs::msg::dds_::Range_DataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * sensor_msgs::msg::dds_::Range_DataReader::_local_id = "IDL:sensor_msgs/msg/dds_/Range_DataReader:1.0";

sensor_msgs::msg::dds_::Range_DataReader_ptr sensor_msgs::msg::dds_::Range_DataReader::_duplicate (sensor_msgs::msg::dds_::Range_DataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean sensor_msgs::msg::dds_::Range_DataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, sensor_msgs::msg::dds_::Range_DataReader::_local_id) == 0)
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

sensor_msgs::msg::dds_::Range_DataReader_ptr sensor_msgs::msg::dds_::Range_DataReader::_narrow (DDS::Object_ptr p)
{
   sensor_msgs::msg::dds_::Range_DataReader_ptr result = NULL;
   if (p && p->_is_a (sensor_msgs::msg::dds_::Range_DataReader::_local_id))
   {
      result = dynamic_cast < sensor_msgs::msg::dds_::Range_DataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

sensor_msgs::msg::dds_::Range_DataReader_ptr sensor_msgs::msg::dds_::Range_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   sensor_msgs::msg::dds_::Range_DataReader_ptr result;
   result = dynamic_cast < sensor_msgs::msg::dds_::Range_DataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * sensor_msgs::msg::dds_::Range_DataReaderView::_local_id = "IDL:sensor_msgs/msg/dds_/Range_DataReaderView:1.0";

sensor_msgs::msg::dds_::Range_DataReaderView_ptr sensor_msgs::msg::dds_::Range_DataReaderView::_duplicate (sensor_msgs::msg::dds_::Range_DataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean sensor_msgs::msg::dds_::Range_DataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, sensor_msgs::msg::dds_::Range_DataReaderView::_local_id) == 0)
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

sensor_msgs::msg::dds_::Range_DataReaderView_ptr sensor_msgs::msg::dds_::Range_DataReaderView::_narrow (DDS::Object_ptr p)
{
   sensor_msgs::msg::dds_::Range_DataReaderView_ptr result = NULL;
   if (p && p->_is_a (sensor_msgs::msg::dds_::Range_DataReaderView::_local_id))
   {
      result = dynamic_cast < sensor_msgs::msg::dds_::Range_DataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

sensor_msgs::msg::dds_::Range_DataReaderView_ptr sensor_msgs::msg::dds_::Range_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   sensor_msgs::msg::dds_::Range_DataReaderView_ptr result;
   result = dynamic_cast < sensor_msgs::msg::dds_::Range_DataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}




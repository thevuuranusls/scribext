/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "scribe_types.h"

#include <algorithm>

namespace scribe {
    namespace thrift {

        int _kResultCodeValues[] = {
            OK,
            TRY_LATER
        };
        const char* _kResultCodeNames[] = {
            "OK",
            "TRY_LATER"
        };
        const std::map<int, const char*> _ResultCode_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kResultCodeValues, _kResultCodeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

        const char* LogEntry::ascii_fingerprint = "07A9615F837F7D0A952B595DD3020972";
        const uint8_t LogEntry::binary_fingerprint[16] = {0x07, 0xA9, 0x61, 0x5F, 0x83, 0x7F, 0x7D, 0x0A, 0x95, 0x2B, 0x59, 0x5D, 0xD3, 0x02, 0x09, 0x72};

        uint32_t LogEntry::read(::apache::thrift::protocol::TProtocol* iprot) {

            uint32_t xfer = 0;
            std::string fname;
            ::apache::thrift::protocol::TType ftype;
            int16_t fid;

            xfer += iprot->readStructBegin(fname);

            using ::apache::thrift::protocol::TProtocolException;


            while (true) {
                xfer += iprot->readFieldBegin(fname, ftype, fid);
                if (ftype == ::apache::thrift::protocol::T_STOP) {
                    break;
                }
                switch (fid) {
                    case 1:
                        if (ftype == ::apache::thrift::protocol::T_STRING) {
                            xfer += iprot->readString(this->category);
                            this->__isset.category = true;
                        } else {
                            xfer += iprot->skip(ftype);
                        }
                        break;
                    case 2:
                        if (ftype == ::apache::thrift::protocol::T_STRING) {
                            xfer += iprot->readString(this->message);
                            this->__isset.message = true;
                        } else {
                            xfer += iprot->skip(ftype);
                        }
                        break;
                    default:
                        xfer += iprot->skip(ftype);
                        break;
                }
                xfer += iprot->readFieldEnd();
            }

            xfer += iprot->readStructEnd();

            return xfer;
        }

        uint32_t LogEntry::write(::apache::thrift::protocol::TProtocol* oprot) const {
            uint32_t xfer = 0;
            xfer += oprot->writeStructBegin("LogEntry");

            xfer += oprot->writeFieldBegin("category", ::apache::thrift::protocol::T_STRING, 1);
            xfer += oprot->writeString(this->category);
            xfer += oprot->writeFieldEnd();

            xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 2);
            xfer += oprot->writeString(this->message);
            xfer += oprot->writeFieldEnd();

            xfer += oprot->writeFieldStop();
            xfer += oprot->writeStructEnd();
            return xfer;
        }

        void swap(LogEntry &a, LogEntry &b) {
            using ::std::swap;
            swap(a.category, b.category);
            swap(a.message, b.message);
            swap(a.__isset, b.__isset);
        }

    }
} // namespace

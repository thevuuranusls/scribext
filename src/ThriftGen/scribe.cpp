/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "scribe.h"

namespace scribe {
    namespace thrift {

        uint32_t scribe_Log_args::read(::apache::thrift::protocol::TProtocol* iprot) {

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
                        if (ftype == ::apache::thrift::protocol::T_LIST) {
                            {
                                this->messages.clear();
                                uint32_t _size0;
                                ::apache::thrift::protocol::TType _etype3;
                                xfer += iprot->readListBegin(_etype3, _size0);
                                this->messages.resize(_size0);
                                uint32_t _i4;
                                for (_i4 = 0; _i4 < _size0; ++_i4) {
                                    xfer += this->messages[_i4].read(iprot);
                                }
                                xfer += iprot->readListEnd();
                            }
                            this->__isset.messages = true;
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

        uint32_t scribe_Log_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
            uint32_t xfer = 0;
            xfer += oprot->writeStructBegin("scribe_Log_args");

            xfer += oprot->writeFieldBegin("messages", ::apache::thrift::protocol::T_LIST, 1);
            {
                xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t> (this->messages.size()));
                std::vector<LogEntry> ::const_iterator _iter5;
                for (_iter5 = this->messages.begin(); _iter5 != this->messages.end(); ++_iter5) {
                    xfer += (*_iter5).write(oprot);
                }
                xfer += oprot->writeListEnd();
            }
            xfer += oprot->writeFieldEnd();

            xfer += oprot->writeFieldStop();
            xfer += oprot->writeStructEnd();
            return xfer;
        }

        uint32_t scribe_Log_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
            uint32_t xfer = 0;
            xfer += oprot->writeStructBegin("scribe_Log_pargs");

            xfer += oprot->writeFieldBegin("messages", ::apache::thrift::protocol::T_LIST, 1);
            {
                xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t> ((*(this->messages)).size()));
                std::vector<LogEntry> ::const_iterator _iter6;
                for (_iter6 = (*(this->messages)).begin(); _iter6 != (*(this->messages)).end(); ++_iter6) {
                    xfer += (*_iter6).write(oprot);
                }
                xfer += oprot->writeListEnd();
            }
            xfer += oprot->writeFieldEnd();

            xfer += oprot->writeFieldStop();
            xfer += oprot->writeStructEnd();
            return xfer;
        }

        uint32_t scribe_Log_result::read(::apache::thrift::protocol::TProtocol* iprot) {

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
                    case 0:
                        if (ftype == ::apache::thrift::protocol::T_I32) {
                            int32_t ecast7;
                            xfer += iprot->readI32(ecast7);
                            this->success = (ResultCode) ecast7;
                            this->__isset.success = true;
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

        uint32_t scribe_Log_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

            uint32_t xfer = 0;

            xfer += oprot->writeStructBegin("scribe_Log_result");

            if (this->__isset.success) {
                xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_I32, 0);
                xfer += oprot->writeI32((int32_t)this->success);
                xfer += oprot->writeFieldEnd();
            }
            xfer += oprot->writeFieldStop();
            xfer += oprot->writeStructEnd();
            return xfer;
        }

        uint32_t scribe_Log_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

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
                    case 0:
                        if (ftype == ::apache::thrift::protocol::T_I32) {
                            int32_t ecast8;
                            xfer += iprot->readI32(ecast8);
                            (*(this->success)) = (ResultCode) ecast8;
                            this->__isset.success = true;
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

        uint32_t scribe_LogAndForget_args::read(::apache::thrift::protocol::TProtocol* iprot) {

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
                        if (ftype == ::apache::thrift::protocol::T_LIST) {
                            {
                                this->messages.clear();
                                uint32_t _size9;
                                ::apache::thrift::protocol::TType _etype12;
                                xfer += iprot->readListBegin(_etype12, _size9);
                                this->messages.resize(_size9);
                                uint32_t _i13;
                                for (_i13 = 0; _i13 < _size9; ++_i13) {
                                    xfer += this->messages[_i13].read(iprot);
                                }
                                xfer += iprot->readListEnd();
                            }
                            this->__isset.messages = true;
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

        uint32_t scribe_LogAndForget_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
            uint32_t xfer = 0;
            xfer += oprot->writeStructBegin("scribe_LogAndForget_args");

            xfer += oprot->writeFieldBegin("messages", ::apache::thrift::protocol::T_LIST, 1);
            {
                xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t> (this->messages.size()));
                std::vector<LogEntry> ::const_iterator _iter14;
                for (_iter14 = this->messages.begin(); _iter14 != this->messages.end(); ++_iter14) {
                    xfer += (*_iter14).write(oprot);
                }
                xfer += oprot->writeListEnd();
            }
            xfer += oprot->writeFieldEnd();

            xfer += oprot->writeFieldStop();
            xfer += oprot->writeStructEnd();
            return xfer;
        }

        uint32_t scribe_LogAndForget_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
            uint32_t xfer = 0;
            xfer += oprot->writeStructBegin("scribe_LogAndForget_pargs");

            xfer += oprot->writeFieldBegin("messages", ::apache::thrift::protocol::T_LIST, 1);
            {
                xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t> ((*(this->messages)).size()));
                std::vector<LogEntry> ::const_iterator _iter15;
                for (_iter15 = (*(this->messages)).begin(); _iter15 != (*(this->messages)).end(); ++_iter15) {
                    xfer += (*_iter15).write(oprot);
                }
                xfer += oprot->writeListEnd();
            }
            xfer += oprot->writeFieldEnd();

            xfer += oprot->writeFieldStop();
            xfer += oprot->writeStructEnd();
            return xfer;
        }

        ResultCode scribeClient::Log(const std::vector<LogEntry> & messages) {
            send_Log(messages);
            return recv_Log();
        }

        void scribeClient::send_Log(const std::vector<LogEntry> & messages) {
            int32_t cseqid = 0;
            oprot_->writeMessageBegin("Log", ::apache::thrift::protocol::T_CALL, cseqid);

            scribe_Log_pargs args;
            args.messages = &messages;
            args.write(oprot_);

            oprot_->writeMessageEnd();
            oprot_->getTransport()->writeEnd();
            oprot_->getTransport()->flush();
        }

        ResultCode scribeClient::recv_Log() {

            int32_t rseqid = 0;
            std::string fname;
            ::apache::thrift::protocol::TMessageType mtype;

            iprot_->readMessageBegin(fname, mtype, rseqid);
            if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
                ::apache::thrift::TApplicationException x;
                x.read(iprot_);
                iprot_->readMessageEnd();
                iprot_->getTransport()->readEnd();
                throw x;
            }
            if (mtype != ::apache::thrift::protocol::T_REPLY) {
                iprot_->skip(::apache::thrift::protocol::T_STRUCT);
                iprot_->readMessageEnd();
                iprot_->getTransport()->readEnd();
            }
            if (fname.compare("Log") != 0) {
                iprot_->skip(::apache::thrift::protocol::T_STRUCT);
                iprot_->readMessageEnd();
                iprot_->getTransport()->readEnd();
            }
            ResultCode _return;
            scribe_Log_presult result;
            result.success = &_return;
            result.read(iprot_);
            iprot_->readMessageEnd();
            iprot_->getTransport()->readEnd();

            if (result.__isset.success) {
                return _return;
            }
            throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "Log failed: unknown result");
        }

        void scribeClient::LogAndForget(const std::vector<LogEntry> & messages) {
            send_LogAndForget(messages);
        }

        void scribeClient::send_LogAndForget(const std::vector<LogEntry> & messages) {
            int32_t cseqid = 0;
            oprot_->writeMessageBegin("LogAndForget", ::apache::thrift::protocol::T_CALL, cseqid);

            scribe_LogAndForget_pargs args;
            args.messages = &messages;
            args.write(oprot_);

            oprot_->writeMessageEnd();
            oprot_->getTransport()->writeEnd();
            oprot_->getTransport()->flush();
        }

        bool scribeProcessor::dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) {
            ProcessMap::iterator pfn;
            pfn = processMap_.find(fname);
            if (pfn == processMap_.end()) {
                return ::facebook::fb303::FacebookServiceProcessor::dispatchCall(iprot, oprot, fname, seqid, callContext);
            }
            (this->*(pfn->second))(seqid, iprot, oprot, callContext);
            return true;
        }

        void scribeProcessor::process_Log(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext) {
            void* ctx = NULL;
            if (this->eventHandler_.get() != NULL) {
                ctx = this->eventHandler_->getContext("scribe.Log", callContext);
            }
            ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "scribe.Log");

            if (this->eventHandler_.get() != NULL) {
                this->eventHandler_->preRead(ctx, "scribe.Log");
            }

            scribe_Log_args args;
            args.read(iprot);
            iprot->readMessageEnd();
            uint32_t bytes = iprot->getTransport()->readEnd();

            if (this->eventHandler_.get() != NULL) {
                this->eventHandler_->postRead(ctx, "scribe.Log", bytes);
            }

            scribe_Log_result result;
            try {
                result.success = iface_->Log(args.messages);
                result.__isset.success = true;
            } catch (const std::exception& e) {
                if (this->eventHandler_.get() != NULL) {
                    this->eventHandler_->handlerError(ctx, "scribe.Log");
                }

                ::apache::thrift::TApplicationException x(e.what());
                oprot->writeMessageBegin("Log", ::apache::thrift::protocol::T_EXCEPTION, seqid);
                x.write(oprot);
                oprot->writeMessageEnd();
                oprot->getTransport()->writeEnd();
                oprot->getTransport()->flush();
                return;
            }

            if (this->eventHandler_.get() != NULL) {
                this->eventHandler_->preWrite(ctx, "scribe.Log");
            }

            oprot->writeMessageBegin("Log", ::apache::thrift::protocol::T_REPLY, seqid);
            result.write(oprot);
            oprot->writeMessageEnd();
            bytes = oprot->getTransport()->writeEnd();
            oprot->getTransport()->flush();

            if (this->eventHandler_.get() != NULL) {
                this->eventHandler_->postWrite(ctx, "scribe.Log", bytes);
            }
        }

        void scribeProcessor::process_LogAndForget(int32_t, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol*, void* callContext) {
            void* ctx = NULL;
            if (this->eventHandler_.get() != NULL) {
                ctx = this->eventHandler_->getContext("scribe.LogAndForget", callContext);
            }
            ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "scribe.LogAndForget");

            if (this->eventHandler_.get() != NULL) {
                this->eventHandler_->preRead(ctx, "scribe.LogAndForget");
            }

            scribe_LogAndForget_args args;
            args.read(iprot);
            iprot->readMessageEnd();
            uint32_t bytes = iprot->getTransport()->readEnd();

            if (this->eventHandler_.get() != NULL) {
                this->eventHandler_->postRead(ctx, "scribe.LogAndForget", bytes);
            }

            try {
                iface_->LogAndForget(args.messages);
            } catch (const std::exception& e) {
                if (this->eventHandler_.get() != NULL) {
                    this->eventHandler_->handlerError(ctx, "scribe.LogAndForget");
                }
                return;
            }

            if (this->eventHandler_.get() != NULL) {
                this->eventHandler_->asyncComplete(ctx, "scribe.LogAndForget");
            }

            return;
        }

        ::boost::shared_ptr< ::apache::thrift::TProcessor > scribeProcessorFactory::getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) {
            ::apache::thrift::ReleaseHandler< scribeIfFactory > cleanup(handlerFactory_);
            ::boost::shared_ptr< scribeIf > handler(handlerFactory_->getHandler(connInfo), cleanup);
            ::boost::shared_ptr< ::apache::thrift::TProcessor > processor(new scribeProcessor(handler));
            return processor;
        }
    }
} // namespace


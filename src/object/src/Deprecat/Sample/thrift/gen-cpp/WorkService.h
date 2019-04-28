/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef WorkService_H
#define WorkService_H

#include <thrift/transport/TBufferTransports.h>
#include <thrift/cxxfunctional.h>
namespace apache { namespace thrift { namespace async {
class TAsyncChannel;
}}}
#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TAsyncDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "test_types.h"

namespace test {

#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class WorkServiceIf {
 public:
  virtual ~WorkServiceIf() {}
  virtual int32_t ping(const int32_t value) = 0;
  virtual void trigger(WorkTask& _return, const int64_t seqno, const WorkTask& task) = 0;
};

class WorkServiceIfFactory {
 public:
  typedef WorkServiceIf Handler;

  virtual ~WorkServiceIfFactory() {}

  virtual WorkServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(WorkServiceIf* /* handler */) = 0;
};

class WorkServiceIfSingletonFactory : virtual public WorkServiceIfFactory {
 public:
  WorkServiceIfSingletonFactory(const boost::shared_ptr<WorkServiceIf>& iface) : iface_(iface) {}
  virtual ~WorkServiceIfSingletonFactory() {}

  virtual WorkServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(WorkServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<WorkServiceIf> iface_;
};

class WorkServiceNull : virtual public WorkServiceIf {
 public:
  virtual ~WorkServiceNull() {}
  int32_t ping(const int32_t /* value */) {
    int32_t _return = 0;
    return _return;
  }
  void trigger(WorkTask& /* _return */, const int64_t /* seqno */, const WorkTask& /* task */) {
    return;
  }
};

typedef struct _WorkService_ping_args__isset {
  _WorkService_ping_args__isset() : value(false) {}
  bool value :1;
} _WorkService_ping_args__isset;

class WorkService_ping_args {
 public:

  WorkService_ping_args(const WorkService_ping_args&);
  WorkService_ping_args& operator=(const WorkService_ping_args&);
  WorkService_ping_args() : value(0) {
  }

  virtual ~WorkService_ping_args() throw();
  int32_t value;

  _WorkService_ping_args__isset __isset;

  void __set_value(const int32_t val);

  bool operator == (const WorkService_ping_args & rhs) const
  {
    if (!(value == rhs.value))
      return false;
    return true;
  }
  bool operator != (const WorkService_ping_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WorkService_ping_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class WorkService_ping_pargs {
 public:


  virtual ~WorkService_ping_pargs() throw();
  const int32_t* value;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _WorkService_ping_result__isset {
  _WorkService_ping_result__isset() : success(false) {}
  bool success :1;
} _WorkService_ping_result__isset;

class WorkService_ping_result {
 public:

  WorkService_ping_result(const WorkService_ping_result&);
  WorkService_ping_result& operator=(const WorkService_ping_result&);
  WorkService_ping_result() : success(0) {
  }

  virtual ~WorkService_ping_result() throw();
  int32_t success;

  _WorkService_ping_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const WorkService_ping_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const WorkService_ping_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WorkService_ping_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _WorkService_ping_presult__isset {
  _WorkService_ping_presult__isset() : success(false) {}
  bool success :1;
} _WorkService_ping_presult__isset;

class WorkService_ping_presult {
 public:


  virtual ~WorkService_ping_presult() throw();
  int32_t* success;

  _WorkService_ping_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _WorkService_trigger_args__isset {
  _WorkService_trigger_args__isset() : seqno(false), task(false) {}
  bool seqno :1;
  bool task :1;
} _WorkService_trigger_args__isset;

class WorkService_trigger_args {
 public:

  WorkService_trigger_args(const WorkService_trigger_args&);
  WorkService_trigger_args& operator=(const WorkService_trigger_args&);
  WorkService_trigger_args() : seqno(0) {
  }

  virtual ~WorkService_trigger_args() throw();
  int64_t seqno;
  WorkTask task;

  _WorkService_trigger_args__isset __isset;

  void __set_seqno(const int64_t val);

  void __set_task(const WorkTask& val);

  bool operator == (const WorkService_trigger_args & rhs) const
  {
    if (!(seqno == rhs.seqno))
      return false;
    if (!(task == rhs.task))
      return false;
    return true;
  }
  bool operator != (const WorkService_trigger_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WorkService_trigger_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class WorkService_trigger_pargs {
 public:


  virtual ~WorkService_trigger_pargs() throw();
  const int64_t* seqno;
  const WorkTask* task;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _WorkService_trigger_result__isset {
  _WorkService_trigger_result__isset() : success(false) {}
  bool success :1;
} _WorkService_trigger_result__isset;

class WorkService_trigger_result {
 public:

  WorkService_trigger_result(const WorkService_trigger_result&);
  WorkService_trigger_result& operator=(const WorkService_trigger_result&);
  WorkService_trigger_result() {
  }

  virtual ~WorkService_trigger_result() throw();
  WorkTask success;

  _WorkService_trigger_result__isset __isset;

  void __set_success(const WorkTask& val);

  bool operator == (const WorkService_trigger_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const WorkService_trigger_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WorkService_trigger_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _WorkService_trigger_presult__isset {
  _WorkService_trigger_presult__isset() : success(false) {}
  bool success :1;
} _WorkService_trigger_presult__isset;

class WorkService_trigger_presult {
 public:


  virtual ~WorkService_trigger_presult() throw();
  WorkTask* success;

  _WorkService_trigger_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class WorkServiceClient : virtual public WorkServiceIf {
 public:
  WorkServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  WorkServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  int32_t ping(const int32_t value);
  void send_ping(const int32_t value);
  int32_t recv_ping();
  void trigger(WorkTask& _return, const int64_t seqno, const WorkTask& task);
  void send_trigger(const int64_t seqno, const WorkTask& task);
  void recv_trigger(WorkTask& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class WorkServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<WorkServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (WorkServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_ping(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_trigger(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  WorkServiceProcessor(boost::shared_ptr<WorkServiceIf> iface) :
    iface_(iface) {
    processMap_["ping"] = &WorkServiceProcessor::process_ping;
    processMap_["trigger"] = &WorkServiceProcessor::process_trigger;
  }

  virtual ~WorkServiceProcessor() {}
};

class WorkServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  WorkServiceProcessorFactory(const ::boost::shared_ptr< WorkServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< WorkServiceIfFactory > handlerFactory_;
};

class WorkServiceMultiface : virtual public WorkServiceIf {
 public:
  WorkServiceMultiface(std::vector<boost::shared_ptr<WorkServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~WorkServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<WorkServiceIf> > ifaces_;
  WorkServiceMultiface() {}
  void add(boost::shared_ptr<WorkServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  int32_t ping(const int32_t value) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->ping(value);
    }
    return ifaces_[i]->ping(value);
  }

  void trigger(WorkTask& _return, const int64_t seqno, const WorkTask& task) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->trigger(_return, seqno, task);
    }
    ifaces_[i]->trigger(_return, seqno, task);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class WorkServiceConcurrentClient : virtual public WorkServiceIf {
 public:
  WorkServiceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  WorkServiceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  int32_t ping(const int32_t value);
  int32_t send_ping(const int32_t value);
  int32_t recv_ping(const int32_t seqid);
  void trigger(WorkTask& _return, const int64_t seqno, const WorkTask& task);
  int32_t send_trigger(const int64_t seqno, const WorkTask& task);
  void recv_trigger(WorkTask& _return, const int32_t seqid);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

class WorkServiceCobClient;

class WorkServiceCobClIf {
 public:
  virtual ~WorkServiceCobClIf() {}
  virtual void ping(tcxx::function<void(WorkServiceCobClient* client)> cob, const int32_t value) = 0;
  virtual void trigger(tcxx::function<void(WorkServiceCobClient* client)> cob, const int64_t seqno, const WorkTask& task) = 0;
};

class WorkServiceCobSvIf {
 public:
  virtual ~WorkServiceCobSvIf() {}
  virtual void ping(tcxx::function<void(int32_t const& _return)> cob, const int32_t value) = 0;
  virtual void trigger(tcxx::function<void(WorkTask const& _return)> cob, const int64_t seqno, const WorkTask& task) = 0;
};

class WorkServiceCobSvIfFactory {
 public:
  typedef WorkServiceCobSvIf Handler;

  virtual ~WorkServiceCobSvIfFactory() {}

  virtual WorkServiceCobSvIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(WorkServiceCobSvIf* /* handler */) = 0;
};

class WorkServiceCobSvIfSingletonFactory : virtual public WorkServiceCobSvIfFactory {
 public:
  WorkServiceCobSvIfSingletonFactory(const boost::shared_ptr<WorkServiceCobSvIf>& iface) : iface_(iface) {}
  virtual ~WorkServiceCobSvIfSingletonFactory() {}

  virtual WorkServiceCobSvIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(WorkServiceCobSvIf* /* handler */) {}

 protected:
  boost::shared_ptr<WorkServiceCobSvIf> iface_;
};

class WorkServiceCobSvNull : virtual public WorkServiceCobSvIf {
 public:
  virtual ~WorkServiceCobSvNull() {}
  void ping(tcxx::function<void(int32_t const& _return)> cob, const int32_t /* value */) {
    int32_t _return = 0;
    return cob(_return);
  }
  void trigger(tcxx::function<void(WorkTask const& _return)> cob, const int64_t /* seqno */, const WorkTask& /* task */) {
    WorkTask _return;
    return cob(_return);
  }
};

class WorkServiceCobClient : virtual public WorkServiceCobClIf {
 public:
  WorkServiceCobClient(boost::shared_ptr< ::apache::thrift::async::TAsyncChannel> channel, ::apache::thrift::protocol::TProtocolFactory* protocolFactory) :
    channel_(channel),
    itrans_(new ::apache::thrift::transport::TMemoryBuffer()),
    otrans_(new ::apache::thrift::transport::TMemoryBuffer()),
    piprot_(protocolFactory->getProtocol(itrans_)),
    poprot_(protocolFactory->getProtocol(otrans_)) {
    iprot_ = piprot_.get();
    oprot_ = poprot_.get();
  }
  boost::shared_ptr< ::apache::thrift::async::TAsyncChannel> getChannel() {
    return channel_;
  }
  virtual void completed__(bool /* success */) {}
  void ping(tcxx::function<void(WorkServiceCobClient* client)> cob, const int32_t value);
  void send_ping(const int32_t value);
  int32_t recv_ping();
  void trigger(tcxx::function<void(WorkServiceCobClient* client)> cob, const int64_t seqno, const WorkTask& task);
  void send_trigger(const int64_t seqno, const WorkTask& task);
  void recv_trigger(WorkTask& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::async::TAsyncChannel> channel_;
  boost::shared_ptr< ::apache::thrift::transport::TMemoryBuffer> itrans_;
  boost::shared_ptr< ::apache::thrift::transport::TMemoryBuffer> otrans_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class WorkServiceAsyncProcessor : public ::apache::thrift::async::TAsyncDispatchProcessor {
 protected:
  boost::shared_ptr<WorkServiceCobSvIf> iface_;
  virtual void dispatchCall(tcxx::function<void(bool ok)> cob, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid);
 private:
  typedef  void (WorkServiceAsyncProcessor::*ProcessFunction)(tcxx::function<void(bool ok)>, int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_ping(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void return_ping(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx, const int32_t& _return);
  void throw_ping(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx, ::apache::thrift::TDelayedException* _throw);
  void process_trigger(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void return_trigger(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx, const WorkTask& _return);
  void throw_trigger(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx, ::apache::thrift::TDelayedException* _throw);
 public:
  WorkServiceAsyncProcessor(boost::shared_ptr<WorkServiceCobSvIf> iface) :
    iface_(iface) {
    processMap_["ping"] = &WorkServiceAsyncProcessor::process_ping;
    processMap_["trigger"] = &WorkServiceAsyncProcessor::process_trigger;
  }

  virtual ~WorkServiceAsyncProcessor() {}
};

class WorkServiceAsyncProcessorFactory : public ::apache::thrift::async::TAsyncProcessorFactory {
 public:
  WorkServiceAsyncProcessorFactory(const ::boost::shared_ptr< WorkServiceCobSvIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::async::TAsyncProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< WorkServiceCobSvIfFactory > handlerFactory_;
};

#ifdef _WIN32
  #pragma warning( pop )
#endif

} // namespace

#endif
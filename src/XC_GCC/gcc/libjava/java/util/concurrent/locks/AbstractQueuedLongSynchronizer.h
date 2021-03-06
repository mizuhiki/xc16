
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_locks_AbstractQueuedLongSynchronizer__
#define __java_util_concurrent_locks_AbstractQueuedLongSynchronizer__

#pragma interface

#include <java/util/concurrent/locks/AbstractOwnableSynchronizer.h>
extern "Java"
{
  namespace sun
  {
    namespace misc
    {
        class Unsafe;
    }
  }
}

class java::util::concurrent::locks::AbstractQueuedLongSynchronizer : public ::java::util::concurrent::locks::AbstractOwnableSynchronizer
{

public: // actually protected
  AbstractQueuedLongSynchronizer();
  virtual jlong getState();
  virtual void setState(jlong);
  virtual jboolean compareAndSetState(jlong, jlong);
private:
  ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node * enq(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node *);
  ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node * addWaiter(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node *);
  void setHead(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node *);
  void unparkSuccessor(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node *);
  void setHeadAndPropagate(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node *, jlong);
  void cancelAcquire(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node *);
  static jboolean shouldParkAfterFailedAcquire(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node *, ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node *);
  static void selfInterrupt();
  jboolean parkAndCheckInterrupt();
public: // actually package-private
  virtual jboolean acquireQueued(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node *, jlong);
private:
  void doAcquireInterruptibly(jlong);
  jboolean doAcquireNanos(jlong, jlong);
  void doAcquireShared(jlong);
  void doAcquireSharedInterruptibly(jlong);
  jboolean doAcquireSharedNanos(jlong, jlong);
public: // actually protected
  virtual jboolean tryAcquire(jlong);
  virtual jboolean tryRelease(jlong);
  virtual jlong tryAcquireShared(jlong);
  virtual jboolean tryReleaseShared(jlong);
  virtual jboolean isHeldExclusively();
public:
  virtual void acquire(jlong);
  virtual void acquireInterruptibly(jlong);
  virtual jboolean tryAcquireNanos(jlong, jlong);
  virtual jboolean release(jlong);
  virtual void acquireShared(jlong);
  virtual void acquireSharedInterruptibly(jlong);
  virtual jboolean tryAcquireSharedNanos(jlong, jlong);
  virtual jboolean releaseShared(jlong);
  virtual jboolean hasQueuedThreads();
  virtual jboolean hasContended();
  virtual ::java::lang::Thread * getFirstQueuedThread();
private:
  ::java::lang::Thread * fullGetFirstQueuedThread();
public:
  virtual jboolean isQueued(::java::lang::Thread *);
public: // actually package-private
  virtual jboolean apparentlyFirstQueuedIsExclusive();
  virtual jboolean isFirst(::java::lang::Thread *);
  virtual jboolean fullIsFirst(::java::lang::Thread *);
public:
  virtual jint getQueueLength();
  virtual ::java::util::Collection * getQueuedThreads();
  virtual ::java::util::Collection * getExclusiveQueuedThreads();
  virtual ::java::util::Collection * getSharedQueuedThreads();
  virtual ::java::lang::String * toString();
public: // actually package-private
  virtual jboolean isOnSyncQueue(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node *);
private:
  jboolean findNodeFromTail(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node *);
public: // actually package-private
  virtual jboolean transferForSignal(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node *);
  virtual jboolean transferAfterCancelledWait(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node *);
  virtual jlong fullyRelease(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node *);
public:
  virtual jboolean owns(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$ConditionObject *);
  virtual jboolean hasWaiters(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$ConditionObject *);
  virtual jint getWaitQueueLength(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$ConditionObject *);
  virtual ::java::util::Collection * getWaitingThreads(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$ConditionObject *);
private:
  jboolean compareAndSetHead(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node *);
  jboolean compareAndSetTail(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node *, ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node *);
  static jboolean compareAndSetWaitStatus(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node *, jint, jint);
public: // actually package-private
  static void access$0();
private:
  static const jlong serialVersionUID = 7373984972572414692LL;
  ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node * volatile __attribute__((aligned(__alignof__( ::java::util::concurrent::locks::AbstractOwnableSynchronizer)))) head;
  ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node * volatile tail;
  jlong volatile state;
public: // actually package-private
  static const jlong spinForTimeoutThreshold = 1000LL;
private:
  static ::sun::misc::Unsafe * unsafe;
  static jlong stateOffset;
  static jlong headOffset;
  static jlong tailOffset;
  static jlong waitStatusOffset;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_locks_AbstractQueuedLongSynchronizer__

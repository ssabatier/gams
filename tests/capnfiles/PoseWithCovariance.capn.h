// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: PoseWithCovariance.capn

#ifndef CAPNP_INCLUDED_8394dd54e6fff3bd_
#define CAPNP_INCLUDED_8394dd54e6fff3bd_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include "Pose.capn.h"

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(fcb83f4fad5bc6a0);

}  // namespace schemas
}  // namespace capnp


struct PoseWithCovariance {
  PoseWithCovariance() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(fcb83f4fad5bc6a0, 0, 2)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class PoseWithCovariance::Reader {
public:
  typedef PoseWithCovariance Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasPose() const;
  inline  ::Pose::Reader getPose() const;

  inline bool hasCovariance() const;
  inline  ::capnp::List<float>::Reader getCovariance() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class PoseWithCovariance::Builder {
public:
  typedef PoseWithCovariance Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasPose();
  inline  ::Pose::Builder getPose();
  inline void setPose( ::Pose::Reader value);
  inline  ::Pose::Builder initPose();
  inline void adoptPose(::capnp::Orphan< ::Pose>&& value);
  inline ::capnp::Orphan< ::Pose> disownPose();

  inline bool hasCovariance();
  inline  ::capnp::List<float>::Builder getCovariance();
  inline void setCovariance( ::capnp::List<float>::Reader value);
  inline void setCovariance(::kj::ArrayPtr<const float> value);
  inline  ::capnp::List<float>::Builder initCovariance(unsigned int size);
  inline void adoptCovariance(::capnp::Orphan< ::capnp::List<float>>&& value);
  inline ::capnp::Orphan< ::capnp::List<float>> disownCovariance();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class PoseWithCovariance::Pipeline {
public:
  typedef PoseWithCovariance Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::Pose::Pipeline getPose();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline bool PoseWithCovariance::Reader::hasPose() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool PoseWithCovariance::Builder::hasPose() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::Pose::Reader PoseWithCovariance::Reader::getPose() const {
  return ::capnp::_::PointerHelpers< ::Pose>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::Pose::Builder PoseWithCovariance::Builder::getPose() {
  return ::capnp::_::PointerHelpers< ::Pose>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::Pose::Pipeline PoseWithCovariance::Pipeline::getPose() {
  return  ::Pose::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void PoseWithCovariance::Builder::setPose( ::Pose::Reader value) {
  ::capnp::_::PointerHelpers< ::Pose>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::Pose::Builder PoseWithCovariance::Builder::initPose() {
  return ::capnp::_::PointerHelpers< ::Pose>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void PoseWithCovariance::Builder::adoptPose(
    ::capnp::Orphan< ::Pose>&& value) {
  ::capnp::_::PointerHelpers< ::Pose>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::Pose> PoseWithCovariance::Builder::disownPose() {
  return ::capnp::_::PointerHelpers< ::Pose>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool PoseWithCovariance::Reader::hasCovariance() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool PoseWithCovariance::Builder::hasCovariance() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List<float>::Reader PoseWithCovariance::Reader::getCovariance() const {
  return ::capnp::_::PointerHelpers< ::capnp::List<float>>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::List<float>::Builder PoseWithCovariance::Builder::getCovariance() {
  return ::capnp::_::PointerHelpers< ::capnp::List<float>>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void PoseWithCovariance::Builder::setCovariance( ::capnp::List<float>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List<float>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline void PoseWithCovariance::Builder::setCovariance(::kj::ArrayPtr<const float> value) {
  ::capnp::_::PointerHelpers< ::capnp::List<float>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List<float>::Builder PoseWithCovariance::Builder::initCovariance(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List<float>>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void PoseWithCovariance::Builder::adoptCovariance(
    ::capnp::Orphan< ::capnp::List<float>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List<float>>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List<float>> PoseWithCovariance::Builder::disownCovariance() {
  return ::capnp::_::PointerHelpers< ::capnp::List<float>>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}


#endif  // CAPNP_INCLUDED_8394dd54e6fff3bd_

// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SERIALIZATIONSCHEMA_GLOXVM_BYTECODE_H_
#define FLATBUFFERS_GENERATED_SERIALIZATIONSCHEMA_GLOXVM_BYTECODE_H_

#include "flatbuffers/flatbuffers.h"

namespace Gloxvm {
namespace Bytecode {

struct UInt64;

struct Short;

struct Float64;

struct Boolean;

struct Bytecode;
struct BytecodeBuilder;

struct Module;
struct ModuleBuilder;

enum Any : uint8_t {
  Any_NONE = 0,
  Any_UInt64 = 1,
  Any_Short = 2,
  Any_Float64 = 3,
  Any_Boolean = 4,
  Any_MIN = Any_NONE,
  Any_MAX = Any_Boolean
};

inline const Any (&EnumValuesAny())[5] {
  static const Any values[] = {
    Any_NONE,
    Any_UInt64,
    Any_Short,
    Any_Float64,
    Any_Boolean
  };
  return values;
}

inline const char * const *EnumNamesAny() {
  static const char * const names[6] = {
    "NONE",
    "UInt64",
    "Short",
    "Float64",
    "Boolean",
    nullptr
  };
  return names;
}

inline const char *EnumNameAny(Any e) {
  if (flatbuffers::IsOutRange(e, Any_NONE, Any_Boolean)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesAny()[index];
}

template<typename T> struct AnyTraits {
  static const Any enum_value = Any_NONE;
};

template<> struct AnyTraits<Gloxvm::Bytecode::UInt64> {
  static const Any enum_value = Any_UInt64;
};

template<> struct AnyTraits<Gloxvm::Bytecode::Short> {
  static const Any enum_value = Any_Short;
};

template<> struct AnyTraits<Gloxvm::Bytecode::Float64> {
  static const Any enum_value = Any_Float64;
};

template<> struct AnyTraits<Gloxvm::Bytecode::Boolean> {
  static const Any enum_value = Any_Boolean;
};

bool VerifyAny(flatbuffers::Verifier &verifier, const void *obj, Any type);
bool VerifyAnyVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(8) UInt64 FLATBUFFERS_FINAL_CLASS {
 private:
  uint64_t u_;

 public:
  UInt64()
      : u_(0) {
  }
  UInt64(uint64_t _u)
      : u_(flatbuffers::EndianScalar(_u)) {
  }
  uint64_t u() const {
    return flatbuffers::EndianScalar(u_);
  }
};
FLATBUFFERS_STRUCT_END(UInt64, 8);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(2) Short FLATBUFFERS_FINAL_CLASS {
 private:
  int16_t s_;

 public:
  Short()
      : s_(0) {
  }
  Short(int16_t _s)
      : s_(flatbuffers::EndianScalar(_s)) {
  }
  int16_t s() const {
    return flatbuffers::EndianScalar(s_);
  }
};
FLATBUFFERS_STRUCT_END(Short, 2);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) Float64 FLATBUFFERS_FINAL_CLASS {
 private:
  float f_;

 public:
  Float64()
      : f_(0) {
  }
  Float64(float _f)
      : f_(flatbuffers::EndianScalar(_f)) {
  }
  float f() const {
    return flatbuffers::EndianScalar(f_);
  }
};
FLATBUFFERS_STRUCT_END(Float64, 4);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(1) Boolean FLATBUFFERS_FINAL_CLASS {
 private:
  uint8_t b_;

 public:
  Boolean()
      : b_(0) {
  }
  Boolean(bool _b)
      : b_(flatbuffers::EndianScalar(static_cast<uint8_t>(_b))) {
  }
  bool b() const {
    return flatbuffers::EndianScalar(b_) != 0;
  }
};
FLATBUFFERS_STRUCT_END(Boolean, 1);

struct Bytecode FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef BytecodeBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TYPE = 4,
    VT_DATA_TYPE = 6,
    VT_DATA = 8
  };
  int16_t type() const {
    return GetField<int16_t>(VT_TYPE, 0);
  }
  Gloxvm::Bytecode::Any data_type() const {
    return static_cast<Gloxvm::Bytecode::Any>(GetField<uint8_t>(VT_DATA_TYPE, 0));
  }
  const void *data() const {
    return GetPointer<const void *>(VT_DATA);
  }
  template<typename T> const T *data_as() const;
  const Gloxvm::Bytecode::UInt64 *data_as_UInt64() const {
    return data_type() == Gloxvm::Bytecode::Any_UInt64 ? static_cast<const Gloxvm::Bytecode::UInt64 *>(data()) : nullptr;
  }
  const Gloxvm::Bytecode::Short *data_as_Short() const {
    return data_type() == Gloxvm::Bytecode::Any_Short ? static_cast<const Gloxvm::Bytecode::Short *>(data()) : nullptr;
  }
  const Gloxvm::Bytecode::Float64 *data_as_Float64() const {
    return data_type() == Gloxvm::Bytecode::Any_Float64 ? static_cast<const Gloxvm::Bytecode::Float64 *>(data()) : nullptr;
  }
  const Gloxvm::Bytecode::Boolean *data_as_Boolean() const {
    return data_type() == Gloxvm::Bytecode::Any_Boolean ? static_cast<const Gloxvm::Bytecode::Boolean *>(data()) : nullptr;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int16_t>(verifier, VT_TYPE) &&
           VerifyField<uint8_t>(verifier, VT_DATA_TYPE) &&
           VerifyOffset(verifier, VT_DATA) &&
           VerifyAny(verifier, data(), data_type()) &&
           verifier.EndTable();
  }
};

template<> inline const Gloxvm::Bytecode::UInt64 *Bytecode::data_as<Gloxvm::Bytecode::UInt64>() const {
  return data_as_UInt64();
}

template<> inline const Gloxvm::Bytecode::Short *Bytecode::data_as<Gloxvm::Bytecode::Short>() const {
  return data_as_Short();
}

template<> inline const Gloxvm::Bytecode::Float64 *Bytecode::data_as<Gloxvm::Bytecode::Float64>() const {
  return data_as_Float64();
}

template<> inline const Gloxvm::Bytecode::Boolean *Bytecode::data_as<Gloxvm::Bytecode::Boolean>() const {
  return data_as_Boolean();
}

struct BytecodeBuilder {
  typedef Bytecode Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_type(int16_t type) {
    fbb_.AddElement<int16_t>(Bytecode::VT_TYPE, type, 0);
  }
  void add_data_type(Gloxvm::Bytecode::Any data_type) {
    fbb_.AddElement<uint8_t>(Bytecode::VT_DATA_TYPE, static_cast<uint8_t>(data_type), 0);
  }
  void add_data(flatbuffers::Offset<void> data) {
    fbb_.AddOffset(Bytecode::VT_DATA, data);
  }
  explicit BytecodeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Bytecode> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Bytecode>(end);
    return o;
  }
};

inline flatbuffers::Offset<Bytecode> CreateBytecode(
    flatbuffers::FlatBufferBuilder &_fbb,
    int16_t type = 0,
    Gloxvm::Bytecode::Any data_type = Gloxvm::Bytecode::Any_NONE,
    flatbuffers::Offset<void> data = 0) {
  BytecodeBuilder builder_(_fbb);
  builder_.add_data(data);
  builder_.add_type(type);
  builder_.add_data_type(data_type);
  return builder_.Finish();
}

struct Module FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ModuleBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_CODE = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<Gloxvm::Bytecode::Bytecode>> *code() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Gloxvm::Bytecode::Bytecode>> *>(VT_CODE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_CODE) &&
           verifier.VerifyVector(code()) &&
           verifier.VerifyVectorOfTables(code()) &&
           verifier.EndTable();
  }
};

struct ModuleBuilder {
  typedef Module Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_code(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Gloxvm::Bytecode::Bytecode>>> code) {
    fbb_.AddOffset(Module::VT_CODE, code);
  }
  explicit ModuleBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Module> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Module>(end);
    return o;
  }
};

inline flatbuffers::Offset<Module> CreateModule(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Gloxvm::Bytecode::Bytecode>>> code = 0) {
  ModuleBuilder builder_(_fbb);
  builder_.add_code(code);
  return builder_.Finish();
}

inline flatbuffers::Offset<Module> CreateModuleDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<Gloxvm::Bytecode::Bytecode>> *code = nullptr) {
  auto code__ = code ? _fbb.CreateVector<flatbuffers::Offset<Gloxvm::Bytecode::Bytecode>>(*code) : 0;
  return Gloxvm::Bytecode::CreateModule(
      _fbb,
      code__);
}

inline bool VerifyAny(flatbuffers::Verifier &verifier, const void *obj, Any type) {
  switch (type) {
    case Any_NONE: {
      return true;
    }
    case Any_UInt64: {
      return verifier.Verify<Gloxvm::Bytecode::UInt64>(static_cast<const uint8_t *>(obj), 0);
    }
    case Any_Short: {
      return verifier.Verify<Gloxvm::Bytecode::Short>(static_cast<const uint8_t *>(obj), 0);
    }
    case Any_Float64: {
      return verifier.Verify<Gloxvm::Bytecode::Float64>(static_cast<const uint8_t *>(obj), 0);
    }
    case Any_Boolean: {
      return verifier.Verify<Gloxvm::Bytecode::Boolean>(static_cast<const uint8_t *>(obj), 0);
    }
    default: return true;
  }
}

inline bool VerifyAnyVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyAny(
        verifier,  values->Get(i), types->GetEnum<Any>(i))) {
      return false;
    }
  }
  return true;
}

inline const Gloxvm::Bytecode::Module *GetModule(const void *buf) {
  return flatbuffers::GetRoot<Gloxvm::Bytecode::Module>(buf);
}

inline const Gloxvm::Bytecode::Module *GetSizePrefixedModule(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<Gloxvm::Bytecode::Module>(buf);
}

inline bool VerifyModuleBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Gloxvm::Bytecode::Module>(nullptr);
}

inline bool VerifySizePrefixedModuleBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Gloxvm::Bytecode::Module>(nullptr);
}

inline void FinishModuleBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Gloxvm::Bytecode::Module> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedModuleBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Gloxvm::Bytecode::Module> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace Bytecode
}  // namespace Gloxvm

#endif  // FLATBUFFERS_GENERATED_SERIALIZATIONSCHEMA_GLOXVM_BYTECODE_H_
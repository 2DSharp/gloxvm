#ifndef SERIALIZATION_SCHEMA_READER_H
#define SERIALIZATION_SCHEMA_READER_H

/* Generated by flatcc 0.6.1-dev FlatBuffers schema compiler for C by dvide.com */

#ifndef FLATBUFFERS_COMMON_READER_H
#include "flatbuffers_common_reader.h"
#endif
#include "flatcc/flatcc_flatbuffers.h"
#ifndef __alignas_is_defined
#include <stdalign.h>
#endif
#include "flatcc/flatcc_prologue.h"
#ifndef flatbuffers_identifier
#define flatbuffers_identifier 0
#endif
#ifndef flatbuffers_extension
#define flatbuffers_extension "bin"
#endif

typedef struct Gloxvm_UInt64 Gloxvm_UInt64_t;
typedef const Gloxvm_UInt64_t *Gloxvm_UInt64_struct_t;
typedef Gloxvm_UInt64_t *Gloxvm_UInt64_mutable_struct_t;
typedef const Gloxvm_UInt64_t *Gloxvm_UInt64_vec_t;
typedef Gloxvm_UInt64_t *Gloxvm_UInt64_mutable_vec_t;
typedef struct Gloxvm_Short Gloxvm_Short_t;
typedef const Gloxvm_Short_t *Gloxvm_Short_struct_t;
typedef Gloxvm_Short_t *Gloxvm_Short_mutable_struct_t;
typedef const Gloxvm_Short_t *Gloxvm_Short_vec_t;
typedef Gloxvm_Short_t *Gloxvm_Short_mutable_vec_t;
typedef struct Gloxvm_Float64 Gloxvm_Float64_t;
typedef const Gloxvm_Float64_t *Gloxvm_Float64_struct_t;
typedef Gloxvm_Float64_t *Gloxvm_Float64_mutable_struct_t;
typedef const Gloxvm_Float64_t *Gloxvm_Float64_vec_t;
typedef Gloxvm_Float64_t *Gloxvm_Float64_mutable_vec_t;
typedef struct Gloxvm_Boolean Gloxvm_Boolean_t;
typedef const Gloxvm_Boolean_t *Gloxvm_Boolean_struct_t;
typedef Gloxvm_Boolean_t *Gloxvm_Boolean_mutable_struct_t;
typedef const Gloxvm_Boolean_t *Gloxvm_Boolean_vec_t;
typedef Gloxvm_Boolean_t *Gloxvm_Boolean_mutable_vec_t;

typedef const struct Gloxvm_Bytecode_table *Gloxvm_Bytecode_table_t;
typedef struct Gloxvm_Bytecode_table *Gloxvm_Bytecode_mutable_table_t;
typedef const flatbuffers_uoffset_t *Gloxvm_Bytecode_vec_t;
typedef flatbuffers_uoffset_t *Gloxvm_Bytecode_mutable_vec_t;
typedef const struct Gloxvm_Module_table *Gloxvm_Module_table_t;
typedef struct Gloxvm_Module_table *Gloxvm_Module_mutable_table_t;
typedef const flatbuffers_uoffset_t *Gloxvm_Module_vec_t;
typedef flatbuffers_uoffset_t *Gloxvm_Module_mutable_vec_t;
#ifndef Gloxvm_UInt64_file_identifier
#define Gloxvm_UInt64_file_identifier 0
#endif
/* deprecated, use Gloxvm_UInt64_file_identifier */
#ifndef Gloxvm_UInt64_identifier
#define Gloxvm_UInt64_identifier 0
#endif
#define Gloxvm_UInt64_type_hash ((flatbuffers_thash_t)0x99d5fd44)
#define Gloxvm_UInt64_type_identifier "\x44\xfd\xd5\x99"
#ifndef Gloxvm_UInt64_file_extension
#define Gloxvm_UInt64_file_extension "bin"
#endif
#ifndef Gloxvm_Short_file_identifier
#define Gloxvm_Short_file_identifier 0
#endif
/* deprecated, use Gloxvm_Short_file_identifier */
#ifndef Gloxvm_Short_identifier
#define Gloxvm_Short_identifier 0
#endif
#define Gloxvm_Short_type_hash ((flatbuffers_thash_t)0xc25144d4)
#define Gloxvm_Short_type_identifier "\xd4\x44\x51\xc2"
#ifndef Gloxvm_Short_file_extension
#define Gloxvm_Short_file_extension "bin"
#endif
#ifndef Gloxvm_Float64_file_identifier
#define Gloxvm_Float64_file_identifier 0
#endif
/* deprecated, use Gloxvm_Float64_file_identifier */
#ifndef Gloxvm_Float64_identifier
#define Gloxvm_Float64_identifier 0
#endif
#define Gloxvm_Float64_type_hash ((flatbuffers_thash_t)0x66731252)
#define Gloxvm_Float64_type_identifier "\x52\x12\x73\x66"
#ifndef Gloxvm_Float64_file_extension
#define Gloxvm_Float64_file_extension "bin"
#endif
#ifndef Gloxvm_Boolean_file_identifier
#define Gloxvm_Boolean_file_identifier 0
#endif
/* deprecated, use Gloxvm_Boolean_file_identifier */
#ifndef Gloxvm_Boolean_identifier
#define Gloxvm_Boolean_identifier 0
#endif
#define Gloxvm_Boolean_type_hash ((flatbuffers_thash_t)0xd54eac6a)
#define Gloxvm_Boolean_type_identifier "\x6a\xac\x4e\xd5"
#ifndef Gloxvm_Boolean_file_extension
#define Gloxvm_Boolean_file_extension "bin"
#endif
#ifndef Gloxvm_Bytecode_file_identifier
#define Gloxvm_Bytecode_file_identifier 0
#endif
/* deprecated, use Gloxvm_Bytecode_file_identifier */
#ifndef Gloxvm_Bytecode_identifier
#define Gloxvm_Bytecode_identifier 0
#endif
#define Gloxvm_Bytecode_type_hash ((flatbuffers_thash_t)0x5b3b69fd)
#define Gloxvm_Bytecode_type_identifier "\xfd\x69\x3b\x5b"
#ifndef Gloxvm_Bytecode_file_extension
#define Gloxvm_Bytecode_file_extension "bin"
#endif
#ifndef Gloxvm_Module_file_identifier
#define Gloxvm_Module_file_identifier 0
#endif
/* deprecated, use Gloxvm_Module_file_identifier */
#ifndef Gloxvm_Module_identifier
#define Gloxvm_Module_identifier 0
#endif
#define Gloxvm_Module_type_hash ((flatbuffers_thash_t)0x3d532b2e)
#define Gloxvm_Module_type_identifier "\x2e\x2b\x53\x3d"
#ifndef Gloxvm_Module_file_extension
#define Gloxvm_Module_file_extension "bin"
#endif


struct Gloxvm_UInt64 {
    alignas(8) uint64_t u;
};
static_assert(sizeof(Gloxvm_UInt64_t) == 8, "struct size mismatch");

static inline const Gloxvm_UInt64_t *Gloxvm_UInt64__const_ptr_add(const Gloxvm_UInt64_t *p, size_t i) { return p + i; }
static inline Gloxvm_UInt64_t *Gloxvm_UInt64__ptr_add(Gloxvm_UInt64_t *p, size_t i) { return p + i; }
static inline Gloxvm_UInt64_struct_t Gloxvm_UInt64_vec_at(Gloxvm_UInt64_vec_t vec, size_t i)
__flatbuffers_struct_vec_at(vec, i)
static inline size_t Gloxvm_UInt64__size(void) { return 8; }
static inline size_t Gloxvm_UInt64_vec_len(Gloxvm_UInt64_vec_t vec)
__flatbuffers_vec_len(vec)
__flatbuffers_struct_as_root(Gloxvm_UInt64)

__flatbuffers_define_struct_scalar_field(Gloxvm_UInt64, u, flatbuffers_uint64, uint64_t)

struct Gloxvm_Short {
    alignas(2) int16_t s;
};
static_assert(sizeof(Gloxvm_Short_t) == 2, "struct size mismatch");

static inline const Gloxvm_Short_t *Gloxvm_Short__const_ptr_add(const Gloxvm_Short_t *p, size_t i) { return p + i; }
static inline Gloxvm_Short_t *Gloxvm_Short__ptr_add(Gloxvm_Short_t *p, size_t i) { return p + i; }
static inline Gloxvm_Short_struct_t Gloxvm_Short_vec_at(Gloxvm_Short_vec_t vec, size_t i)
__flatbuffers_struct_vec_at(vec, i)
static inline size_t Gloxvm_Short__size(void) { return 2; }
static inline size_t Gloxvm_Short_vec_len(Gloxvm_Short_vec_t vec)
__flatbuffers_vec_len(vec)
__flatbuffers_struct_as_root(Gloxvm_Short)

__flatbuffers_define_struct_scalar_field(Gloxvm_Short, s, flatbuffers_int16, int16_t)

struct Gloxvm_Float64 {
    alignas(4) float f;
};
static_assert(sizeof(Gloxvm_Float64_t) == 4, "struct size mismatch");

static inline const Gloxvm_Float64_t *Gloxvm_Float64__const_ptr_add(const Gloxvm_Float64_t *p, size_t i) { return p + i; }
static inline Gloxvm_Float64_t *Gloxvm_Float64__ptr_add(Gloxvm_Float64_t *p, size_t i) { return p + i; }
static inline Gloxvm_Float64_struct_t Gloxvm_Float64_vec_at(Gloxvm_Float64_vec_t vec, size_t i)
__flatbuffers_struct_vec_at(vec, i)
static inline size_t Gloxvm_Float64__size(void) { return 4; }
static inline size_t Gloxvm_Float64_vec_len(Gloxvm_Float64_vec_t vec)
__flatbuffers_vec_len(vec)
__flatbuffers_struct_as_root(Gloxvm_Float64)

__flatbuffers_define_struct_scalar_field(Gloxvm_Float64, f, flatbuffers_float, float)

struct Gloxvm_Boolean {
    alignas(1) flatbuffers_bool_t b;
};
static_assert(sizeof(Gloxvm_Boolean_t) == 1, "struct size mismatch");

static inline const Gloxvm_Boolean_t *Gloxvm_Boolean__const_ptr_add(const Gloxvm_Boolean_t *p, size_t i) { return p + i; }
static inline Gloxvm_Boolean_t *Gloxvm_Boolean__ptr_add(Gloxvm_Boolean_t *p, size_t i) { return p + i; }
static inline Gloxvm_Boolean_struct_t Gloxvm_Boolean_vec_at(Gloxvm_Boolean_vec_t vec, size_t i)
__flatbuffers_struct_vec_at(vec, i)
static inline size_t Gloxvm_Boolean__size(void) { return 1; }
static inline size_t Gloxvm_Boolean_vec_len(Gloxvm_Boolean_vec_t vec)
__flatbuffers_vec_len(vec)
__flatbuffers_struct_as_root(Gloxvm_Boolean)

__flatbuffers_define_struct_scalar_field(Gloxvm_Boolean, b, flatbuffers_bool, flatbuffers_bool_t)

typedef uint8_t Gloxvm_Any_union_type_t;
__flatbuffers_define_integer_type(Gloxvm_Any, Gloxvm_Any_union_type_t, 8)
__flatbuffers_define_union(flatbuffers_, Gloxvm_Any)
#define Gloxvm_Any_NONE ((Gloxvm_Any_union_type_t)UINT8_C(0))
#define Gloxvm_Any_UInt64 ((Gloxvm_Any_union_type_t)UINT8_C(1))
#define Gloxvm_Any_Short ((Gloxvm_Any_union_type_t)UINT8_C(2))
#define Gloxvm_Any_Float64 ((Gloxvm_Any_union_type_t)UINT8_C(3))
#define Gloxvm_Any_Boolean ((Gloxvm_Any_union_type_t)UINT8_C(4))

static inline const char *Gloxvm_Any_type_name(Gloxvm_Any_union_type_t type)
{
    switch (type) {
    case Gloxvm_Any_NONE: return "NONE";
    case Gloxvm_Any_UInt64: return "UInt64";
    case Gloxvm_Any_Short: return "Short";
    case Gloxvm_Any_Float64: return "Float64";
    case Gloxvm_Any_Boolean: return "Boolean";
    default: return "";
    }
}

static inline int Gloxvm_Any_is_known_type(Gloxvm_Any_union_type_t type)
{
    switch (type) {
    case Gloxvm_Any_NONE: return 1;
    case Gloxvm_Any_UInt64: return 1;
    case Gloxvm_Any_Short: return 1;
    case Gloxvm_Any_Float64: return 1;
    case Gloxvm_Any_Boolean: return 1;
    default: return 0;
    }
}


struct Gloxvm_Bytecode_table { uint8_t unused__; };

static inline size_t Gloxvm_Bytecode_vec_len(Gloxvm_Bytecode_vec_t vec)
__flatbuffers_vec_len(vec)
static inline Gloxvm_Bytecode_table_t Gloxvm_Bytecode_vec_at(Gloxvm_Bytecode_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(Gloxvm_Bytecode_table_t, vec, i, 0)
__flatbuffers_table_as_root(Gloxvm_Bytecode)

__flatbuffers_define_scalar_field(0, Gloxvm_Bytecode, type, flatbuffers_int16, int16_t, INT16_C(0))
__flatbuffers_define_union_field(flatbuffers_, 2, Gloxvm_Bytecode, data, Gloxvm_Any, 0)

struct Gloxvm_Module_table { uint8_t unused__; };

static inline size_t Gloxvm_Module_vec_len(Gloxvm_Module_vec_t vec)
__flatbuffers_vec_len(vec)
static inline Gloxvm_Module_table_t Gloxvm_Module_vec_at(Gloxvm_Module_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(Gloxvm_Module_table_t, vec, i, 0)
__flatbuffers_table_as_root(Gloxvm_Module)

__flatbuffers_define_vector_field(0, Gloxvm_Module, code, Gloxvm_Bytecode_vec_t, 0)


#include "flatcc/flatcc_epilogue.h"
#endif /* SERIALIZATION_SCHEMA_READER_H */

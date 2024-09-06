#include "serialize.hpp"
#include "rsh.hpp"
#include <cstring>

namespace rsh {

struct ReadBuffer {
  ReadBuffer(u8 const *data, usize size)
      : start(data), end(data + size), curr(data) {}
  u8 const *const start;
  u8 const *const end;
  u8 const *curr;
};

static int get_byte(R_inpstream_t stream);
static void get_buf(R_inpstream_t stream, void *buffer, int length);
static void put_byte(R_outpstream_t stream, int c);
static void put_buf(R_outpstream_t stream, void *buf, int length);

SEXP deserialize(std::string data) {
  return deserialize(reinterpret_cast<u8 const *>(data.data()), data.size());
}

SEXP deserialize(u8 const *data, usize size) {
  R_inpstream_st in;
  ReadBuffer b{data, size};

  R_InitInPStream(&in, reinterpret_cast<R_pstream_data_t>(&b),
                  R_pstream_any_format, get_byte, get_buf, NULL, R_NilValue);

  SEXP res = R_Unserialize(&in);

  return res;
}

Bytes serialize(SEXP obj) {
  R_outpstream_st out;
  Bytes b;

  R_InitOutPStream(&out, reinterpret_cast<R_pstream_data_t>(&b),
                   R_pstream_xdr_format, 2, put_byte, put_buf, NULL,
                   R_NilValue);

  R_Serialize(obj, &out);

  return b;
}

static int get_byte(R_inpstream_t stream) {
  ReadBuffer *b = static_cast<ReadBuffer *>(stream->data);

  if (b->curr > b->end) {
    Rf_error("Read past end of buffer");
  }

  return static_cast<int>(*(b->curr++));
}

static void get_buf(R_inpstream_t stream, void *buffer, int length) {
  ReadBuffer *b = static_cast<ReadBuffer *>(stream->data);
  if (b->curr + length > b->end) {
    Rf_error("Read past end of buffer");
  }
  memcpy(buffer, b->curr, length);
  b->curr += length;
}

static void put_byte(R_outpstream_t stream, int c) {
  Bytes *b = static_cast<Bytes *>(stream->data);
  b->push_back(static_cast<u8>(c));
}

static void put_buf(R_outpstream_t stream, void *buf, int length) {
  Bytes *b = static_cast<Bytes *>(stream->data);
  b->insert(b->end(), static_cast<u8 *>(buf), static_cast<u8 *>(buf) + length);
}

} // namespace rsh

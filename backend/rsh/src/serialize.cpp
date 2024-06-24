#include "serialize.h"
#include <cstring>

struct ReadBuffer {
  ReadBuffer(u8 const *data, usize size)
      : start(data), end(data + size), curr(data) {}
  u8 const *const start;
  u8 const *const end;
  u8 const *curr;
};

int get_byte(R_inpstream_t stream);
void get_buf(R_inpstream_t stream, void *buffer, int length);

SEXP deserialize(u8 const *data, usize size) {
  R_inpstream_st in;
  ReadBuffer b{data, size};

  R_InitInPStream(&in, reinterpret_cast<R_pstream_data_t>(&b),
                  R_pstream_any_format, get_byte, get_buf, NULL, R_NilValue);

  SEXP res = R_Unserialize(&in);

  return res;
}

int get_byte(R_inpstream_t stream) {
  ReadBuffer *b = static_cast<ReadBuffer *>(stream->data);

  if (b->curr > b->end) {
    Rf_error("Read past end of buffer");
  }

  return static_cast<int>(*(b->curr++));
}

void get_buf(R_inpstream_t stream, void *buffer, int length) {
  ReadBuffer *b = static_cast<ReadBuffer *>(stream->data);
  if (b->curr + length > b->end) {
    Rf_error("Read past end of buffer");
  }
  memcpy(buffer, b->curr, length);
  b->curr += length;
}

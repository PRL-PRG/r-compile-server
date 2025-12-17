fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner824068407;
    st `read.delim` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner824068407(file, header, sep, quote, dec, fill, `comment.char`, `...`) {
  (reg file:*, reg header:*, reg sep:*, reg quote:*, reg dec:*, reg fill:*, reg comment_char:*, reg ddd:dots) -+> V { var file:*, var header:*, reg header_isMissing:L, reg header_orDefault:*, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, var dec:*, reg dec_isMissing:L, reg dec_orDefault:*, var fill:*, reg fill_isMissing:L, reg fill_orDefault:*, var `comment.char`:*, reg comment_char_isMissing:L, reg comment_char_orDefault:*, var `...`:dots?, reg read_table:cls, reg file1:*, reg file2:V, reg p:p(V +), reg header1:*, reg header2:V, reg p1:p(V +), reg sep1:*, reg sep2:V, reg p2:p(V +), reg quote1:*, reg quote2:V, reg p3:p(V +), reg dec1:*, reg dec2:V, reg p4:p(V +), reg fill1:*, reg fill2:V, reg p5:p(V +), reg comment_char1:*, reg comment_char2:V, reg p6:p(V +), reg ddd1:dots?, reg r7:V |
    mkenv;
    st file = file;
    header_isMissing = missing.0(header);
    if header_isMissing then L0(TRUE) else L0(header);
  L0(header_orDefault):
    st header = header_orDefault;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L1("\t") else L1(sep);
  L1(sep_orDefault):
    st sep = sep_orDefault;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L2("\"") else L2(quote);
  L2(quote_orDefault):
    st quote = quote_orDefault;
    dec_isMissing = missing.0(dec);
    if dec_isMissing then L3(".") else L3(dec);
  L3(dec_orDefault):
    st dec = dec_orDefault;
    fill_isMissing = missing.0(fill);
    if fill_isMissing then L4(TRUE) else L4(fill);
  L4(fill_orDefault):
    st fill = fill_orDefault;
    comment_char_isMissing = missing.0(comment_char);
    if comment_char_isMissing then L5("") else L5(comment_char);
  L5(comment_char_orDefault):
    st `comment.char` = comment_char_orDefault;
    st `...` = ddd;
    read_table = ldf `read.table`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    p1 = prom<V +>{
      header1 = ld header;
      header2 = force? header1;
      checkMissing(header2);
      return header2;
    };
    p2 = prom<V +>{
      sep1 = ld sep;
      sep2 = force? sep1;
      checkMissing(sep2);
      return sep2;
    };
    p3 = prom<V +>{
      quote1 = ld quote;
      quote2 = force? quote1;
      checkMissing(quote2);
      return quote2;
    };
    p4 = prom<V +>{
      dec1 = ld dec;
      dec2 = force? dec1;
      checkMissing(dec2);
      return dec2;
    };
    p5 = prom<V +>{
      fill1 = ld fill;
      fill2 = force? fill1;
      checkMissing(fill2);
      return fill2;
    };
    p6 = prom<V +>{
      comment_char1 = ld `comment.char`;
      comment_char2 = force? comment_char1;
      checkMissing(comment_char2);
      return comment_char2;
    };
    ddd1 = ld `...`;
    r7 = dyn read_table[file, header, sep, quote, dec, fill, `comment.char`, `...`](p, p1, p2, p3, p4, p5, p6, ddd1);
    check L7() else D1();
  D1():
    deopt 17 [r7];
  L7():
    popenv;
    return r7;
  }
}
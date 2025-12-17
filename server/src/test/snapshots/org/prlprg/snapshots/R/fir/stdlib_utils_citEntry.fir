fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1303892105;
    st citEntry = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1303892105(entry, textVersion, header, footer, `...`) {
  (reg entry:*, reg textVersion:*, reg header:*, reg footer:*, reg ddd:dots) -+> V { var entry:*, var textVersion:*, reg textVersion_isMissing:L, reg textVersion_orDefault:*, var header:*, reg header_isMissing:L, reg header_orDefault:*, var footer:*, reg footer_isMissing:L, reg footer_orDefault:*, var `...`:dots?, reg bibentry:cls, reg entry1:*, reg entry2:V, reg p:p(V +), reg textVersion1:*, reg textVersion2:V, reg p1:p(V +), reg header1:*, reg header2:V, reg p2:p(V +), reg footer1:*, reg footer2:V, reg p3:p(V +), reg ddd1:dots?, reg r4:V |
    mkenv;
    st entry = entry;
    textVersion_isMissing = missing.0(textVersion);
    if textVersion_isMissing then L0(NULL) else L0(textVersion);
  L0(textVersion_orDefault):
    st textVersion = textVersion_orDefault;
    header_isMissing = missing.0(header);
    if header_isMissing then L1(NULL) else L1(header);
  L1(header_orDefault):
    st header = header_orDefault;
    footer_isMissing = missing.0(footer);
    if footer_isMissing then L2(NULL) else L2(footer);
  L2(footer_orDefault):
    st footer = footer_orDefault;
    st `...` = ddd;
    bibentry = ldf bibentry;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      entry1 = ld entry;
      entry2 = force? entry1;
      checkMissing(entry2);
      return entry2;
    };
    p1 = prom<V +>{
      textVersion1 = ld textVersion;
      textVersion2 = force? textVersion1;
      checkMissing(textVersion2);
      return textVersion2;
    };
    p2 = prom<V +>{
      header1 = ld header;
      header2 = force? header1;
      checkMissing(header2);
      return header2;
    };
    p3 = prom<V +>{
      footer1 = ld footer;
      footer2 = force? footer1;
      checkMissing(footer2);
      return footer2;
    };
    ddd1 = ld `...`;
    r4 = dyn bibentry[bibtype, textVersion, header, footer, `...`](p, p1, p2, p3, ddd1);
    check L4() else D1();
  D1():
    deopt 11 [r4];
  L4():
    popenv;
    return r4;
  }
}
fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner49449181;
    st xzfile = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner49449181(description, open, encoding, compression) {
  (reg description:*, reg open:*, reg encoding:*, reg compression:*) -+> V { var description:*, var open:*, reg open_isMissing:L, reg open_orDefault:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var compression:*, reg compression_isMissing:L, reg compression_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg description1:*, reg description2:V, reg open1:*, reg open2:V, reg encoding1:*, reg encoding2:V, reg compression1:*, reg compression2:V, reg xzfile:cls, reg r4:V |
    mkenv;
    st description = description;
    open_isMissing = missing.0(open);
    if open_isMissing then L0("") else L0(open);
  L0(open_orDefault):
    st open = open_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L1() else L2(encoding);
  L1():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("encoding");
      return r;
    };
    goto L2(p);
  L2(encoding_orDefault):
    st encoding = encoding_orDefault;
    compression_isMissing = missing.0(compression);
    if compression_isMissing then L3(6.0) else L3(compression);
  L3(compression_orDefault):
    st compression = compression_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L4(r3):
    popenv;
    return r3;
  L5():
    description1 = ld description;
    check L7() else D0();
  L6():
    r2 = dyn base(<lang xzfile(description, open, encoding, compression)>);
    goto L4(r2);
  D0():
    deopt 2 [description1];
  L7():
    description2 = force? description1;
    checkMissing(description2);
    open1 = ld open;
    check L8() else D1();
  D1():
    deopt 4 [open1];
  L8():
    open2 = force? open1;
    checkMissing(open2);
    encoding1 = ld encoding;
    check L9() else D2();
  D2():
    deopt 6 [encoding1];
  L9():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    compression1 = ld compression;
    check L10() else D3();
  D3():
    deopt 8 [compression1];
  L10():
    compression2 = force? compression1;
    checkMissing(compression2);
    xzfile = ldf xzfile in base;
    r4 = dyn xzfile(description2, open2, encoding2, compression2);
    check L11() else D4();
  D4():
    deopt 11 [r4];
  L11():
    goto L4(r4);
  }
}
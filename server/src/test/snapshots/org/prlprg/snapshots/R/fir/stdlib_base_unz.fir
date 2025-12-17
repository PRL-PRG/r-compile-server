fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2840837041;
    st unz = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2840837041(description, filename, open, encoding) {
  (reg description:*, reg filename:*, reg open:*, reg encoding:*) -+> V { var description:*, var filename:*, var open:*, reg open_isMissing:L, reg open_orDefault:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg paste:cls, reg description1:*, reg description2:V, reg p1:p(V +), reg filename1:*, reg filename2:V, reg p2:p(V +), reg r6:V, reg open1:*, reg open2:V, reg encoding1:*, reg encoding2:V, reg unz:cls, reg r7:V |
    mkenv;
    st description = description;
    st filename = filename;
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
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L3(r3):
    popenv;
    return r3;
  L4():
    paste = ldf paste;
    check L6() else D0();
  L5():
    r2 = dyn base(<lang unz(paste(description, filename, sep=":"), open, encoding)>);
    goto L3(r2);
  D0():
    deopt 3 [];
  L6():
    p1 = prom<V +>{
      description1 = ld description;
      description2 = force? description1;
      checkMissing(description2);
      return description2;
    };
    p2 = prom<V +>{
      filename1 = ld filename;
      filename2 = force? filename1;
      checkMissing(filename2);
      return filename2;
    };
    r6 = dyn paste[, , sep](p1, p2, ":");
    check L7() else D1();
  D1():
    deopt 8 [r6];
  L7():
    open1 = ld open;
    check L8() else D2();
  D2():
    deopt 9 [open1];
  L8():
    open2 = force? open1;
    checkMissing(open2);
    encoding1 = ld encoding;
    check L9() else D3();
  D3():
    deopt 11 [encoding1];
  L9():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    unz = ldf unz in base;
    r7 = dyn unz(r6, open2, encoding2);
    check L10() else D4();
  D4():
    deopt 14 [r7];
  L10():
    goto L3(r7);
  }
}
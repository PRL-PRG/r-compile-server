fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner519306509;
    st pipe = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner519306509(description, open, encoding) {
  (reg description:*, reg open:*, reg encoding:*) -+> V { var description:*, var open:*, reg open_isMissing:L, reg open_orDefault:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg description1:*, reg description2:V, reg open1:*, reg open2:V, reg encoding1:*, reg encoding2:V, reg pipe:cls, reg r4:V |
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
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L3(r3):
    popenv;
    return r3;
  L4():
    description1 = ld description;
    check L6() else D0();
  L5():
    r2 = dyn base(<lang pipe(description, open, encoding)>);
    goto L3(r2);
  D0():
    deopt 2 [description1];
  L6():
    description2 = force? description1;
    checkMissing(description2);
    open1 = ld open;
    check L7() else D1();
  D1():
    deopt 4 [open1];
  L7():
    open2 = force? open1;
    checkMissing(open2);
    encoding1 = ld encoding;
    check L8() else D2();
  D2():
    deopt 6 [encoding1];
  L8():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    pipe = ldf pipe in base;
    r4 = dyn pipe(description2, open2, encoding2);
    check L9() else D3();
  D3():
    deopt 9 [r4];
  L9():
    goto L3(r4);
  }
}
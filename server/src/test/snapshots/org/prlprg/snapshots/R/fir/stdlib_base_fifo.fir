fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1334345372;
    st fifo = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1334345372(description, open, blocking, encoding) {
  (reg description:*, reg open:*, reg blocking:*, reg encoding:*) -+> V { var description:*, var open:*, reg open_isMissing:L, reg open_orDefault:*, var blocking:*, reg blocking_isMissing:L, reg blocking_orDefault:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg description1:*, reg description2:V, reg open1:*, reg open2:V, reg blocking1:*, reg blocking2:V, reg encoding1:*, reg encoding2:V, reg fifo:cls, reg r4:V |
    mkenv;
    st description = description;
    open_isMissing = missing.0(open);
    if open_isMissing then L0("") else L0(open);
  L0(open_orDefault):
    st open = open_orDefault;
    blocking_isMissing = missing.0(blocking);
    if blocking_isMissing then L1(FALSE) else L1(blocking);
  L1(blocking_orDefault):
    st blocking = blocking_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L2() else L3(encoding);
  L2():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("encoding");
      return r;
    };
    goto L3(p);
  L3(encoding_orDefault):
    st encoding = encoding_orDefault;
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
    r2 = dyn base(<lang fifo(description, open, blocking, encoding)>);
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
    blocking1 = ld blocking;
    check L9() else D2();
  D2():
    deopt 6 [blocking1];
  L9():
    blocking2 = force? blocking1;
    checkMissing(blocking2);
    encoding1 = ld encoding;
    check L10() else D3();
  D3():
    deopt 8 [encoding1];
  L10():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    fifo = ldf fifo in base;
    r4 = dyn fifo(description2, open2, blocking2, encoding2);
    check L11() else D4();
  D4():
    deopt 11 [r4];
  L11():
    goto L4(r4);
  }
}
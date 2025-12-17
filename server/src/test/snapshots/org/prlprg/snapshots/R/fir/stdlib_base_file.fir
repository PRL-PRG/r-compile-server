fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner551110034;
    st file = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner551110034(description, open, blocking, encoding, raw, method) {
  (reg description:*, reg open:*, reg blocking:*, reg encoding:*, reg raw:*, reg method:*) -+> V { var description:*, reg description_isMissing:L, reg description_orDefault:*, var open:*, reg open_isMissing:L, reg open_orDefault:*, var blocking:*, reg blocking_isMissing:L, reg blocking_orDefault:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var raw:*, reg raw_isMissing:L, reg raw_orDefault:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, reg getOption1:cls, reg r2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg description1:*, reg description2:V, reg open1:*, reg open2:V, reg blocking1:*, reg blocking2:V, reg encoding1:*, reg encoding2:V, reg method1:*, reg method2:V, reg raw1:*, reg raw2:V, reg file:cls, reg r6:V |
    mkenv;
    description_isMissing = missing.0(description);
    if description_isMissing then L0("") else L0(description);
  L0(description_orDefault):
    st description = description_orDefault;
    open_isMissing = missing.0(open);
    if open_isMissing then L1("") else L1(open);
  L1(open_orDefault):
    st open = open_orDefault;
    blocking_isMissing = missing.0(blocking);
    if blocking_isMissing then L2(TRUE) else L2(blocking);
  L2(blocking_orDefault):
    st blocking = blocking_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L3() else L4(encoding);
  L3():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("encoding");
      return r;
    };
    goto L4(p);
  L4(encoding_orDefault):
    st encoding = encoding_orDefault;
    raw_isMissing = missing.0(raw);
    if raw_isMissing then L5(FALSE) else L5(raw);
  L5(raw_orDefault):
    st raw = raw_orDefault;
    method_isMissing = missing.0(method);
    if method_isMissing then L6() else L7(method);
  L6():
    p1 = prom<V +>{
      getOption1 = ldf getOption;
      r2 = dyn getOption1("url.method", "default");
      return r2;
    };
    goto L7(p1);
  L7(method_orDefault):
    st method = method_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L8(r5):
    popenv;
    return r5;
  L9():
    description1 = ld description;
    check L11() else D0();
  L10():
    r4 = dyn base(<lang file(description, open, blocking, encoding, method, raw)>);
    goto L8(r4);
  D0():
    deopt 2 [description1];
  L11():
    description2 = force? description1;
    checkMissing(description2);
    open1 = ld open;
    check L12() else D1();
  D1():
    deopt 4 [open1];
  L12():
    open2 = force? open1;
    checkMissing(open2);
    blocking1 = ld blocking;
    check L13() else D2();
  D2():
    deopt 6 [blocking1];
  L13():
    blocking2 = force? blocking1;
    checkMissing(blocking2);
    encoding1 = ld encoding;
    check L14() else D3();
  D3():
    deopt 8 [encoding1];
  L14():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    method1 = ld method;
    check L15() else D4();
  D4():
    deopt 10 [method1];
  L15():
    method2 = force? method1;
    checkMissing(method2);
    raw1 = ld raw;
    check L16() else D5();
  D5():
    deopt 12 [raw1];
  L16():
    raw2 = force? raw1;
    checkMissing(raw2);
    file = ldf file in base;
    r6 = dyn file(description2, open2, blocking2, encoding2, method2, raw2);
    check L17() else D6();
  D6():
    deopt 15 [r6];
  L17():
    goto L8(r6);
  }
}
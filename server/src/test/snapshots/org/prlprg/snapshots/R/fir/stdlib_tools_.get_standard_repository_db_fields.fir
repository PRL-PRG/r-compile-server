fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1988390695;
    st `.get_standard_repository_db_fields` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1988390695(type) {
  (reg type:*) -+> V { var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg match_arg:cls, reg type1:*, reg type2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg type3:*, reg type4:V, reg r8:V, reg c1:L, reg r9:V, reg c2:cls, reg r10:V |
    mkenv;
    type_isMissing = missing.0(type);
    if type_isMissing then L0() else L1(type);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("source", "mac.binary", "win.binary");
      goto L0(r2);
    L2():
      r = dyn base("source", "mac.binary", "win.binary");
      goto L0(r);
    };
    goto L1(p);
  L1(type_orDefault):
    st type = type_orDefault;
    match_arg = ldf `match.arg`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p1 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r5 = dyn match_arg(p1);
    check L6() else D1();
  D1():
    deopt 3 [r5];
  L6():
    st type = r5;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L2(r7):
    popenv;
    return r7;
  L7():
    type3 = ld type;
    check L9() else D2();
  L8():
    r6 = dyn base1("Package", "Version", "Priority", "Depends", "Imports", "LinkingTo", "Suggests", "Enhances", "License", "License_is_FOSS", "License_restricts_use", "OS_type", "Archs", "MD5sum", <lang if(`==`(type, "source"), "NeedsCompilation")>);
    goto L2(r6);
  D2():
    deopt 21 [type3];
  L9():
    type4 = force? type3;
    checkMissing(type4);
    r8 = `==`(type4, "source");
    c1 = `as.logical`(r8);
    if c1 then L10() else L3();
  L3():
    goto L4(NULL);
  L4(r9):
    c2 = ldf c in base;
    r10 = dyn c2("Package", "Version", "Priority", "Depends", "Imports", "LinkingTo", "Suggests", "Enhances", "License", "License_is_FOSS", "License_restricts_use", "OS_type", "Archs", "MD5sum", r9);
    check L12() else D3();
  L10():
    goto L4("NeedsCompilation");
  D3():
    deopt 30 [r10];
  L12():
    goto L2(r10);
  }
}
fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner268583268;
    st `.get_internal_S3_generics` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner268583268(primitive) {
  (reg primitive:*) -+> V { var primitive:*, reg primitive_isMissing:L, reg primitive_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _internalGenerics:*, reg _internalGenerics1:V, reg primitive1:*, reg primitive2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg _get_S3_primitive_generics:cls, reg r4:V, reg c1:cls, reg r5:V, reg r6:V, reg c2:cls, reg r7:V |
    mkenv;
    primitive_isMissing = missing.0(primitive);
    if primitive_isMissing then L0(TRUE) else L0(primitive);
  L0(primitive_orDefault):
    st primitive = primitive_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(r1):
    popenv;
    return r1;
  L5():
    _internalGenerics = ld `.internalGenerics`;
    check L7() else D0();
  L6():
    r = dyn base(<sym .internalGenerics>, <lang if(primitive, c("[", "[[", "$", "[<-", "[[<-", "$<-", "@", "@<-", .get_S3_primitive_generics()))>);
    goto L1(r);
  D0():
    deopt 2 [_internalGenerics];
  L7():
    _internalGenerics1 = force? _internalGenerics;
    checkMissing(_internalGenerics1);
    primitive1 = ld primitive;
    check L8() else D1();
  D1():
    deopt 4 [primitive1];
  L8():
    primitive2 = force? primitive1;
    checkMissing(primitive2);
    c = `as.logical`(primitive2);
    if c then L9() else L2();
  L2():
    goto L4(NULL);
  L4(r6):
    c2 = ldf c in base;
    r7 = dyn c2(_internalGenerics1, r6);
    check L16() else D5();
  L9():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  D5():
    deopt 24 [r7];
  L3(r3):
    goto L4(r3);
  L10():
    _get_S3_primitive_generics = ldf `.get_S3_primitive_generics`;
    check L12() else D2();
  L11():
    r2 = dyn base1("[", "[[", "$", "[<-", "[[<-", "$<-", "@", "@<-", <lang .get_S3_primitive_generics()>);
    goto L3(r2);
  L16():
    goto L1(r7);
  D2():
    deopt 17 [];
  L12():
    r4 = dyn _get_S3_primitive_generics();
    check L13() else D3();
  D3():
    deopt 18 [r4];
  L13():
    c1 = ldf c in base;
    r5 = dyn c1("[", "[[", "$", "[<-", "[[<-", "$<-", "@", "@<-", r4);
    check L14() else D4();
  D4():
    deopt 20 [r5];
  L14():
    goto L3(r5);
  }
}
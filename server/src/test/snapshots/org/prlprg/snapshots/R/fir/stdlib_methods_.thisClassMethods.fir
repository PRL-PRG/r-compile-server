fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner485967088;
    st `.thisClassMethods` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner485967088(methodsEnv, className) {
  (reg methodsEnv:*, reg className:*) -+> V { var methodsEnv:*, var className:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg methodsEnv1:*, reg methodsEnv2:V, reg names:cls, reg r5:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg get:cls, reg what:*, reg what1:V, reg p:p(V +), reg methodsEnv3:*, reg methodsEnv4:V, reg p1:p(V +), reg r8:V, reg is:cls, reg def:*, reg def1:V, reg p2:p(V +), reg r10:V, reg c1:L, reg i6:I, reg c3:V, reg __:cls, reg r11:V, reg className1:*, reg className2:V, reg r12:V, reg c4:L, reg c5:V, reg c7:L, reg __1:cls, reg r13:V, reg l1:*, reg c8:L, reg i11:I, reg r15:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg i13:I, reg r17:V, reg dx1:V, reg what2:*, reg what3:V, reg ____:cls, reg r18:V, reg i14:I, reg value:*, reg value1:V |
    mkenv;
    st methodsEnv = methodsEnv;
    st className = className;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    st value = r1;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L8():
    list = ldf list in base;
    r2 = dyn list();
    check L10() else D0();
  L9():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  L1(r4):
    s = toForSeq(r4);
    l = length(s);
    i = 0;
    goto L2(i);
  L10():
    goto L0(r2);
  L11():
    methodsEnv1 = ld methodsEnv;
    check L13() else D1();
  L12():
    r3 = dyn base1(<sym methodsEnv>);
    goto L1(r3);
  D1():
    deopt 7 [methodsEnv1];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L15() else L7();
  L13():
    methodsEnv2 = force? methodsEnv1;
    checkMissing(methodsEnv2);
    names = ldf names in base;
    r5 = dyn names(methodsEnv2);
    check L14() else D2();
  D2():
    deopt 10 [r5];
  L7():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    get = ldf get;
    check L16() else D3();
  L14():
    goto L1(r5);
  L15():
    value = ld value;
    check L29() else D9();
  D3():
    deopt 12 [i2];
  D9():
    deopt 40 [value];
  L16():
    p = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    p1 = prom<V +>{
      methodsEnv3 = ld methodsEnv;
      methodsEnv4 = force? methodsEnv3;
      checkMissing(methodsEnv4);
      return methodsEnv4;
    };
    r8 = dyn get[, envir](p, p1);
    check L17() else D4();
  L29():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  D4():
    deopt 16 [i2, r8];
  L17():
    st def = r8;
    is = ldf is;
    check L18() else D5();
  D5():
    deopt 19 [i2];
  L18():
    p2 = prom<V +>{
      def = ld def;
      def1 = force? def;
      checkMissing(def1);
      return def1;
    };
    r10 = dyn is(p2, "refMethodDef");
    check L19() else D6();
  D6():
    deopt 22 [i2, r10];
  L19():
    c1 = `as.logical`(r10);
    if c1 then L20() else L3(i2, c1);
  L3(i6, c3):
    c7 = `as.logical`(c3);
    if c7 then L23() else L4();
  L20():
    __ = ldf `@` in base;
    r11 = dyn __(<sym def>, <sym refClassName>);
    className1 = ld className;
    check L21() else D7();
  D7():
    deopt 24 [i2, c1, r11, className1];
  L4():
    goto L6(i6);
  L6(i14):
    goto L2(i14);
  L21():
    className2 = force? className1;
    checkMissing(className2);
    r12 = `==`(r11, className2);
    c4 = `as.logical`(r12);
    c5 = `&&`(c1, c4);
    goto L3(i2, c5);
  L23():
    __1 = ldf `@` in base;
    r13 = dyn __1(<sym def>, <sym .Data>);
    l1 = ld value;
    c8 = `is.object`(l1);
    if c8 then L24() else L25(i6, r13, l1);
  L5(i13, r17, dx1):
    st value = dx1;
    goto L6(i13);
  L24():
    dr = tryDispatchBuiltin.0("[[<-", l1, r13);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L26() else L25(i6, r13, dr);
  L25(i11, r15, l3):
    what2 = ld what;
    check L27() else D8();
  D8():
    deopt 31 [i11, r15, l3, r13, what2];
  L26():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(i6, r13, dx);
  L27():
    what3 = force? what2;
    ____ = ldf `[[<-` in base;
    r18 = dyn ____(l3, r13, what3);
    goto L5(i11, r15, r18);
  }
}
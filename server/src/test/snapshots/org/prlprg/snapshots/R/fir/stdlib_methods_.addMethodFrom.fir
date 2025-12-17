fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3082332595;
    st `.addMethodFrom` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3082332595(def, arg, Class, fromClass) {
  (reg def:*, reg arg:*, reg Class:*, reg fromClass:*) -+> V { var def:*, var arg:*, var Class:*, var fromClass:*, reg is:cls, reg def1:*, reg def2:V, reg p:p(V +), reg r1:V, reg c:L, reg Class1:*, reg Class2:V, reg l:*, reg __:cls, reg target:*, reg target1:V, reg p1:p(V +), reg r3:V, reg c1:L, reg Class4:V, reg l2:*, reg r5:V, reg dr:V, reg dc:L, reg dx:V, reg Class6:V, reg l4:*, reg dx1:V, reg arg1:*, reg arg2:V, reg ____:cls, reg r6:V, reg ___:cls, reg r7:V, reg fromClass1:*, reg fromClass2:V, reg l5:*, reg __1:cls, reg defined:*, reg defined1:V, reg p2:p(V +), reg r9:V, reg c2:L, reg fromClass4:V, reg l7:*, reg r11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg fromClass6:V, reg l9:*, reg dx3:V, reg arg3:*, reg arg4:V, reg ____1:cls, reg r12:V, reg ___1:cls, reg r13:V, reg def3:*, reg def4:V |
    mkenv;
    st def = def;
    st arg = arg;
    st Class = Class;
    st fromClass = fromClass;
    is = ldf is;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      def1 = ld def;
      def2 = force? def1;
      checkMissing(def2);
      return def2;
    };
    r1 = dyn is(p, "MethodDefinition");
    check L5() else D1();
  D1():
    deopt 4 [r1];
  L5():
    c = `as.logical`(r1);
    if c then L6() else L0();
  L0():
    goto L3();
  L3():
    def3 = ld def;
    check L26() else D14();
  L6():
    Class1 = ld Class;
    check L7() else D2();
  D2():
    deopt 5 [Class1];
  D14():
    deopt 39 [def3];
  L7():
    Class2 = force? Class1;
    checkMissing(Class2);
    l = ld def;
    __ = ldf `@`;
    check L8() else D3();
  L26():
    def4 = force? def3;
    checkMissing(def4);
    popenv;
    return def4;
  D3():
    deopt 8 [Class2, l, Class2];
  L8():
    p1 = prom<V +>{
      target = ld target;
      target1 = force? target;
      checkMissing(target1);
      return target1;
    };
    r3 = dyn __(Class2, NULL, p1);
    check L9() else D4();
  D4():
    deopt 11 [Class2, l, Class2, r3];
  L9():
    c1 = `is.object`(r3);
    if c1 then L10() else L11(Class2, l, r3);
  L1(Class6, l4, dx1):
    ___ = ldf `@<-`;
    check L14() else D6();
  L10():
    dr = tryDispatchBuiltin.0("[[<-", r3, Class2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(Class2, l, dr);
  L11(Class4, l2, r5):
    arg1 = ld arg;
    check L13() else D5();
  D5():
    deopt 13 [Class4, l2, r5, Class2, arg1];
  D6():
    deopt 16 [Class6, l4, dx1];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(Class2, l, dx);
  L13():
    arg2 = force? arg1;
    ____ = ldf `[[<-` in base;
    r6 = dyn ____(r5, Class2, arg2);
    goto L1(Class4, l2, r6);
  L14():
    r7 = dyn ___(l4, NULL, "target", dx1);
    check L15() else D7();
  D7():
    deopt 19 [Class6, r7];
  L15():
    st def = r7;
    fromClass1 = ld fromClass;
    check L16() else D8();
  D8():
    deopt 21 [fromClass1];
  L16():
    fromClass2 = force? fromClass1;
    checkMissing(fromClass2);
    l5 = ld def;
    __1 = ldf `@`;
    check L17() else D9();
  D9():
    deopt 24 [fromClass2, l5, fromClass2];
  L17():
    p2 = prom<V +>{
      defined = ld defined;
      defined1 = force? defined;
      checkMissing(defined1);
      return defined1;
    };
    r9 = dyn __1(fromClass2, NULL, p2);
    check L18() else D10();
  D10():
    deopt 27 [fromClass2, l5, fromClass2, r9];
  L18():
    c2 = `is.object`(r9);
    if c2 then L19() else L20(fromClass2, l5, r9);
  L2(fromClass6, l9, dx3):
    ___1 = ldf `@<-`;
    check L23() else D12();
  L19():
    dr2 = tryDispatchBuiltin.0("[[<-", r9, fromClass2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L21() else L20(fromClass2, l5, dr2);
  L20(fromClass4, l7, r11):
    arg3 = ld arg;
    check L22() else D11();
  D11():
    deopt 29 [fromClass4, l7, r11, fromClass2, arg3];
  D12():
    deopt 32 [fromClass6, l9, dx3];
  L21():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(fromClass2, l5, dx2);
  L22():
    arg4 = force? arg3;
    ____1 = ldf `[[<-` in base;
    r12 = dyn ____1(r11, fromClass2, arg4);
    goto L2(fromClass4, l7, r12);
  L23():
    r13 = dyn ___1(l9, NULL, "defined", dx3);
    check L24() else D13();
  D13():
    deopt 35 [fromClass6, r13];
  L24():
    st def = r13;
    goto L3();
  }
}
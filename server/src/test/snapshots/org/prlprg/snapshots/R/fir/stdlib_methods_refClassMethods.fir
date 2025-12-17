fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2023598292;
    st refClassMethods = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2023598292(Class) {
  (reg Class:*) -+> V { var Class:*, reg getClass:cls, reg Class1:*, reg Class2:V, reg p:p(V +), reg r1:V, reg is:cls, reg ClassDef:*, reg ClassDef1:V, reg p1:p(V +), reg r3:V, reg c:L, reg as_list:cls, reg __:cls, reg r4:V, reg p2:p(V +), reg r6:V, reg stop:cls, reg gettextf:cls, reg __1:cls, reg r8:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V, reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg value:*, reg value1:V, reg r15:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg as:cls, reg value2:*, reg value3:V, reg c2:L, reg value5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __2:cls, reg r16:V, reg p5:p(V +), reg r18:V, reg l1:*, reg c3:L, reg i8:I, reg r20:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i10:I, reg dx3:V, reg i11:*, reg i12:V, reg ____:cls, reg r23:V, reg value6:*, reg value7:V |
    mkenv;
    st Class = Class;
    getClass = ldf getClass;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    r1 = dyn getClass(p);
    check L7() else D1();
  D1():
    deopt 3 [r1];
  L7():
    st ClassDef = r1;
    is = ldf is;
    check L8() else D2();
  D2():
    deopt 6 [];
  L8():
    p1 = prom<V +>{
      ClassDef = ld ClassDef;
      ClassDef1 = force? ClassDef;
      checkMissing(ClassDef1);
      return ClassDef1;
    };
    r3 = dyn is(p1, "refClassRepresentation");
    check L9() else D3();
  D3():
    deopt 9 [r3];
  L9():
    c = `as.logical`(r3);
    if c then L10() else L0();
  L0():
    stop = ldf stop;
    check L14() else D6();
  L1():
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L10():
    as_list = ldf `as.list`;
    check L11() else D4();
  D4():
    deopt 11 [];
  D6():
    deopt 16 [];
  L2(r14):
    s = toForSeq(r14);
    l = length(s);
    i = 0;
    goto L3(i);
  L11():
    p2 = prom<V +>{
      __ = ldf `@` in base;
      r4 = dyn __(<sym ClassDef>, <sym refMethods>);
      return r4;
    };
    r6 = dyn as_list(p2);
    check L12() else D5();
  L14():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        __1 = ldf `@` in base;
        r8 = dyn __1(<sym ClassDef>, <sym name>);
        return r8;
      };
      r10 = dyn gettextf("not a reference class: %s", p3);
      return r10;
    };
    r12 = dyn stop[, domain](p4, NA_LGL);
    check L15() else D7();
  L16():
    value = ld value;
    check L18() else D8();
  L17():
    r13 = dyn base(<sym value>);
    goto L2(r13);
  D5():
    deopt 13 [r6];
  D7():
    deopt 20 [r12];
  D8():
    deopt 22 [value];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L19() else L5();
  L12():
    st value = r6;
    goto L1();
  L15():
    goto L1();
  L18():
    value1 = force? value;
    checkMissing(value1);
    r15 = seq_along(value1);
    goto L2(r15);
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    as = ldf as;
    check L20() else D9();
  L19():
    value6 = ld value;
    check L26() else D12();
  D9():
    deopt 26 [i2];
  D12():
    deopt 38 [value6];
  L20():
    p5 = prom<V +>{
      value2 = ld value;
      value3 = force? value2;
      checkMissing(value3);
      c2 = `is.object`(value3);
      if c2 then L1() else L2(value3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", value3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(value5):
      i5 = ld i;
      i6 = force? i5;
      __2 = ldf `[[` in base;
      r16 = dyn __2(value5, i6);
      goto L0(r16);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r18 = dyn as(p5, "function");
    check L21() else D10();
  L26():
    value7 = force? value6;
    checkMissing(value7);
    popenv;
    return value7;
  D10():
    deopt 29 [i2, r18];
  L21():
    l1 = ld value;
    c3 = `is.object`(l1);
    if c3 then L22() else L23(i2, r18, l1);
  L4(i10, dx3):
    st value = dx3;
    goto L3(i10);
  L22():
    dr2 = tryDispatchBuiltin.0("[[<-", l1, r18);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(i2, r18, dr2);
  L23(i8, r20, l3):
    i11 = ld i;
    check L25() else D11();
  D11():
    deopt 31 [i8, r20, l3, r18, i11];
  L24():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(i2, dx2);
  L25():
    i12 = force? i11;
    ____ = ldf `[[<-` in base;
    r23 = dyn ____(l3, r18, i12);
    goto L4(i8, r23);
  }
}
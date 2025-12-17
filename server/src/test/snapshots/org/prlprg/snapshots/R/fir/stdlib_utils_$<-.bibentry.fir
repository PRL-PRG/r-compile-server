fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner247789382;
    st `$<-.bibentry` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner247789382(x, name, value) {
  (reg x:*, reg name:*, reg value:*) -+> V { var x:*, var name:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg _listify:cls, reg value1:*, reg value2:V, reg p:p(V +), reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg length:cls, reg r9:V, reg rep_len:cls, reg r10:V, reg name1:*, reg name2:V, reg r11:V, reg c:L, reg _bibentry_canonicalize_bibtype_value:cls, reg value3:*, reg value4:V, reg p1:p(V +), reg r13:V, reg _in_:cls, reg name3:*, reg name4:V, reg p2:p(V +), reg bibentry_attribute_names:*, reg bibentry_attribute_names1:V, reg p3:p(V +), reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg y:*, reg y1:V, reg r20:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x5:V, reg _bibentry_elt_fld_gets:cls, reg y2:*, reg y3:V, reg c2:L, reg y5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r21:V, reg p4:p(V +), reg name5:*, reg name6:V, reg p5:p(V +), reg value5:*, reg value6:V, reg c3:L, reg value8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i7:*, reg i8:V, reg __1:cls, reg r24:V, reg p6:p(V +), reg a:*, reg a1:V, reg p7:p(V +), reg r27:V, reg l1:*, reg c4:L, reg i10:I, reg r29:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i12:I, reg dx5:V, reg i13:*, reg i14:V, reg ____:cls, reg r32:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg x6:*, reg x7:V, reg class:cls, reg r35:V, reg l4:*, reg class__:cls, reg r36:V, reg y6:*, reg y7:V |
    mkenv;
    st x = x;
    st name = name;
    st value = value;
    sym = ldf unclass;
    base = ldf unclass in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r1):
    st y = r1;
    sym1 = ldf rep_len;
    base1 = ldf rep_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L10():
    x1 = ld x;
    check L12() else D0();
  L11():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    st value = r4;
    name1 = ld name;
    check L23() else D7();
  L12():
    x2 = force? x1;
    checkMissing(x2);
    unclass = ldf unclass in base;
    r2 = dyn unclass(x2);
    check L13() else D1();
  L14():
    _listify = ldf `.listify`;
    check L16() else D2();
  L15():
    r3 = dyn base1(<lang .listify(value)>, <lang length(x)>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 10 [];
  D7():
    deopt 22 [name1];
  L13():
    goto L0(r2);
  L16():
    p = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    r6 = dyn _listify(p);
    check L17() else D3();
  L23():
    name2 = force? name1;
    checkMissing(name2);
    r11 = `==`(name2, "bibtype");
    c = `as.logical`(r11);
    if c then L24() else L3();
  D3():
    deopt 12 [r6];
  L3():
    goto L4();
  L4():
    _in_ = ldf `%in%`;
    check L28() else D10();
  L17():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L24():
    _bibentry_canonicalize_bibtype_value = ldf `.bibentry_canonicalize_bibtype_value`;
    check L25() else D8();
  D8():
    deopt 27 [];
  D10():
    deopt 34 [];
  L2(r8):
    rep_len = ldf rep_len in base;
    r10 = dyn rep_len(r6, r8);
    check L22() else D6();
  L18():
    x3 = ld x;
    check L20() else D4();
  L19():
    r7 = dyn base2(<sym x>);
    goto L2(r7);
  L25():
    p1 = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    r13 = dyn _bibentry_canonicalize_bibtype_value(p1);
    check L26() else D9();
  L28():
    p2 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      return name4;
    };
    p3 = prom<V +>{
      bibentry_attribute_names = ld bibentry_attribute_names;
      bibentry_attribute_names1 = force? bibentry_attribute_names;
      checkMissing(bibentry_attribute_names1);
      return bibentry_attribute_names1;
    };
    r17 = dyn _in_(p2, p3);
    check L29() else D11();
  D4():
    deopt 15 [x3];
  D6():
    deopt 20 [r10];
  D9():
    deopt 29 [r13];
  D11():
    deopt 37 [r17];
  L20():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r9 = dyn length(x4);
    check L21() else D5();
  L22():
    goto L1(r10);
  L26():
    st value = r13;
    goto L4();
  L29():
    st a = r17;
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  D5():
    deopt 18 [r9];
  L5(r19):
    s = toForSeq(r19);
    l = length(s);
    i = 0;
    goto L6(i);
  L21():
    goto L2(r9);
  L30():
    y = ld y;
    check L32() else D12();
  L31():
    r18 = dyn base3(<sym y>);
    goto L5(r18);
  D12():
    deopt 40 [y];
  L6(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L33() else L8();
  L32():
    y1 = force? y;
    checkMissing(y1);
    r20 = seq_along(y1);
    goto L5(r20);
  L8():
    x5 = `[[`(s, i2, NULL, TRUE);
    st i = x5;
    _bibentry_elt_fld_gets = ldf `.bibentry_elt_fld_gets`;
    check L34() else D13();
  L33():
    sym4 = ldf class;
    base4 = ldf class in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  D13():
    deopt 44 [i2];
  L9(r34):
    l4 = ld y;
    class__ = ldf `class<-`;
    check L44() else D18();
  L34():
    p4 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      c2 = `is.object`(y3);
      if c2 then L1() else L2(y3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", y3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(y5):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[[` in base;
      r21 = dyn __(y5, i6);
      goto L0(r21);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p5 = prom<V +>{
      name5 = ld name;
      name6 = force? name5;
      checkMissing(name6);
      return name6;
    };
    p6 = prom<V +>{
      value5 = ld value;
      value6 = force? value5;
      checkMissing(value6);
      c3 = `is.object`(value6);
      if c3 then L1() else L2(value6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", value6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(value8):
      i7 = ld i;
      i8 = force? i7;
      __1 = ldf `[[` in base;
      r24 = dyn __1(value8, i8);
      goto L0(r24);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p7 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    r27 = dyn _bibentry_elt_fld_gets(p4, p5, p6, p7);
    check L35() else D14();
  L40():
    x6 = ld x;
    check L42() else D16();
  L41():
    r33 = dyn base4(<sym x>);
    goto L9(r33);
  D14():
    deopt 49 [i2, r27];
  D16():
    deopt 60 [x6];
  D18():
    deopt 65 [r34, l4, r34];
  L35():
    l1 = ld y;
    c4 = `is.object`(l1);
    if c4 then L36() else L37(i2, r27, l1);
  L42():
    x7 = force? x6;
    checkMissing(x7);
    class = ldf class in base;
    r35 = dyn class(x7);
    check L43() else D17();
  L44():
    r36 = dyn class__(l4, NULL, r34);
    check L45() else D19();
  D17():
    deopt 63 [r35];
  D19():
    deopt 67 [r34, r36];
  L7(i12, dx5):
    st y = dx5;
    goto L6(i12);
  L36():
    dr4 = tryDispatchBuiltin.0("[[<-", l1, r27);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L38() else L37(i2, r27, dr4);
  L37(i10, r29, l3):
    i13 = ld i;
    check L39() else D15();
  L43():
    goto L9(r35);
  L45():
    st y = r36;
    y6 = ld y;
    check L46() else D20();
  D15():
    deopt 51 [i10, r29, l3, r27, i13];
  D20():
    deopt 69 [y6];
  L38():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(i2, dx4);
  L39():
    i14 = force? i13;
    ____ = ldf `[[<-` in base;
    r32 = dyn ____(l3, r27, i14);
    goto L7(i10, r32);
  L46():
    y7 = force? y6;
    checkMissing(y7);
    popenv;
    return y7;
  }
}
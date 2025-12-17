fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner247789382;
    st `$<-.person` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner247789382(x, name, value) {
  (reg x:*, reg name:*, reg value:*) -+> V { var x:*, var name:*, var value:*, reg match_arg:cls, reg name1:*, reg name2:V, reg p:p(V +), reg person_field_names:*, reg person_field_names1:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg unclass:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg _listify:cls, reg value1:*, reg value2:V, reg p2:p(V +), reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg y:*, reg y1:V, reg length:cls, reg r12:V, reg rep_len:cls, reg r13:V, reg name3:*, reg name4:V, reg r14:V, reg c:L, reg lapply:cls, reg value3:*, reg value4:V, reg p3:p(V +), reg _canonicalize_person_role:*, reg _canonicalize_person_role1:V, reg p4:p(V +), reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg y2:*, reg y3:V, reg r21:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x3:V, reg _person_elt_fld_gets:cls, reg y4:*, reg y5:V, reg c2:L, reg y7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r22:V, reg p5:p(V +), reg name5:*, reg name6:V, reg p6:p(V +), reg value5:*, reg value6:V, reg c3:L, reg value8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i7:*, reg i8:V, reg __1:cls, reg r25:V, reg p7:p(V +), reg r27:V, reg l1:*, reg c4:L, reg i10:I, reg r29:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i12:I, reg dx5:V, reg i13:*, reg i14:V, reg ____:cls, reg r32:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg x4:*, reg x5:V, reg class:cls, reg r35:V, reg l4:*, reg class__:cls, reg r36:V, reg y8:*, reg y9:V |
    mkenv;
    st x = x;
    st name = name;
    st value = value;
    match_arg = ldf `match.arg`;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p1 = prom<V +>{
      person_field_names = ld person_field_names;
      person_field_names1 = force? person_field_names;
      checkMissing(person_field_names1);
      return person_field_names1;
    };
    r2 = dyn match_arg(p, p1);
    check L11() else D1();
  D1():
    deopt 4 [r2];
  L11():
    st name = r2;
    sym = ldf unclass;
    base = ldf unclass in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r4):
    st y = r4;
    sym1 = ldf rep_len;
    base1 = ldf rep_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L12():
    x1 = ld x;
    check L14() else D2();
  L13():
    r3 = dyn base(<sym x>);
    goto L0(r3);
  D2():
    deopt 8 [x1];
  L1(r7):
    st value = r7;
    name3 = ld name;
    check L25() else D9();
  L14():
    x2 = force? x1;
    checkMissing(x2);
    unclass = ldf unclass in base;
    r5 = dyn unclass(x2);
    check L15() else D3();
  L16():
    _listify = ldf `.listify`;
    check L18() else D4();
  L17():
    r6 = dyn base1(<lang .listify(value)>, <lang length(y)>);
    goto L1(r6);
  D3():
    deopt 11 [r5];
  D4():
    deopt 16 [];
  D9():
    deopt 28 [name3];
  L15():
    goto L0(r5);
  L18():
    p2 = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    r9 = dyn _listify(p2);
    check L19() else D5();
  L25():
    name4 = force? name3;
    checkMissing(name4);
    r14 = `==`(name4, "role");
    c = `as.logical`(r14);
    if c then L26() else L3();
  D5():
    deopt 18 [r9];
  L3():
    goto L4();
  L4():
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  L19():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L26():
    lapply = ldf lapply;
    check L27() else D10();
  D10():
    deopt 33 [];
  L2(r11):
    rep_len = ldf rep_len in base;
    r13 = dyn rep_len(r9, r11);
    check L24() else D8();
  L5(r20):
    s = toForSeq(r20);
    l = length(s);
    i = 0;
    goto L6(i);
  L20():
    y = ld y;
    check L22() else D6();
  L21():
    r10 = dyn base2(<sym y>);
    goto L2(r10);
  L27():
    p3 = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    p4 = prom<V +>{
      _canonicalize_person_role = ld `.canonicalize_person_role`;
      _canonicalize_person_role1 = force? _canonicalize_person_role;
      checkMissing(_canonicalize_person_role1);
      return _canonicalize_person_role1;
    };
    r17 = dyn lapply(p3, p4);
    check L28() else D11();
  L30():
    y2 = ld y;
    check L32() else D12();
  L31():
    r19 = dyn base3(<sym y>);
    goto L5(r19);
  D6():
    deopt 21 [y];
  D8():
    deopt 26 [r13];
  D11():
    deopt 36 [r17];
  D12():
    deopt 41 [y2];
  L6(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L33() else L8();
  L22():
    y1 = force? y;
    checkMissing(y1);
    length = ldf length in base;
    r12 = dyn length(y1);
    check L23() else D7();
  L24():
    goto L1(r13);
  L28():
    st value = r17;
    goto L4();
  L32():
    y3 = force? y2;
    checkMissing(y3);
    r21 = seq_along(y3);
    goto L5(r21);
  D7():
    deopt 24 [r12];
  L8():
    x3 = `[[`(s, i2, NULL, TRUE);
    st i = x3;
    _person_elt_fld_gets = ldf `.person_elt_fld_gets`;
    check L34() else D13();
  L23():
    goto L2(r12);
  L33():
    sym4 = ldf class;
    base4 = ldf class in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  D13():
    deopt 45 [i2];
  L9(r34):
    l4 = ld y;
    class__ = ldf `class<-`;
    check L44() else D18();
  L34():
    p5 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      c2 = `is.object`(y5);
      if c2 then L1() else L2(y5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", y5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(y7):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[[` in base;
      r22 = dyn __(y7, i6);
      goto L0(r22);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p6 = prom<V +>{
      name5 = ld name;
      name6 = force? name5;
      checkMissing(name6);
      return name6;
    };
    p7 = prom<V +>{
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
      r25 = dyn __1(value8, i8);
      goto L0(r25);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r27 = dyn _person_elt_fld_gets(p5, p6, p7);
    check L35() else D14();
  L40():
    x4 = ld x;
    check L42() else D16();
  L41():
    r33 = dyn base4(<sym x>);
    goto L9(r33);
  D14():
    deopt 49 [i2, r27];
  D16():
    deopt 60 [x4];
  D18():
    deopt 65 [r34, l4, r34];
  L35():
    l1 = ld y;
    c4 = `is.object`(l1);
    if c4 then L36() else L37(i2, r27, l1);
  L42():
    x5 = force? x4;
    checkMissing(x5);
    class = ldf class in base;
    r35 = dyn class(x5);
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
    y8 = ld y;
    check L46() else D20();
  D15():
    deopt 51 [i10, r29, l3, r27, i13];
  D20():
    deopt 69 [y8];
  L38():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(i2, dx4);
  L39():
    i14 = force? i13;
    ____ = ldf `[[<-` in base;
    r32 = dyn ____(l3, r27, i14);
    goto L7(i10, r32);
  L46():
    y9 = force? y8;
    checkMissing(y9);
    popenv;
    return y9;
  }
}
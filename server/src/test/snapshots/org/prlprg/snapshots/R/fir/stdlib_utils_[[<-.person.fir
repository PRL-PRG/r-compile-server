fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner650999460;
    st `[[<-.person` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner650999460(x, i, j, value) {
  (reg x:*, reg i:*, reg j:*, reg value:*) -+> V { var x:*, var i:*, var j:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg r2:I, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg i1:*, reg i2:V, reg c:L, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg names:cls, reg r7:V, reg l:*, reg names__:cls, reg r8:V, reg s:*, reg s1:V, reg c2:L, reg s3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i3:*, reg i4:V, reg __:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg x5:*, reg x6:V, reg unclass:cls, reg r13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg missing:cls, reg r16:V, reg c3:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r17:V, reg r18:V, reg value1:*, reg value2:V, reg c4:V, reg c5:L, reg r19:V, reg as_person:cls, reg value3:*, reg value4:V, reg p:p(V +), reg r21:V, reg l1:*, reg c6:L, reg r23:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r25:V, reg dx3:V, reg i5:*, reg i6:V, reg ___:cls, reg r26:V, reg match_arg:cls, reg j1:*, reg j2:V, reg p1:p(V +), reg person_field_names:*, reg person_field_names1:V, reg p2:p(V +), reg r30:V, reg j3:*, reg j4:V, reg r31:V, reg c7:L, reg _canonicalize_person_role:cls, reg value5:*, reg value6:V, reg p3:p(V +), reg r33:V, reg _person_elt_fld_gets:cls, reg y:*, reg y1:V, reg c8:L, reg y3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i7:*, reg i8:V, reg __1:cls, reg r35:V, reg p4:p(V +), reg j5:*, reg j6:V, reg p5:p(V +), reg value7:*, reg value8:V, reg p6:p(V +), reg r39:V, reg l4:*, reg c9:L, reg r41:V, reg l6:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r43:V, reg dx7:V, reg i9:*, reg i10:V, reg ____:cls, reg r44:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r45:V, reg r46:V, reg x7:*, reg x8:V, reg class:cls, reg r47:V, reg l7:*, reg class__:cls, reg r48:V, reg y4:*, reg y5:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    st value = value;
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L0(r1):
    st s = r1;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L18():
    x1 = ld x;
    check L20() else D0();
  L19():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L24() else L2();
  L20():
    x2 = force? x1;
    checkMissing(x2);
    r2 = seq_along(x2);
    goto L0(r2);
  L21():
    i1 = ld i;
    check L23() else D1();
  L22():
    r3 = dyn base1(<sym i>);
    goto L1(r3);
  D1():
    deopt 6 [i1];
  L2():
    goto L4();
  L4():
    s = ld s;
    check L32() else D6();
  L23():
    i2 = force? i1;
    checkMissing(i2);
    c = `is.character`(i2);
    goto L1(c);
  L24():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  D6():
    deopt 22 [s];
  L3(r6):
    l = ld s;
    names__ = ldf `names<-`;
    check L29() else D4();
  L25():
    x3 = ld x;
    check L27() else D2();
  L26():
    r5 = dyn base2(<sym x>);
    goto L3(r5);
  L32():
    s1 = force? s;
    checkMissing(s1);
    c2 = `is.object`(s1);
    if c2 then L33() else L34(s1);
  D2():
    deopt 11 [x3];
  D4():
    deopt 16 [r6, l, r6];
  L5(dx1):
    st i = dx1;
    sym3 = ldf unclass;
    base3 = ldf unclass in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L27():
    x4 = force? x3;
    checkMissing(x4);
    names = ldf names in base;
    r7 = dyn names(x4);
    check L28() else D3();
  L29():
    r8 = dyn names__(l, NULL, r6);
    check L30() else D5();
  L33():
    dr = tryDispatchBuiltin.1("[[", s1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34(dr);
  L34(s3):
    i3 = ld i;
    check L36() else D7();
  D3():
    deopt 14 [r7];
  D5():
    deopt 18 [r6, r8];
  D7():
    deopt 24 [s3, i3];
  L6(r12):
    st y = r12;
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L28():
    goto L3(r7);
  L30():
    st s = r8;
    goto L4();
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L36():
    i4 = force? i3;
    __ = ldf `[[` in base;
    r10 = dyn __(s3, i4);
    goto L5(r10);
  L37():
    x5 = ld x;
    check L39() else D8();
  L38():
    r11 = dyn base3(<sym x>);
    goto L6(r11);
  D8():
    deopt 30 [x5];
  L7(r15):
    c3 = `as.logical`(r15);
    if c3 then L43() else L8();
  L39():
    x6 = force? x5;
    checkMissing(x6);
    unclass = ldf unclass in base;
    r13 = dyn unclass(x6);
    check L40() else D9();
  L41():
    missing = ldf missing in base;
    r16 = dyn missing(<sym j>);
    goto L7(r16);
  L42():
    r14 = dyn base4(<sym j>);
    goto L7(r14);
  D9():
    deopt 33 [r13];
  L8():
    match_arg = ldf `match.arg`;
    check L56() else D14();
  L13():
    sym6 = ldf class;
    base6 = ldf class in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L69() else L70();
  L40():
    goto L6(r13);
  L43():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L44() else L45();
  D14():
    deopt 54 [];
  L9(r18):
    c5 = `as.logical`(r18);
    if c5 then L47() else L10();
  L17(r46):
    l7 = ld y;
    class__ = ldf `class<-`;
    check L73() else D24();
  L44():
    value1 = ld value;
    check L46() else D10();
  L45():
    r17 = dyn base5(<sym value>);
    goto L9(r17);
  L56():
    p1 = prom<V +>{
      j1 = ld j;
      j2 = force? j1;
      checkMissing(j2);
      return j2;
    };
    p2 = prom<V +>{
      person_field_names = ld person_field_names;
      person_field_names1 = force? person_field_names;
      checkMissing(person_field_names1);
      return person_field_names1;
    };
    r30 = dyn match_arg(p1, p2);
    check L57() else D15();
  L69():
    x7 = ld x;
    check L71() else D22();
  L70():
    r45 = dyn base6(<sym x>);
    goto L17(r45);
  D10():
    deopt 39 [value1];
  D15():
    deopt 57 [r30];
  D22():
    deopt 83 [x7];
  D24():
    deopt 88 [r46, l7, r46];
  L10():
    as_person = ldf `as.person`;
    check L49() else D11();
  L11(r19):
    l1 = ld y;
    c6 = `is.object`(l1);
    if c6 then L51() else L52(r19, l1);
  L46():
    value2 = force? value1;
    checkMissing(value2);
    c4 = `==`(value2, NULL);
    goto L9(c4);
  L47():
    goto L11(NULL);
  L57():
    st j = r30;
    j3 = ld j;
    check L58() else D16();
  L71():
    x8 = force? x7;
    checkMissing(x8);
    class = ldf class in base;
    r47 = dyn class(x8);
    check L72() else D23();
  L73():
    r48 = dyn class__(l7, NULL, r46);
    check L74() else D25();
  D11():
    deopt 45 [];
  D16():
    deopt 59 [j3];
  D23():
    deopt 86 [r47];
  D25():
    deopt 90 [r46, r48];
  L12(r25, dx3):
    st y = dx3;
    goto L13();
  L49():
    p = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    r21 = dyn as_person(p);
    check L50() else D12();
  L51():
    dr2 = tryDispatchBuiltin.0("[<-", l1, r19);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L53() else L52(r19, dr2);
  L52(r23, l3):
    i5 = ld i;
    check L54() else D13();
  L58():
    j4 = force? j3;
    checkMissing(j4);
    r31 = `==`(j4, "role");
    c7 = `as.logical`(r31);
    if c7 then L59() else L14();
  L72():
    goto L17(r47);
  L74():
    st y = r48;
    y4 = ld y;
    check L75() else D26();
  D12():
    deopt 47 [r21];
  D13():
    deopt 49 [r23, l3, r19, i5];
  D26():
    deopt 92 [y4];
  L14():
    goto L15();
  L15():
    _person_elt_fld_gets = ldf `.person_elt_fld_gets`;
    check L63() else D19();
  L50():
    goto L11(r21);
  L53():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(r19, dx2);
  L54():
    i6 = force? i5;
    ___ = ldf `[<-` in base;
    r26 = dyn ___(l3, r19, i6);
    goto L12(r23, r26);
  L59():
    _canonicalize_person_role = ldf `.canonicalize_person_role`;
    check L60() else D17();
  L75():
    y5 = force? y4;
    checkMissing(y5);
    popenv;
    return y5;
  D17():
    deopt 64 [];
  D19():
    deopt 71 [];
  L60():
    p3 = prom<V +>{
      value5 = ld value;
      value6 = force? value5;
      checkMissing(value6);
      return value6;
    };
    r33 = dyn _canonicalize_person_role(p3);
    check L61() else D18();
  L63():
    p4 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      c8 = `is.object`(y1);
      if c8 then L1() else L2(y1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", y1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(y3):
      i7 = ld i;
      i8 = force? i7;
      __1 = ldf `[[` in base;
      r35 = dyn __1(y3, i8);
      goto L0(r35);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p5 = prom<V +>{
      j5 = ld j;
      j6 = force? j5;
      checkMissing(j6);
      return j6;
    };
    p6 = prom<V +>{
      value7 = ld value;
      value8 = force? value7;
      checkMissing(value8);
      return value8;
    };
    r39 = dyn _person_elt_fld_gets(p4, p5, p6);
    check L64() else D20();
  D18():
    deopt 66 [r33];
  D20():
    deopt 75 [r39];
  L61():
    st value = r33;
    goto L15();
  L64():
    l4 = ld y;
    c9 = `is.object`(l4);
    if c9 then L65() else L66(r39, l4);
  L16(r43, dx7):
    st y = dx7;
    goto L13();
  L65():
    dr6 = tryDispatchBuiltin.0("[[<-", l4, r39);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L67() else L66(r39, dr6);
  L66(r41, l6):
    i9 = ld i;
    check L68() else D21();
  D21():
    deopt 77 [r41, l6, r39, i9];
  L67():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L16(r39, dx6);
  L68():
    i10 = force? i9;
    ____ = ldf `[[<-` in base;
    r44 = dyn ____(l6, r39, i10);
    goto L16(r41, r44);
  }
}
fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3886051477;
    st `[[.person` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3886051477(x, i, j) {
  (reg x:*, reg i:*, reg j:*) -+> V { var x:*, var i:*, var j:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg r2:I, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg i1:*, reg i2:V, reg c:L, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg names:cls, reg r7:V, reg l:*, reg names__:cls, reg r8:V, reg s:*, reg s1:V, reg c2:L, reg s3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i3:*, reg i4:V, reg __:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg x5:*, reg x6:V, reg unclass:cls, reg r13:V, reg c3:L, reg r15:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i5:*, reg i6:V, reg __1:cls, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg missing:cls, reg r19:V, reg c4:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg y:*, reg y1:V, reg list:cls, reg r22:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r23:V, reg r24:V, reg x7:*, reg x8:V, reg class:cls, reg r25:V, reg l1:*, reg class__:cls, reg r26:V, reg match_arg:cls, reg j1:*, reg j2:V, reg p:p(V +), reg person_field_names:*, reg person_field_names1:V, reg p1:p(V +), reg r30:V, reg y2:*, reg y3:V, reg c5:L, reg y5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg j3:*, reg j4:V, reg __2:cls, reg r31:V, reg y6:*, reg y7:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r1):
    st s = r1;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L14():
    x1 = ld x;
    check L16() else D0();
  L15():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L20() else L2();
  L16():
    x2 = force? x1;
    checkMissing(x2);
    r2 = seq_along(x2);
    goto L0(r2);
  L17():
    i1 = ld i;
    check L19() else D1();
  L18():
    r3 = dyn base1(<sym i>);
    goto L1(r3);
  D1():
    deopt 6 [i1];
  L2():
    goto L4();
  L4():
    s = ld s;
    check L28() else D6();
  L19():
    i2 = force? i1;
    checkMissing(i2);
    c = `is.character`(i2);
    goto L1(c);
  L20():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  D6():
    deopt 22 [s];
  L3(r6):
    l = ld s;
    names__ = ldf `names<-`;
    check L25() else D4();
  L21():
    x3 = ld x;
    check L23() else D2();
  L22():
    r5 = dyn base2(<sym x>);
    goto L3(r5);
  L28():
    s1 = force? s;
    checkMissing(s1);
    c2 = `is.object`(s1);
    if c2 then L29() else L30(s1);
  D2():
    deopt 11 [x3];
  D4():
    deopt 16 [r6, l, r6];
  L5(dx1):
    st i = dx1;
    sym3 = ldf unclass;
    base3 = ldf unclass in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L23():
    x4 = force? x3;
    checkMissing(x4);
    names = ldf names in base;
    r7 = dyn names(x4);
    check L24() else D3();
  L25():
    r8 = dyn names__(l, NULL, r6);
    check L26() else D5();
  L29():
    dr = tryDispatchBuiltin.1("[[", s1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(s3):
    i3 = ld i;
    check L32() else D7();
  D3():
    deopt 14 [r7];
  D5():
    deopt 18 [r6, r8];
  D7():
    deopt 24 [s3, i3];
  L6(r12):
    c3 = `is.object`(r12);
    if c3 then L37() else L38(r12);
  L24():
    goto L3(r7);
  L26():
    st s = r8;
    goto L4();
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L32():
    i4 = force? i3;
    __ = ldf `[[` in base;
    r10 = dyn __(s3, i4);
    goto L5(r10);
  L33():
    x5 = ld x;
    check L35() else D8();
  L34():
    r11 = dyn base3(<sym x>);
    goto L6(r11);
  D8():
    deopt 30 [x5];
  L7(dx3):
    st y = dx3;
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L35():
    x6 = force? x5;
    checkMissing(x6);
    unclass = ldf unclass in base;
    r13 = dyn unclass(x6);
    check L36() else D9();
  L37():
    dr2 = tryDispatchBuiltin.1("[[", r12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L39() else L38(dr2);
  L38(r15):
    i5 = ld i;
    check L40() else D10();
  D9():
    deopt 33 [r13];
  D10():
    deopt 34 [r15, i5];
  L8(r18):
    c4 = `as.logical`(r18);
    if c4 then L43() else L9();
  L36():
    goto L6(r13);
  L39():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L40():
    i6 = force? i5;
    __1 = ldf `[[` in base;
    r16 = dyn __1(r15, i6);
    goto L7(r16);
  L41():
    missing = ldf missing in base;
    r19 = dyn missing(<sym j>);
    goto L8(r19);
  L42():
    r17 = dyn base4(<sym j>);
    goto L8(r17);
  L9():
    match_arg = ldf `match.arg`;
    check L55() else D17();
  L12():
    y6 = ld y;
    check L62() else D21();
  L43():
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L44() else L45();
  D17():
    deopt 60 [];
  D21():
    deopt 71 [y6];
  L10(r21):
    st y = r21;
    sym6 = ldf class;
    base6 = ldf class in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L48() else L49();
  L44():
    y = ld y;
    check L46() else D11();
  L45():
    r20 = dyn base5(<sym y>);
    goto L10(r20);
  L55():
    p = prom<V +>{
      j1 = ld j;
      j2 = force? j1;
      checkMissing(j2);
      return j2;
    };
    p1 = prom<V +>{
      person_field_names = ld person_field_names;
      person_field_names1 = force? person_field_names;
      checkMissing(person_field_names1);
      return person_field_names1;
    };
    r30 = dyn match_arg(p, p1);
    check L56() else D18();
  L62():
    y7 = force? y6;
    checkMissing(y7);
    popenv;
    return y7;
  D11():
    deopt 43 [y];
  D18():
    deopt 63 [r30];
  L11(r24):
    l1 = ld y;
    class__ = ldf `class<-`;
    check L52() else D15();
  L46():
    y1 = force? y;
    checkMissing(y1);
    list = ldf list in base;
    r22 = dyn list(y1);
    check L47() else D12();
  L48():
    x7 = ld x;
    check L50() else D13();
  L49():
    r23 = dyn base6(<sym x>);
    goto L11(r23);
  L56():
    st j = r30;
    y2 = ld y;
    check L57() else D19();
  D12():
    deopt 46 [r22];
  D13():
    deopt 50 [x7];
  D15():
    deopt 55 [r24, l1, r24];
  D19():
    deopt 65 [y2];
  L47():
    goto L10(r22);
  L50():
    x8 = force? x7;
    checkMissing(x8);
    class = ldf class in base;
    r25 = dyn class(x8);
    check L51() else D14();
  L52():
    r26 = dyn class__(l1, NULL, r24);
    check L53() else D16();
  L57():
    y3 = force? y2;
    checkMissing(y3);
    c5 = `is.object`(y3);
    if c5 then L58() else L59(y3);
  D14():
    deopt 53 [r25];
  D16():
    deopt 57 [r24, r26];
  L13(dx5):
    st y = dx5;
    goto L12();
  L51():
    goto L11(r25);
  L53():
    st y = r26;
    goto L12();
  L58():
    dr4 = tryDispatchBuiltin.1("[[", y3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L60() else L59(dr4);
  L59(y5):
    j3 = ld j;
    check L61() else D20();
  D20():
    deopt 67 [y5, j3];
  L60():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L13(dx4);
  L61():
    j4 = force? j3;
    __2 = ldf `[[` in base;
    r31 = dyn __2(y5, j4);
    goto L13(r31);
  }
}
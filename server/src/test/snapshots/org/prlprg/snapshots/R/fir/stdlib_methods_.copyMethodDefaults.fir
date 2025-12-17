fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner726426920;
    st `.copyMethodDefaults` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner726426920(generic, method) {
  (reg generic:*, reg method:*) -+> V { var generic:*, var method:*, reg r:cls, reg formals:cls, reg generic1:*, reg generic2:V, reg p:p(V +), reg r2:V, reg formals1:cls, reg method1:*, reg method2:V, reg p1:p(V +), reg r4:V, reg vapply:cls, reg mg:*, reg mg1:V, reg p2:p(V +), reg emptyDefault:*, reg emptyDefault1:V, reg p3:p(V +), reg logical:cls, reg r7:V, reg p4:p(V +), reg r9:V, reg mg2:*, reg mg3:V, reg c:L, reg mg5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg emptyDef:*, reg emptyDef1:V, reg r10:V, reg __:cls, reg r11:V, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg fg:*, reg fg1:V, reg names:cls, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg mg6:*, reg mg7:V, reg names1:cls, reg r19:V, reg match:cls, reg r20:V, reg mg8:*, reg mg9:V, reg c1:L, reg mg11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i:*, reg i1:V, reg c2:L, reg mg13:V, reg i3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg mg15:V, reg dx5:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg mg18:V, reg i6:V, reg r22:V, reg i7:*, reg i8:V, reg is_na:cls, reg r23:V, reg r24:V, reg __1:cls, reg r25:V, reg __2:cls, reg r26:V, reg l:*, reg formals2:cls, reg r27:V, reg c3:L, reg dx7:V, reg l2:*, reg r29:V, reg dr6:V, reg dc3:L, reg dx9:V, reg dx10:V, reg l4:*, reg dx11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg dx16:V, reg l7:*, reg r33:V, reg dx17:V, reg r34:V, reg i9:*, reg i10:V, reg is_na1:cls, reg r35:V, reg r36:V, reg ___:cls, reg r37:V, reg formals__:cls, reg r38:V, reg generic3:*, reg generic4:V |
    mkenv;
    st generic = generic;
    st method = method;
    r = clos inner2363178285;
    st emptyDefault = r;
    formals = ldf formals;
    check L9() else D0();
  D0():
    deopt 4 [];
  L9():
    p = prom<V +>{
      generic1 = ld generic;
      generic2 = force? generic1;
      checkMissing(generic2);
      return generic2;
    };
    r2 = dyn formals(p);
    check L10() else D1();
  D1():
    deopt 6 [r2];
  L10():
    st fg = r2;
    formals1 = ldf formals;
    check L11() else D2();
  D2():
    deopt 9 [];
  L11():
    p1 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r4 = dyn formals1(p1);
    check L12() else D3();
  D3():
    deopt 11 [r4];
  L12():
    st mg = r4;
    vapply = ldf vapply;
    check L13() else D4();
  D4():
    deopt 14 [];
  L13():
    p2 = prom<V +>{
      mg = ld mg;
      mg1 = force? mg;
      checkMissing(mg1);
      return mg1;
    };
    p3 = prom<V +>{
      emptyDefault = ld emptyDefault;
      emptyDefault1 = force? emptyDefault;
      checkMissing(emptyDefault1);
      return emptyDefault1;
    };
    p4 = prom<V +>{
      logical = ldf logical;
      r7 = dyn logical(1);
      return r7;
    };
    r9 = dyn vapply(p2, p3, p4);
    check L14() else D5();
  D5():
    deopt 18 [r9];
  L14():
    st emptyDef = r9;
    mg2 = ld mg;
    check L15() else D6();
  D6():
    deopt 20 [mg2];
  L15():
    mg3 = force? mg2;
    checkMissing(mg3);
    c = `is.object`(mg3);
    if c then L16() else L17(mg3);
  L0(dx1):
    st mg = dx1;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L16():
    dr = tryDispatchBuiltin.1("[", mg3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(mg5):
    emptyDef = ld emptyDef;
    check L19() else D7();
  D7():
    deopt 22 [mg5, emptyDef];
  L1(r13):
    st i = r13;
    mg8 = ld mg;
    check L31() else D13();
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L19():
    emptyDef1 = force? emptyDef;
    checkMissing(emptyDef1);
    r10 = `!`(emptyDef1);
    __ = ldf `[` in base;
    r11 = dyn __(mg5, r10);
    goto L0(r11);
  L20():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L21():
    r12 = dyn base(<lang names(fg)>, <lang names(mg)>);
    goto L1(r12);
  D13():
    deopt 46 [mg8];
  L2(r15):
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L22():
    fg = ld fg;
    check L24() else D8();
  L23():
    r14 = dyn base1(<sym fg>);
    goto L2(r14);
  L31():
    mg9 = force? mg8;
    checkMissing(mg9);
    c1 = `is.object`(mg9);
    if c1 then L32() else L33(mg9);
  D8():
    deopt 31 [fg];
  L3(r18):
    match = ldf match in base;
    r20 = dyn match(r15, r18, NA_INT, NULL);
    check L30() else D12();
  L4(dx3):
    l = ld generic;
    formals2 = ldf formals;
    check L43() else D17();
  L24():
    fg1 = force? fg;
    checkMissing(fg1);
    names = ldf names in base;
    r16 = dyn names(fg1);
    check L25() else D9();
  L26():
    mg6 = ld mg;
    check L28() else D10();
  L27():
    r17 = dyn base2(<sym mg>);
    goto L3(r17);
  L32():
    dr2 = tryDispatchBuiltin.1("[", mg9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L34() else L33(dr2);
  L33(mg11):
    i = ld i;
    check L35() else D14();
  D9():
    deopt 34 [r16];
  D10():
    deopt 37 [mg6];
  D12():
    deopt 44 [r20];
  D14():
    deopt 48 [mg11, i];
  D17():
    deopt 60 [dx3, l, dx3];
  L25():
    goto L2(r16);
  L28():
    mg7 = force? mg6;
    checkMissing(mg7);
    names1 = ldf names in base;
    r19 = dyn names1(mg7);
    check L29() else D11();
  L30():
    goto L1(r20);
  L34():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L35():
    i1 = force? i;
    checkMissing(i1);
    c2 = `is.object`(i1);
    if c2 then L36() else L37(mg11, i1);
  L43():
    r27 = dyn formals2(dx3, NULL);
    check L44() else D18();
  D11():
    deopt 40 [r19];
  D18():
    deopt 62 [dx3, l, dx3, r27];
  L5(mg15, dx5):
    __2 = ldf `[` in base;
    r26 = dyn __2(mg15, dx5);
    goto L4(r26);
  L29():
    goto L3(r19);
  L36():
    dr4 = tryDispatchBuiltin.1("[", i1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L38() else L37(mg11, dr4);
  L37(mg13, i3):
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L39() else L40();
  L44():
    c3 = `is.object`(r27);
    if c3 then L45() else L46(dx3, l, r27);
  L6(mg18, i6, r22):
    r24 = `!`(r22);
    __1 = ldf `[` in base;
    r25 = dyn __1(i6, r24);
    goto L5(mg18, r25);
  L7(dx10, l4, dx11):
    formals__ = ldf `formals<-`;
    check L52() else D21();
  L38():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(mg11, dx4);
  L39():
    i7 = ld i;
    check L41() else D15();
  L40():
    r21 = dyn base3(<sym i>);
    goto L6(mg13, i3, r21);
  L45():
    dr6 = tryDispatchBuiltin.0("[<-", r27, dx3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L47() else L46(dx3, l, dr6);
  L46(dx7, l2, r29):
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  D15():
    deopt 52 [mg13, i3, i7];
  D21():
    deopt 72 [dx10, l4, dx11];
  L8(dx16, l7, r33, dx17, r34):
    r36 = `!`(r34);
    ___ = ldf `[<-` in base;
    r37 = dyn ___(r33, dx17, r36);
    goto L7(dx16, l7, r37);
  L41():
    i8 = force? i7;
    checkMissing(i8);
    is_na = ldf `is.na` in base;
    r23 = dyn is_na(i8);
    check L42() else D16();
  L47():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L7(dx3, l, dx9);
  L48():
    i9 = ld i;
    check L50() else D19();
  L49():
    r32 = dyn base4(<sym i>);
    goto L8(dx7, l2, r29, dx3, r32);
  L52():
    r38 = dyn formals__(l4, NULL, dx11);
    check L53() else D22();
  D16():
    deopt 55 [mg13, i3, r23];
  D19():
    deopt 66 [dx7, l2, r29, dx3, i9];
  D22():
    deopt 74 [dx10, r38];
  L42():
    goto L6(mg13, i3, r23);
  L50():
    i10 = force? i9;
    checkMissing(i10);
    is_na1 = ldf `is.na` in base;
    r35 = dyn is_na1(i10);
    check L51() else D20();
  L53():
    st generic = r38;
    generic3 = ld generic;
    check L54() else D23();
  D20():
    deopt 69 [dx7, l2, r29, dx3, r35];
  D23():
    deopt 76 [generic3];
  L51():
    goto L8(dx7, l2, r29, dx3, r35);
  L54():
    generic4 = force? generic3;
    checkMissing(generic4);
    popenv;
    return generic4;
  }
}
fun inner2363178285(value) {
  (reg value:*) -+> V { var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg value1:*, reg value2:V, reg c6:L, reg c7:L, reg c10:L, reg c11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg c16:L, reg c17:L, reg r6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r7:V, reg c22:L, reg c23:L, reg r8:V, reg value3:*, reg value4:V, reg as_character:cls, reg r9:V, reg nzchar:cls, reg r10:V, reg c24:L, reg c25:V, reg c28:L, reg c29:V |
    mkenv;
    st value = value;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    c = `as.logical`(r1);
    if c then L1(c) else L8();
  L6():
    missing = ldf missing in base;
    r2 = dyn missing(<sym value>);
    goto L0(r2);
  L7():
    r = dyn base(<sym value>);
    goto L0(r);
  L1(c1):
    popenv;
    return c1;
  L8():
    sym1 = ldf `is.name`;
    base1 = ldf `is.name` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L2(c5, r4):
    c7 = `as.logical`(r4);
    if c7 then L12() else L3(c5, c7);
  L9():
    value1 = ld value;
    check L11() else D0();
  L10():
    r3 = dyn base1(<sym value>);
    goto L2(c, r3);
  D0():
    deopt 4 [c, value1];
  L3(c10, c11):
    c28 = `as.logical`(c11);
    c29 = `||`(c10, c28);
    goto L1(c29);
  L11():
    value2 = force? value1;
    checkMissing(value2);
    c6 = `is.symbol`(value2);
    goto L2(c, c6);
  L12():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L4(c16, c17, r6):
    c24 = `as.logical`(r6);
    c25 = `&&`(c17, c24);
    goto L3(c16, c25);
  L13():
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L15() else L16();
  L14():
    r5 = dyn base2(<lang as.character(value)>);
    goto L4(c5, c7, r5);
  L5(c22, c23, r8):
    nzchar = ldf nzchar in base;
    r10 = dyn nzchar(r8);
    check L19() else D3();
  L15():
    value3 = ld value;
    check L17() else D1();
  L16():
    r7 = dyn base3(<sym value>);
    goto L5(c5, c7, r7);
  D1():
    deopt 11 [c5, c7, value3];
  D3():
    deopt 16 [c22, c23, r10];
  L17():
    value4 = force? value3;
    checkMissing(value4);
    as_character = ldf `as.character` in base;
    r9 = dyn as_character(value4);
    check L18() else D2();
  L19():
    goto L4(c22, c23, r10);
  D2():
    deopt 14 [c5, c7, r9];
  L18():
    goto L5(c5, c7, r9);
  }
}
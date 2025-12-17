fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2301703210;
    st `.renameClassDef` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2301703210(def, className) {
  (reg def:*, reg className:*) -+> V { var def:*, var className:*, reg validObject:cls, reg def1:*, reg def2:V, reg p:p(V +), reg r1:V, reg className1:*, reg className2:V, reg l:*, reg ___:cls, reg r2:V, reg __:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg comp:*, reg comp1:V, reg r6:I, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg className3:*, reg className4:V, reg l2:*, reg c1:L, reg i6:I, reg className7:V, reg l5:*, reg className8:V, reg l6:*, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg className11:V, reg l8:*, reg className12:V, reg dx1:V, reg i9:*, reg i10:V, reg __1:cls, reg r7:V, reg ___1:cls, reg r8:V, reg c2:L, reg i12:I, reg className14:V, reg l10:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i14:I, reg dx3:V, reg i15:*, reg i16:V, reg ____:cls, reg r9:V, reg comp2:*, reg comp3:V, reg l11:*, reg ___2:cls, reg r10:V, reg __2:cls, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg comp4:*, reg comp5:V, reg r14:I, reg s1:V, reg l12:I, reg i17:I, reg i18:I, reg i19:I, reg c3:L, reg x1:V, reg className17:*, reg className18:V, reg l13:*, reg c4:L, reg i23:I, reg className21:V, reg l16:*, reg className22:V, reg l17:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i25:I, reg className25:V, reg l19:*, reg className26:V, reg dx5:V, reg i26:*, reg i27:V, reg __3:cls, reg r15:V, reg ___3:cls, reg r16:V, reg c5:L, reg i29:I, reg className28:V, reg l21:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i31:I, reg dx7:V, reg i32:*, reg i33:V, reg ____1:cls, reg r17:V, reg comp6:*, reg comp7:V, reg l22:*, reg ___4:cls, reg r18:V, reg def3:*, reg def4:V |
    mkenv;
    st def = def;
    st className = className;
    validObject = ldf validObject;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p = prom<V +>{
      def1 = ld def;
      def2 = force? def1;
      checkMissing(def2);
      return def2;
    };
    r1 = dyn validObject(p);
    check L11() else D1();
  D1():
    deopt 3 [r1];
  L11():
    className1 = ld className;
    check L12() else D2();
  D2():
    deopt 4 [className1];
  L12():
    className2 = force? className1;
    checkMissing(className2);
    l = ld def;
    ___ = ldf `@<-`;
    check L13() else D3();
  D3():
    deopt 7 [className2, l, className2];
  L13():
    r2 = dyn ___(l, NULL, "className", className2);
    check L14() else D4();
  D4():
    deopt 10 [className2, r2];
  L14():
    st def = r2;
    __ = ldf `@` in base;
    r3 = dyn __(<sym def>, <sym contains>);
    st comp = r3;
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0(r5):
    s = toForSeq(r5);
    l1 = length(s);
    i = 0;
    goto L1(i);
  L15():
    comp = ld comp;
    check L17() else D5();
  L16():
    r4 = dyn base(<sym comp>);
    goto L0(r4);
  D5():
    deopt 16 [comp];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l1, i2);
    if c then L18() else L4();
  L17():
    comp1 = force? comp;
    checkMissing(comp1);
    r6 = seq_along(comp1);
    goto L0(r6);
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    className3 = ld className;
    check L19() else D6();
  L18():
    comp2 = ld comp;
    check L30() else D11();
  D6():
    deopt 19 [i2, className3];
  D11():
    deopt 38 [comp2];
  L19():
    className4 = force? className3;
    checkMissing(className4);
    l2 = ld comp;
    c1 = `is.object`(l2);
    if c1 then L20() else L21(i2, className4, l2, className4, l2);
  L30():
    comp3 = force? comp2;
    checkMissing(comp3);
    l11 = ld def;
    ___2 = ldf `@<-`;
    check L31() else D12();
  D12():
    deopt 41 [comp3, l11, comp3];
  L2(i8, className11, l8, className12, dx1):
    ___1 = ldf `@<-`;
    check L24() else D8();
  L20():
    dr = tryDispatchBuiltin.1("[[", l2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(i2, className4, l2, className4, dr);
  L21(i6, className7, l5, className8, l6):
    i9 = ld i;
    check L23() else D7();
  L31():
    r10 = dyn ___2(l11, NULL, "contains", comp3);
    check L32() else D13();
  D7():
    deopt 23 [i6, className7, l5, className8, l6, i9];
  D8():
    deopt 27 [i8, className11, l8, dx1, className12];
  D13():
    deopt 44 [comp3, r10];
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(i2, className4, l2, className4, dx);
  L23():
    i10 = force? i9;
    __1 = ldf `[[` in base;
    r7 = dyn __1(l6, i10);
    goto L2(i6, className7, l5, className8, r7);
  L24():
    r8 = dyn ___1(dx1, NULL, "subClass", className12);
    check L25() else D9();
  L32():
    st def = r10;
    __2 = ldf `@` in base;
    r11 = dyn __2(<sym def>, <sym subclasses>);
    st comp = r11;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  D9():
    deopt 30 [i8, className11, l8, r8];
  L5(r13):
    s1 = toForSeq(r13);
    l12 = length(s1);
    i17 = 0;
    goto L6(i17);
  L25():
    c2 = `is.object`(l8);
    if c2 then L26() else L27(i8, className11, l8);
  L33():
    comp4 = ld comp;
    check L35() else D14();
  L34():
    r12 = dyn base1(<sym comp>);
    goto L5(r12);
  D14():
    deopt 50 [comp4];
  L3(i14, dx3):
    st comp = dx3;
    goto L1(i14);
  L6(i18):
    i19 = `+`.1(i18, 1);
    c3 = `<`.1(l12, i19);
    if c3 then L36() else L9();
  L26():
    dr2 = tryDispatchBuiltin.0("[[<-", l8, r8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27(i8, className11, dr2);
  L27(i12, className14, l10):
    i15 = ld i;
    check L29() else D10();
  L35():
    comp5 = force? comp4;
    checkMissing(comp5);
    r14 = seq_along(comp5);
    goto L5(r14);
  D10():
    deopt 31 [i12, className14, l10, r8, i15];
  L9():
    x1 = `[[`(s1, i19, NULL, TRUE);
    st i = x1;
    className17 = ld className;
    check L37() else D15();
  L28():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(i8, dx2);
  L29():
    i16 = force? i15;
    ____ = ldf `[[<-` in base;
    r9 = dyn ____(l10, r8, i16);
    goto L3(i12, r9);
  L36():
    comp6 = ld comp;
    check L48() else D20();
  D15():
    deopt 53 [i19, className17];
  D20():
    deopt 72 [comp6];
  L37():
    className18 = force? className17;
    checkMissing(className18);
    l13 = ld comp;
    c4 = `is.object`(l13);
    if c4 then L38() else L39(i19, className18, l13, className18, l13);
  L48():
    comp7 = force? comp6;
    checkMissing(comp7);
    l22 = ld def;
    ___4 = ldf `@<-`;
    check L49() else D21();
  D21():
    deopt 75 [comp7, l22, comp7];
  L7(i25, className25, l19, className26, dx5):
    ___3 = ldf `@<-`;
    check L42() else D17();
  L38():
    dr4 = tryDispatchBuiltin.1("[[", l13);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L40() else L39(i19, className18, l13, className18, dr4);
  L39(i23, className21, l16, className22, l17):
    i26 = ld i;
    check L41() else D16();
  L49():
    r18 = dyn ___4(l22, NULL, "subclasses", comp7);
    check L50() else D22();
  D16():
    deopt 57 [i23, className21, l16, className22, l17, i26];
  D17():
    deopt 61 [i25, className25, l19, dx5, className26];
  D22():
    deopt 78 [comp7, r18];
  L40():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(i19, className18, l13, className18, dx4);
  L41():
    i27 = force? i26;
    __3 = ldf `[[` in base;
    r15 = dyn __3(l17, i27);
    goto L7(i23, className21, l16, className22, r15);
  L42():
    r16 = dyn ___3(dx5, NULL, "superClass", className26);
    check L43() else D18();
  L50():
    st def = r18;
    def3 = ld def;
    check L51() else D23();
  D18():
    deopt 64 [i25, className25, l19, r16];
  D23():
    deopt 80 [def3];
  L43():
    c5 = `is.object`(l19);
    if c5 then L44() else L45(i25, className25, l19);
  L51():
    def4 = force? def3;
    checkMissing(def4);
    popenv;
    return def4;
  L8(i31, dx7):
    st comp = dx7;
    goto L6(i31);
  L44():
    dr6 = tryDispatchBuiltin.0("[[<-", l19, r16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L46() else L45(i25, className25, dr6);
  L45(i29, className28, l21):
    i32 = ld i;
    check L47() else D19();
  D19():
    deopt 65 [i29, className28, l21, r16, i32];
  L46():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L8(i25, dx6);
  L47():
    i33 = force? i32;
    ____1 = ldf `[[<-` in base;
    r17 = dyn ____1(l21, r16, i33);
    goto L8(i29, r17);
  }
}
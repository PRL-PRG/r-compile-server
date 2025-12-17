fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4076614562;
    st `.addAbnormalDataType` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4076614562(classes) {
  (reg classes:*) -+> V { var classes:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg classes1:*, reg classes2:V, reg _AbnormalTypes:*, reg _AbnormalTypes1:V, reg match:cls, reg r2:V, reg r3:V, reg classes3:*, reg classes4:V, reg c:L, reg classes6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg types:*, reg types1:V, reg __:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg type:*, reg type1:V, reg length:cls, reg r7:V, reg r8:V, reg c1:L, reg classes7:*, reg classes8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg type2:*, reg type3:V, reg length1:cls, reg r13:V, reg r14:V, reg c2:L, reg stop:cls, reg gettextf:cls, reg paste0:cls, reg type4:*, reg type5:V, reg p:p(V +), reg r16:V, reg p1:p(V +), reg r18:V, reg p2:p(V +), reg r20:V, reg _indirectAbnormalClasses:*, reg _indirectAbnormalClasses1:V, reg c3:L, reg _indirectAbnormalClasses3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg type6:*, reg type7:V, reg __1:cls, reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg class:*, reg class1:V, reg is_na:cls, reg r25:V, reg c4:L, reg stop1:cls, reg gettextf1:cls, reg dQuote:cls, reg type8:*, reg type9:V, reg p3:p(V +), reg r27:V, reg p4:p(V +), reg r29:V, reg p5:p(V +), reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg class2:*, reg class3:V, reg classes9:*, reg classes10:V, reg c5:L, reg classes12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg types2:*, reg types3:V, reg r35:V, reg __2:cls, reg r36:V, reg c6:cls, reg r37:V |
    mkenv;
    st classes = classes;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r1):
    r3 = `>`(r1, 0.0);
    st types = r3;
    classes3 = ld classes;
    check L19() else D3();
  L14():
    classes1 = ld classes;
    check L16() else D0();
  L15():
    r = dyn base(<sym classes>, <sym .AbnormalTypes>, 0.0);
    goto L0(r);
  D0():
    deopt 2 [classes1];
  D3():
    deopt 13 [classes3];
  L16():
    classes2 = force? classes1;
    checkMissing(classes2);
    _AbnormalTypes = ld `.AbnormalTypes`;
    check L17() else D1();
  L19():
    classes4 = force? classes3;
    checkMissing(classes4);
    c = `is.object`(classes4);
    if c then L20() else L21(classes4);
  D1():
    deopt 4 [_AbnormalTypes];
  L1(dx1):
    st type = dx1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L17():
    _AbnormalTypes1 = force? _AbnormalTypes;
    checkMissing(_AbnormalTypes1);
    match = ldf match in base;
    r2 = dyn match(classes2, _AbnormalTypes1, 0.0, NULL);
    check L18() else D2();
  L20():
    dr = tryDispatchBuiltin.1("[", classes4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(classes6):
    types = ld types;
    check L23() else D4();
  D2():
    deopt 9 [r2];
  D4():
    deopt 15 [classes6, types];
  L2(r6):
    r8 = `==`(r6, 0.0);
    c1 = `as.logical`(r8);
    if c1 then L28() else L3();
  L18():
    goto L0(r2);
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L23():
    types1 = force? types;
    __ = ldf `[` in base;
    r4 = dyn __(classes6, types1);
    goto L1(r4);
  L24():
    type = ld type;
    check L26() else D5();
  L25():
    r5 = dyn base1(<sym type>);
    goto L2(r5);
  D5():
    deopt 21 [type];
  L3():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L26():
    type1 = force? type;
    checkMissing(type1);
    length = ldf length in base;
    r7 = dyn length(type1);
    check L27() else D6();
  L28():
    classes7 = ld classes;
    check L29() else D7();
  D6():
    deopt 24 [r7];
  D7():
    deopt 27 [classes7];
  L5(r12):
    r14 = `>`(r12, 1.0);
    c2 = `as.logical`(r14);
    if c2 then L36() else L6();
  L27():
    goto L2(r7);
  L29():
    classes8 = force? classes7;
    checkMissing(classes8);
    popenv;
    return classes8;
  L32():
    type2 = ld type;
    check L34() else D8();
  L33():
    r11 = dyn base2(<sym type>);
    goto L5(r11);
  D8():
    deopt 34 [type2];
  L6():
    goto L7();
  L7():
    _indirectAbnormalClasses = ld `.indirectAbnormalClasses`;
    check L40() else D12();
  L34():
    type3 = force? type2;
    checkMissing(type3);
    length1 = ldf length in base;
    r13 = dyn length1(type3);
    check L35() else D9();
  L36():
    stop = ldf stop;
    check L37() else D10();
  D9():
    deopt 37 [r13];
  D10():
    deopt 41 [];
  D12():
    deopt 48 [_indirectAbnormalClasses];
  L35():
    goto L5(r13);
  L37():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        paste0 = ldf paste0;
        p = prom<V +>{
          type4 = ld type;
          type5 = force? type4;
          checkMissing(type5);
          return type5;
        };
        r16 = dyn paste0[, , , collapse]("\"", p, "\"", ", ");
        return r16;
      };
      r18 = dyn gettextf("class definition cannot extend more than one of these data types: %s", p1);
      return r18;
    };
    r20 = dyn stop[, domain](p2, NA_LGL);
    check L38() else D11();
  L40():
    _indirectAbnormalClasses1 = force? _indirectAbnormalClasses;
    checkMissing(_indirectAbnormalClasses1);
    c3 = `is.object`(_indirectAbnormalClasses1);
    if c3 then L41() else L42(_indirectAbnormalClasses1);
  D11():
    deopt 45 [r20];
  L8(dx3):
    st class = dx3;
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  L38():
    goto L7();
  L41():
    dr2 = tryDispatchBuiltin.1("[", _indirectAbnormalClasses1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L43() else L42(dr2);
  L42(_indirectAbnormalClasses3):
    type6 = ld type;
    check L44() else D13();
  D13():
    deopt 50 [_indirectAbnormalClasses3, type6];
  L9(r24):
    c4 = `as.logical`(r24);
    if c4 then L49() else L10();
  L43():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L44():
    type7 = force? type6;
    __1 = ldf `[` in base;
    r22 = dyn __1(_indirectAbnormalClasses3, type7);
    goto L8(r22);
  L45():
    class = ld class;
    check L47() else D14();
  L46():
    r23 = dyn base3(<sym class>);
    goto L9(r23);
  D14():
    deopt 56 [class];
  L10():
    goto L11();
  L11():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  L47():
    class1 = force? class;
    checkMissing(class1);
    is_na = ldf `is.na` in base;
    r25 = dyn is_na(class1);
    check L48() else D15();
  L49():
    stop1 = ldf stop;
    check L50() else D16();
  D15():
    deopt 59 [r25];
  D16():
    deopt 61 [];
  L12(r34):
    popenv;
    return r34;
  L48():
    goto L9(r25);
  L50():
    p5 = prom<V +>{
      gettextf1 = ldf gettextf;
      p4 = prom<V +>{
        dQuote = ldf dQuote;
        p3 = prom<V +>{
          type8 = ld type;
          type9 = force? type8;
          checkMissing(type9);
          return type9;
        };
        r27 = dyn dQuote(p3);
        return r27;
      };
      r29 = dyn gettextf1("abnormal type %s is not supported as a superclass of a class definition", p4);
      return r29;
    };
    r31 = dyn stop1[, domain](p5, NA_LGL);
    check L51() else D17();
  L53():
    class2 = ld class;
    check L55() else D18();
  L54():
    r33 = dyn base4(<sym class>, <lang `[`(classes, `!`(types))>);
    goto L12(r33);
  D17():
    deopt 65 [r31];
  D18():
    deopt 70 [class2];
  L51():
    goto L11();
  L55():
    class3 = force? class2;
    checkMissing(class3);
    classes9 = ld classes;
    check L56() else D19();
  D19():
    deopt 72 [classes9];
  L56():
    classes10 = force? classes9;
    checkMissing(classes10);
    c5 = `is.object`(classes10);
    if c5 then L57() else L58(classes10);
  L13(dx5):
    c6 = ldf c in base;
    r37 = dyn c6(class3, dx5);
    check L61() else D21();
  L57():
    dr4 = tryDispatchBuiltin.1("[", classes10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L59() else L58(dr4);
  L58(classes12):
    types2 = ld types;
    check L60() else D20();
  D20():
    deopt 74 [classes12, types2];
  D21():
    deopt 79 [r37];
  L59():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L13(dx4);
  L60():
    types3 = force? types2;
    checkMissing(types3);
    r35 = `!`(types3);
    __2 = ldf `[` in base;
    r36 = dyn __2(classes12, r35);
    goto L13(r36);
  L61():
    goto L12(r37);
  }
}
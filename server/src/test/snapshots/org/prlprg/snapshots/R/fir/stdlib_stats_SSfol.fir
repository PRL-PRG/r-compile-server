fun main() {
  () -+> V { reg structure:cls, reg r:cls, reg p:p(V +), reg r2:cls, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg c:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg Theoph:*, reg Theoph1:V, reg c1:L, reg Theoph3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg Theoph4:*, reg Theoph5:V, reg c2:L, reg Theoph8:V, reg Theoph9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r9:V, reg r10:V, reg __:cls, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg with:cls, reg Theoph_1:*, reg Theoph_2:V, reg p3:p(V +), reg SSfol:cls, reg Dose:*, reg Dose1:V, reg p4:p(V +), reg Time:*, reg Time1:V, reg p5:p(V +), reg p6:p(V +), reg p7:p(V +), reg r19:V, reg p8:p(V +), reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg with1:cls, reg Theoph_3:*, reg Theoph_4:V, reg p9:p(V +), reg r25:cls, reg r26:cls, reg r27:V, reg p10:p(V +), reg r29:V, reg getInitial:cls, reg __1:cls, reg r30:V, reg p11:p(V +), reg Theoph_5:*, reg Theoph_6:V, reg p12:p(V +), reg r33:V, reg nls:cls, reg __2:cls, reg r34:V, reg p13:p(V +), reg Theoph_7:*, reg Theoph_8:V, reg p14:p(V +), reg r37:V, reg summary:cls, reg fm1:*, reg fm2:V, reg p15:p(V +), reg r39:V |
    mkenv;
    structure = ldf structure;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      r = clos inner2874526412;
      return r;
    };
    p1 = prom<V +>{
      r2 = clos inner4146431868;
      return r2;
    };
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      c = ldf c in base;
      r6 = dyn c("lKe", "lKa", "lCl");
      goto L0(r6);
    L2():
      r4 = dyn base("lKe", "lKa", "lCl");
      goto L0(r4);
    };
    r8 = dyn structure[, initial, pnames, class](p, p1, p2, "selfStart");
    check L4() else D1();
  D1():
    deopt 9 [r8];
  L4():
    st SSfol = r8;
    Theoph = ld Theoph;
    check L5() else D2();
  D2():
    deopt 11 [Theoph];
  L5():
    Theoph1 = force? Theoph;
    checkMissing(Theoph1);
    c1 = `is.object`(Theoph1);
    if c1 then L6() else L7(Theoph1);
  L0(dx1):
    st `Theoph.1` = dx1;
    sym1 = ldf with;
    base1 = ldf with in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L6():
    dr = tryDispatchBuiltin.1("[", Theoph1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(Theoph3):
    Theoph4 = ld Theoph;
    check L9() else D3();
  D3():
    deopt 13 [Theoph3, Theoph4];
  L1():
    sym2 = ldf with;
    base2 = ldf with in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L9():
    Theoph5 = force? Theoph4;
    checkMissing(Theoph5);
    c2 = `is.object`(Theoph5);
    if c2 then L11() else L12(Theoph3, Theoph5);
  L14():
    with = ldf with;
    check L16() else D4();
  L15():
    r12 = dyn base1(<sym Theoph.1>, <lang SSfol(Dose, Time, `-`(2.5), 0.5, `-`(3.0))>);
    goto L1();
  D4():
    deopt 24 [];
  L2():
    getInitial = ldf getInitial;
    check L22() else D8();
  L10(dx3):
    r10 = `==`(dx3, 1.0);
    __ = ldf `[` in base;
    r11 = dyn __(Theoph1, r10, <missing>);
    goto L0(r11);
  L11():
    dr2 = tryDispatchBuiltin.1("$", Theoph5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L13() else L12(Theoph3, dr2);
  L12(Theoph8, Theoph9):
    r9 = `$`(Theoph9, <sym Subject>);
    goto L10(r9);
  L16():
    p3 = prom<V +>{
      Theoph_1 = ld `Theoph.1`;
      Theoph_2 = force? Theoph_1;
      checkMissing(Theoph_2);
      return Theoph_2;
    };
    p8 = prom<V +>{
      SSfol = ldf SSfol;
      p4 = prom<V +>{
        Dose = ld Dose;
        Dose1 = force? Dose;
        checkMissing(Dose1);
        return Dose1;
      };
      p5 = prom<V +>{
        Time = ld Time;
        Time1 = force? Time;
        checkMissing(Time1);
        return Time1;
      };
      p6 = prom<V +>{
        return -2.5;
      };
      p7 = prom<V +>{
        return -3.0;
      };
      r19 = dyn SSfol(p4, p5, p6, 0.5, p7);
      return r19;
    };
    r21 = dyn with(p3, p8);
    check L17() else D5();
  L18():
    with1 = ldf with;
    check L20() else D6();
  L19():
    r22 = dyn base2(<sym Theoph.1>, <lang local({
        `<-`(lKe, `-`(2.5));
        `<-`(lKa, 0.5);
        `<-`(lCl, `-`(3.0));
        SSfol(Dose, Time, lKe, lKa, lCl)
      })>);
    goto L2();
  D5():
    deopt 27 [r21];
  D6():
    deopt 30 [];
  D8():
    deopt 35 [];
  L13():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L17():
    goto L1();
  L20():
    p9 = prom<V +>{
      Theoph_3 = ld `Theoph.1`;
      Theoph_4 = force? Theoph_3;
      checkMissing(Theoph_4);
      return Theoph_4;
    };
    p10 = prom<V +>{
      r25 = clos inner2708337952;
      checkFun.0(r25);
      r26 = r25 as cls;
      r27 = dyn r26();
      return r27;
    };
    r29 = dyn with1(p9, p10);
    check L21() else D7();
  L22():
    p11 = prom<V +>{
      __1 = ldf `~` in base;
      r30 = dyn __1(<sym conc>, <lang SSfol(Dose, Time, lKe, lKa, lCl)>);
      return r30;
    };
    p12 = prom<V +>{
      Theoph_5 = ld `Theoph.1`;
      Theoph_6 = force? Theoph_5;
      checkMissing(Theoph_6);
      return Theoph_6;
    };
    r33 = dyn getInitial[, data](p11, p12);
    check L23() else D9();
  D7():
    deopt 33 [r29];
  D9():
    deopt 39 [r33];
  L21():
    goto L2();
  L23():
    nls = ldf nls;
    check L24() else D10();
  D10():
    deopt 41 [];
  L24():
    p13 = prom<V +>{
      __2 = ldf `~` in base;
      r34 = dyn __2(<sym conc>, <lang SSfol(Dose, Time, lKe, lKa, lCl)>);
      return r34;
    };
    p14 = prom<V +>{
      Theoph_7 = ld `Theoph.1`;
      Theoph_8 = force? Theoph_7;
      checkMissing(Theoph_8);
      return Theoph_8;
    };
    r37 = dyn nls[, data](p13, p14);
    check L25() else D11();
  D11():
    deopt 45 [r37];
  L25():
    st fm1 = r37;
    summary = ldf summary;
    check L26() else D12();
  D12():
    deopt 48 [];
  L26():
    p15 = prom<V +>{
      fm1 = ld fm1;
      fm2 = force? fm1;
      checkMissing(fm2);
      return fm2;
    };
    r39 = dyn summary(p15);
    check L27() else D13();
  D13():
    deopt 50 [r39];
  L27():
    popenv;
    return r39;
  }
}
fun inner2874526412(Dose, input, lKe, lKa, lCl) {
  (reg Dose:*, reg input:*, reg lKe:*, reg lKa:*, reg lCl:*) -+> V { var Dose:*, var input:*, var lKe:*, var lKa:*, var lCl:*, reg Dose1:*, reg Dose2:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg Dose5:V, reg r1:V, reg lKe1:*, reg lKe2:V, reg lKa1:*, reg lKa2:V, reg r2:V, reg lCl1:*, reg lCl2:V, reg r3:V, reg r4:V, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg lKe3:*, reg lKe4:V, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg _expr5:*, reg _expr6:V, reg r11:V, reg input1:*, reg input2:V, reg r12:V, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg lKa3:*, reg lKa4:V, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg _expr9:*, reg _expr10:V, reg r19:V, reg input3:*, reg input4:V, reg r20:V, reg r21:V, reg _expr11:*, reg _expr12:V, reg _expr13:*, reg _expr14:V, reg _expr15:*, reg _expr16:V, reg r22:V, reg r23:V, reg _expr17:*, reg _expr18:V, reg _expr19:*, reg _expr20:V, reg r24:V, reg _expr21:*, reg _expr22:V, reg _expr23:*, reg _expr24:V, reg r25:V, reg _expr25:*, reg _expr26:V, reg r26:V, reg _expr27:*, reg _expr28:V, reg as_list:cls, reg match_call:cls, reg r27:V, reg c:L, reg r29:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg r34:V, reg c1:cls, reg r35:V, reg __:cls, reg r36:V, reg p:p(V +), reg r38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg vapply:cls, reg _actualArgs:*, reg _actualArgs1:V, reg p1:p(V +), reg is_name:*, reg is_name1:V, reg p2:p(V +), reg r43:V, reg all:cls, reg r44:V, reg c2:L, reg array:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r45:V, reg r46:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg r48:V, reg _value:*, reg _value1:V, reg length:cls, reg r49:V, reg c3:cls, reg r50:V, reg p3:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg r53:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg r55:V, reg c4:cls, reg r56:V, reg list:cls, reg r57:V, reg p4:p(V +), reg r59:V, reg _expr29:*, reg _expr30:V, reg _expr31:*, reg _expr32:V, reg _expr33:*, reg _expr34:V, reg _expr35:*, reg _expr36:V, reg input5:*, reg input6:V, reg r60:V, reg r61:V, reg r62:V, reg r63:V, reg _expr37:*, reg _expr38:V, reg r64:V, reg _expr39:*, reg _expr40:V, reg _expr41:*, reg _expr42:V, reg r65:V, reg _expr43:*, reg _expr44:V, reg r66:V, reg r67:V, reg l:*, reg c5:L, reg r69:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ___:cls, reg r72:V, reg _expr45:*, reg _expr46:V, reg _expr47:*, reg _expr48:V, reg _expr49:*, reg _expr50:V, reg _expr51:*, reg _expr52:V, reg input7:*, reg input8:V, reg r73:V, reg r74:V, reg r75:V, reg r76:V, reg _expr53:*, reg _expr54:V, reg r77:V, reg _expr55:*, reg _expr56:V, reg _expr57:*, reg _expr58:V, reg r78:V, reg _expr59:*, reg _expr60:V, reg r79:V, reg r80:V, reg l3:*, reg c6:L, reg r82:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ___1:cls, reg r85:V, reg _expr61:*, reg _expr62:V, reg r86:V, reg l6:*, reg c7:L, reg r88:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ___2:cls, reg r91:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r92:V, reg r93:V, reg _actualArgs2:*, reg _actualArgs3:V, reg list1:cls, reg r94:V, reg l9:*, reg dimnames__:cls, reg r95:V, reg _grad:*, reg _grad1:V, reg l10:*, reg attr__:cls, reg r96:V, reg _value2:*, reg _value3:V |
    mkenv;
    st Dose = Dose;
    st input = input;
    st lKe = lKe;
    st lKa = lKa;
    st lCl = lCl;
    Dose1 = ld Dose;
    check L12() else D0();
  D0():
    deopt 0 [Dose1];
  L12():
    Dose2 = force? Dose1;
    checkMissing(Dose2);
    sym = ldf exp;
    base = ldf exp in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(Dose5, r1):
    r5 = `*`(Dose5, r1);
    st `.expr4` = r5;
    sym1 = ldf exp;
    base1 = ldf exp in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L13():
    lKe1 = ld lKe;
    check L15() else D1();
  L14():
    r = dyn base(<lang `-`(`(`(`+`(lKe, lKa)), lCl)>);
    goto L0(Dose2, r);
  D1():
    deopt 2 [Dose2, lKe1];
  L1(r7):
    st `.expr5` = r7;
    sym2 = ldf exp;
    base2 = ldf exp in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L15():
    lKe2 = force? lKe1;
    checkMissing(lKe2);
    lKa1 = ld lKa;
    check L16() else D2();
  L18():
    lKe3 = ld lKe;
    check L20() else D4();
  L19():
    r6 = dyn base1(<sym lKe>);
    goto L1(r6);
  D2():
    deopt 3 [Dose2, lKe2, lKa1];
  D4():
    deopt 12 [lKe3];
  L2(r10):
    st `.expr8` = r10;
    sym3 = ldf exp;
    base3 = ldf exp in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  L16():
    lKa2 = force? lKa1;
    checkMissing(lKa2);
    r2 = `+`(lKe2, lKa2);
    lCl1 = ld lCl;
    check L17() else D3();
  L20():
    lKe4 = force? lKe3;
    checkMissing(lKe4);
    r8 = exp(lKe4);
    goto L1(r8);
  L21():
    _expr5 = ld `.expr5`;
    check L23() else D5();
  L22():
    r9 = dyn base2(<lang `*`(`-`(.expr5), input)>);
    goto L2(r9);
  D3():
    deopt 5 [Dose2, r2, lCl1];
  D5():
    deopt 17 [_expr5];
  L3(r15):
    st `.expr9` = r15;
    sym4 = ldf exp;
    base4 = ldf exp in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L28() else L29();
  L17():
    lCl2 = force? lCl1;
    checkMissing(lCl2);
    r3 = `-`(r2, lCl2);
    r4 = exp(r3);
    goto L0(Dose2, r4);
  L23():
    _expr6 = force? _expr5;
    checkMissing(_expr6);
    r11 = `-`(<missing>, _expr6);
    input1 = ld input;
    check L24() else D6();
  L25():
    lKa3 = ld lKa;
    check L27() else D7();
  L26():
    r14 = dyn base3(<sym lKa>);
    goto L3(r14);
  D6():
    deopt 19 [r11, input1];
  D7():
    deopt 25 [lKa3];
  L4(r18):
    st `.expr12` = r18;
    _expr11 = ld `.expr4`;
    check L32() else D10();
  L24():
    input2 = force? input1;
    checkMissing(input2);
    r12 = `*`(r11, input2);
    r13 = exp(r12);
    goto L2(r13);
  L27():
    lKa4 = force? lKa3;
    checkMissing(lKa4);
    r16 = exp(lKa4);
    goto L3(r16);
  L28():
    _expr9 = ld `.expr9`;
    check L30() else D8();
  L29():
    r17 = dyn base4(<lang `*`(`-`(.expr9), input)>);
    goto L4(r17);
  D8():
    deopt 30 [_expr9];
  D10():
    deopt 37 [_expr11];
  L30():
    _expr10 = force? _expr9;
    checkMissing(_expr10);
    r19 = `-`(<missing>, _expr10);
    input3 = ld input;
    check L31() else D9();
  L32():
    _expr12 = force? _expr11;
    checkMissing(_expr12);
    _expr13 = ld `.expr8`;
    check L33() else D11();
  D9():
    deopt 32 [r19, input3];
  D11():
    deopt 38 [_expr12, _expr13];
  L31():
    input4 = force? input3;
    checkMissing(input4);
    r20 = `*`(r19, input4);
    r21 = exp(r20);
    goto L4(r21);
  L33():
    _expr14 = force? _expr13;
    checkMissing(_expr14);
    _expr15 = ld `.expr12`;
    check L34() else D12();
  D12():
    deopt 39 [_expr12, _expr14, _expr15];
  L34():
    _expr16 = force? _expr15;
    checkMissing(_expr16);
    r22 = `-`(_expr14, _expr16);
    r23 = `*`(_expr12, r22);
    st `.expr14` = r23;
    _expr17 = ld `.expr9`;
    check L35() else D13();
  D13():
    deopt 44 [_expr17];
  L35():
    _expr18 = force? _expr17;
    checkMissing(_expr18);
    _expr19 = ld `.expr5`;
    check L36() else D14();
  D14():
    deopt 45 [_expr18, _expr19];
  L36():
    _expr20 = force? _expr19;
    checkMissing(_expr20);
    r24 = `-`(_expr18, _expr20);
    st `.expr15` = r24;
    _expr21 = ld `.expr14`;
    check L37() else D15();
  D15():
    deopt 49 [_expr21];
  L37():
    _expr22 = force? _expr21;
    checkMissing(_expr22);
    _expr23 = ld `.expr15`;
    check L38() else D16();
  D16():
    deopt 50 [_expr22, _expr23];
  L38():
    _expr24 = force? _expr23;
    checkMissing(_expr24);
    r25 = `/`(_expr22, _expr24);
    st `.expr16` = r25;
    _expr25 = ld `.expr15`;
    check L39() else D17();
  D17():
    deopt 54 [_expr25];
  L39():
    _expr26 = force? _expr25;
    checkMissing(_expr26);
    r26 = `^`(_expr26, 2.0);
    st `.expr23` = r26;
    _expr27 = ld `.expr16`;
    check L40() else D18();
  D18():
    deopt 59 [_expr27];
  L40():
    _expr28 = force? _expr27;
    checkMissing(_expr28);
    st `.value` = _expr28;
    as_list = ldf `as.list`;
    check L41() else D19();
  D19():
    deopt 63 [];
  L41():
    p = prom<V +>{
      match_call = ldf `match.call`;
      r27 = dyn match_call();
      c = `is.object`(r27);
      if c then L2() else L3(r27);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", r27);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(r29):
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L5() else L6();
    L1(r33, r34):
      __ = ldf `[` in base;
      r36 = dyn __(r33, r34);
      goto L0(r36);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      c1 = ldf c in base;
      r35 = dyn c1("lKe", "lKa", "lCl");
      goto L1(r29, r35);
    L6():
      r32 = dyn base5("lKe", "lKa", "lCl");
      goto L1(r29, r32);
    };
    r38 = dyn as_list(p);
    check L42() else D20();
  D20():
    deopt 65 [r38];
  L42():
    st `.actualArgs` = r38;
    sym6 = ldf all;
    base6 = ldf all in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L43() else L44();
  L5(r40):
    c2 = `as.logical`(r40);
    if c2 then L48() else L6();
  L43():
    vapply = ldf vapply;
    check L45() else D21();
  L44():
    r39 = dyn base6(<lang vapply(.actualArgs, is.name, NA_LGL)>);
    goto L5(r39);
  D21():
    deopt 70 [];
  L6():
    goto L11();
  L11():
    _value2 = ld `.value`;
    check L89() else D52();
  L45():
    p1 = prom<V +>{
      _actualArgs = ld `.actualArgs`;
      _actualArgs1 = force? _actualArgs;
      checkMissing(_actualArgs1);
      return _actualArgs1;
    };
    p2 = prom<V +>{
      is_name = ld `is.name`;
      is_name1 = force? is_name;
      checkMissing(is_name1);
      return is_name1;
    };
    r43 = dyn vapply(p1, p2, NA_LGL);
    check L46() else D22();
  L48():
    array = ldf array;
    check L49() else D24();
  D22():
    deopt 74 [r43];
  D24():
    deopt 78 [];
  D52():
    deopt 163 [_value2];
  L46():
    all = ldf all in base;
    r44 = dyn all(r43);
    check L47() else D23();
  L49():
    p3 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r46):
      return r46;
    L2():
      sym8 = ldf length;
      base8 = ldf length in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L3():
      r45 = dyn base7(<lang length(.value)>, 3);
      goto L0(r45);
    L1(r48):
      c3 = ldf c in base;
      r50 = dyn c3(r48, 3);
      goto L0(r50);
    L4():
      _value = ld `.value`;
      _value1 = force? _value;
      checkMissing(_value1);
      length = ldf length in base;
      r49 = dyn length(_value1);
      goto L1(r49);
    L5():
      r47 = dyn base8(<sym .value>);
      goto L1(r47);
    };
    p4 = prom<V +>{
      sym9 = ldf list;
      base9 = ldf list in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L2() else L3();
    L0(r53):
      return r53;
    L2():
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L4() else L5();
    L3():
      r52 = dyn base9(NULL, <lang c("lKe", "lKa", "lCl")>);
      goto L0(r52);
    L1(r55):
      list = ldf list in base;
      r57 = dyn list(NULL, r55);
      goto L0(r57);
    L4():
      c4 = ldf c in base;
      r56 = dyn c4("lKe", "lKa", "lCl");
      goto L1(r56);
    L5():
      r54 = dyn base10("lKe", "lKa", "lCl");
      goto L1(r54);
    };
    r59 = dyn array(0.0, p3, p4);
    check L50() else D25();
  L89():
    _value3 = force? _value2;
    checkMissing(_value3);
    popenv;
    return _value3;
  D23():
    deopt 76 [r44];
  D25():
    deopt 82 [r59];
  L47():
    goto L5(r44);
  L50():
    st `.grad` = r59;
    _expr29 = ld `.expr14`;
    check L51() else D26();
  D26():
    deopt 84 [_expr29];
  L51():
    _expr30 = force? _expr29;
    checkMissing(_expr30);
    _expr31 = ld `.expr4`;
    check L52() else D27();
  D27():
    deopt 85 [_expr30, _expr31];
  L52():
    _expr32 = force? _expr31;
    checkMissing(_expr32);
    _expr33 = ld `.expr8`;
    check L53() else D28();
  D28():
    deopt 86 [_expr30, _expr32, _expr33];
  L53():
    _expr34 = force? _expr33;
    checkMissing(_expr34);
    _expr35 = ld `.expr5`;
    check L54() else D29();
  D29():
    deopt 87 [_expr30, _expr32, _expr34, _expr35];
  L54():
    _expr36 = force? _expr35;
    checkMissing(_expr36);
    input5 = ld input;
    check L55() else D30();
  D30():
    deopt 88 [_expr30, _expr32, _expr34, _expr36, input5];
  L55():
    input6 = force? input5;
    checkMissing(input6);
    r60 = `*`(_expr36, input6);
    r61 = `*`(_expr34, r60);
    r62 = `*`(_expr32, r61);
    r63 = `-`(_expr30, r62);
    _expr37 = ld `.expr15`;
    check L56() else D31();
  D31():
    deopt 93 [r63, _expr37];
  L56():
    _expr38 = force? _expr37;
    checkMissing(_expr38);
    r64 = `/`(r63, _expr38);
    _expr39 = ld `.expr14`;
    check L57() else D32();
  D32():
    deopt 95 [r64, _expr39];
  L57():
    _expr40 = force? _expr39;
    checkMissing(_expr40);
    _expr41 = ld `.expr5`;
    check L58() else D33();
  D33():
    deopt 96 [r64, _expr40, _expr41];
  L58():
    _expr42 = force? _expr41;
    checkMissing(_expr42);
    r65 = `*`(_expr40, _expr42);
    _expr43 = ld `.expr23`;
    check L59() else D34();
  D34():
    deopt 98 [r64, r65, _expr43];
  L59():
    _expr44 = force? _expr43;
    checkMissing(_expr44);
    r66 = `/`(r65, _expr44);
    r67 = `+`(r64, r66);
    l = ld `.grad`;
    c5 = `is.object`(l);
    if c5 then L60() else L61(r67);
  L7(dx3):
    st `.grad` = dx3;
    _expr45 = ld `.expr14`;
    check L63() else D35();
  L60():
    dr2 = tryDispatchBuiltin.0("[<-", l, r67);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L62() else L61(r67);
  L61(r69):
    ___ = ldf `[<-` in base;
    r72 = dyn ___(l, <missing>, "lKe", r67);
    goto L7(r72);
  D35():
    deopt 108 [_expr45];
  L62():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L63():
    _expr46 = force? _expr45;
    checkMissing(_expr46);
    _expr47 = ld `.expr4`;
    check L64() else D36();
  D36():
    deopt 109 [_expr46, _expr47];
  L64():
    _expr48 = force? _expr47;
    checkMissing(_expr48);
    _expr49 = ld `.expr12`;
    check L65() else D37();
  D37():
    deopt 110 [_expr46, _expr48, _expr49];
  L65():
    _expr50 = force? _expr49;
    checkMissing(_expr50);
    _expr51 = ld `.expr9`;
    check L66() else D38();
  D38():
    deopt 111 [_expr46, _expr48, _expr50, _expr51];
  L66():
    _expr52 = force? _expr51;
    checkMissing(_expr52);
    input7 = ld input;
    check L67() else D39();
  D39():
    deopt 112 [_expr46, _expr48, _expr50, _expr52, input7];
  L67():
    input8 = force? input7;
    checkMissing(input8);
    r73 = `*`(_expr52, input8);
    r74 = `*`(_expr50, r73);
    r75 = `*`(_expr48, r74);
    r76 = `+`(_expr46, r75);
    _expr53 = ld `.expr15`;
    check L68() else D40();
  D40():
    deopt 117 [r76, _expr53];
  L68():
    _expr54 = force? _expr53;
    checkMissing(_expr54);
    r77 = `/`(r76, _expr54);
    _expr55 = ld `.expr14`;
    check L69() else D41();
  D41():
    deopt 119 [r77, _expr55];
  L69():
    _expr56 = force? _expr55;
    checkMissing(_expr56);
    _expr57 = ld `.expr9`;
    check L70() else D42();
  D42():
    deopt 120 [r77, _expr56, _expr57];
  L70():
    _expr58 = force? _expr57;
    checkMissing(_expr58);
    r78 = `*`(_expr56, _expr58);
    _expr59 = ld `.expr23`;
    check L71() else D43();
  D43():
    deopt 122 [r77, r78, _expr59];
  L71():
    _expr60 = force? _expr59;
    checkMissing(_expr60);
    r79 = `/`(r78, _expr60);
    r80 = `-`(r77, r79);
    l3 = ld `.grad`;
    c6 = `is.object`(l3);
    if c6 then L72() else L73(r80);
  L8(dx5):
    st `.grad` = dx5;
    _expr61 = ld `.expr16`;
    check L75() else D44();
  L72():
    dr4 = tryDispatchBuiltin.0("[<-", l3, r80);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L74() else L73(r80);
  L73(r82):
    ___1 = ldf `[<-` in base;
    r85 = dyn ___1(l3, <missing>, "lKa", r80);
    goto L8(r85);
  D44():
    deopt 132 [_expr61];
  L74():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L8(dx4);
  L75():
    _expr62 = force? _expr61;
    checkMissing(_expr62);
    r86 = `-`(<missing>, _expr62);
    l6 = ld `.grad`;
    c7 = `is.object`(l6);
    if c7 then L76() else L77(r86);
  L9(dx7):
    st `.grad` = dx7;
    sym11 = ldf list;
    base11 = ldf list in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L79() else L80();
  L76():
    dr6 = tryDispatchBuiltin.0("[<-", l6, r86);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L78() else L77(r86);
  L77(r88):
    ___2 = ldf `[<-` in base;
    r91 = dyn ___2(l6, <missing>, "lCl", r86);
    goto L9(r91);
  L10(r93):
    l9 = ld `.grad`;
    dimnames__ = ldf `dimnames<-`;
    check L83() else D47();
  L78():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L9(dx6);
  L79():
    _actualArgs2 = ld `.actualArgs`;
    check L81() else D45();
  L80():
    r92 = dyn base11(NULL, <sym .actualArgs>);
    goto L10(r92);
  D45():
    deopt 144 [_actualArgs2];
  D47():
    deopt 149 [r93, l9, r93];
  L81():
    _actualArgs3 = force? _actualArgs2;
    checkMissing(_actualArgs3);
    list1 = ldf list in base;
    r94 = dyn list1(NULL, _actualArgs3);
    check L82() else D46();
  L83():
    r95 = dyn dimnames__(l9, NULL, r93);
    check L84() else D48();
  D46():
    deopt 147 [r94];
  D48():
    deopt 151 [r93, r95];
  L82():
    goto L10(r94);
  L84():
    st `.grad` = r95;
    _grad = ld `.grad`;
    check L85() else D49();
  D49():
    deopt 153 [_grad];
  L85():
    _grad1 = force? _grad;
    checkMissing(_grad1);
    l10 = ld `.value`;
    attr__ = ldf `attr<-`;
    check L86() else D50();
  D50():
    deopt 156 [_grad1, l10, _grad1];
  L86():
    r96 = dyn attr__(l10, NULL, "gradient", _grad1);
    check L87() else D51();
  D51():
    deopt 159 [_grad1, r96];
  L87():
    st `.value` = r96;
    goto L11();
  }
}
fun inner4146431868(mCall, data, LHS, `...`) {
  (reg mCall:*, reg data:*, reg LHS:*, reg ddd:dots) -+> V { var mCall:*, var data:*, var LHS:*, var `...`:dots?, reg data_frame:cls, reg data1:*, reg data2:V, reg p:p(V +), reg r1:V, reg eval:cls, reg LHS1:*, reg LHS2:V, reg p1:p(V +), reg data3:*, reg data4:V, reg p2:p(V +), reg r4:V, reg eval1:cls, reg mCall1:*, reg mCall2:V, reg c:L, reg mCall4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg p3:p(V +), reg data5:*, reg data6:V, reg p4:p(V +), reg r8:V, reg eval2:cls, reg mCall5:*, reg mCall6:V, reg c1:L, reg mCall8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r9:V, reg p5:p(V +), reg data7:*, reg data8:V, reg p6:p(V +), reg r12:V, reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg resp:*, reg resp1:V, reg length:cls, reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg input:*, reg input1:V, reg length1:cls, reg r18:V, reg n:*, reg n1:V, reg r19:V, reg c2:L, reg stop:cls, reg r20:V, reg n2:*, reg n3:V, reg r22:V, reg c3:L, reg stop1:cls, reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg resp2:*, reg resp3:V, reg which_max:cls, reg r27:V, reg rmaxind:*, reg rmaxind1:V, reg n4:*, reg n5:V, reg r28:V, reg c4:L, reg r29:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg resp4:*, reg resp5:V, reg c5:L, reg resp7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg rmaxind2:*, reg rmaxind3:V, reg __2:cls, reg r33:V, reg r34:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg r39:V, reg resp8:*, reg resp9:V, reg c6:L, reg r41:V, reg resp11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r43:V, reg dx7:V, reg n6:*, reg n7:V, reg __3:cls, reg r44:V, reg r45:V, reg r46:V, reg input2:*, reg input3:V, reg c7:L, reg r48:V, reg input5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg r50:V, reg dx9:V, reg n8:*, reg n9:V, reg __4:cls, reg r51:V, reg input6:*, reg input7:V, reg c8:L, reg r53:V, reg dx11:V, reg input9:V, reg dr10:V, reg dc5:L, reg dx13:V, reg r55:V, reg dx14:V, reg dx15:V, reg rmaxind4:*, reg rmaxind5:V, reg __5:cls, reg r56:V, reg r57:V, reg r58:V, reg r59:V, reg nls:cls, reg __6:cls, reg r60:V, reg p7:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r62:V, reg r63:V, reg resp12:*, reg resp13:V, reg input10:*, reg input11:V, reg Dose:*, reg Dose1:V, reg lKe:*, reg lKe1:V, reg list:cls, reg r64:V, reg p8:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r66:V, reg r67:V, reg lKe2:*, reg lKe3:V, reg r68:V, reg list1:cls, reg r69:V, reg p9:p(V +), reg ddd1:dots?, reg r71:V, reg coef:cls, reg cond_lin:*, reg cond_lin1:V, reg p10:p(V +), reg r73:V, reg nls1:cls, reg __7:cls, reg r74:V, reg p11:p(V +), reg data_frame1:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r76:V, reg r77:V, reg resp14:*, reg resp15:V, reg input12:*, reg input13:V, reg Dose2:*, reg Dose3:V, reg list2:cls, reg r78:V, reg p12:p(V +), reg r80:V, reg p13:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r82:V, reg r83:V, reg pars:*, reg pars1:V, reg c9:L, reg pars3:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg __8:cls, reg r84:V, reg lKe4:*, reg lKe5:V, reg list3:cls, reg r85:V, reg p14:p(V +), reg ddd2:dots?, reg r87:V, reg coef1:cls, reg cond_lin2:*, reg cond_lin3:V, reg p15:p(V +), reg r89:V, reg pars4:*, reg pars5:V, reg c10:L, reg pars7:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg __9:cls, reg r90:V, reg pars8:*, reg pars9:V, reg c11:L, reg pars11:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg __10:cls, reg r91:V, reg setNames:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r92:V, reg r93:V, reg lKe6:*, reg lKe7:V, reg lKa:*, reg lKa1:V, reg lKe8:*, reg lKe9:V, reg lKa2:*, reg lKa3:V, reg r94:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r97:V, reg r98:V, reg r99:V, reg pars12:*, reg pars13:V, reg c12:L, reg r101:V, reg pars15:V, reg dr18:V, reg dc9:L, reg dx22:V, reg r103:V, reg dx23:V, reg __11:cls, reg r104:V, reg r105:V, reg r106:V, reg c13:cls, reg r107:V, reg p16:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r109:V, reg r110:V, reg c14:cls, reg r111:V, reg p17:p(V +), reg r113:V |
    mkenv;
    st mCall = mCall;
    st data = data;
    st LHS = LHS;
    st `...` = ddd;
    data_frame = ldf `data.frame`;
    check L17() else D0();
  D0():
    deopt 1 [];
  L17():
    p = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r1 = dyn data_frame(p);
    check L18() else D1();
  D1():
    deopt 3 [r1];
  L18():
    st data = r1;
    eval = ldf eval;
    check L19() else D2();
  D2():
    deopt 6 [];
  L19():
    p1 = prom<V +>{
      LHS1 = ld LHS;
      LHS2 = force? LHS1;
      checkMissing(LHS2);
      return LHS2;
    };
    p2 = prom<V +>{
      data3 = ld data;
      data4 = force? data3;
      checkMissing(data4);
      return data4;
    };
    r4 = dyn eval(p1, p2);
    check L20() else D3();
  D3():
    deopt 9 [r4];
  L20():
    st resp = r4;
    eval1 = ldf eval;
    check L21() else D4();
  D4():
    deopt 12 [];
  L21():
    p3 = prom<V +>{
      mCall1 = ld mCall;
      mCall2 = force? mCall1;
      checkMissing(mCall2);
      c = `is.object`(mCall2);
      if c then L1() else L2(mCall2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", mCall2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(mCall4):
      __ = ldf `[[` in base;
      r5 = dyn __(mCall4, "input");
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p4 = prom<V +>{
      data5 = ld data;
      data6 = force? data5;
      checkMissing(data6);
      return data6;
    };
    r8 = dyn eval1(p3, p4);
    check L22() else D5();
  D5():
    deopt 15 [r8];
  L22():
    st input = r8;
    eval2 = ldf eval;
    check L23() else D6();
  D6():
    deopt 18 [];
  L23():
    p5 = prom<V +>{
      mCall5 = ld mCall;
      mCall6 = force? mCall5;
      checkMissing(mCall6);
      c1 = `is.object`(mCall6);
      if c1 then L1() else L2(mCall6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", mCall6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(mCall8):
      __1 = ldf `[[` in base;
      r9 = dyn __1(mCall8, "Dose");
      goto L0(r9);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p6 = prom<V +>{
      data7 = ld data;
      data8 = force? data7;
      checkMissing(data8);
      return data8;
    };
    r12 = dyn eval2(p5, p6);
    check L24() else D7();
  D7():
    deopt 21 [r12];
  L24():
    st Dose = r12;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L0(r14):
    st n = r14;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L25():
    resp = ld resp;
    check L27() else D8();
  L26():
    r13 = dyn base(<sym resp>);
    goto L0(r13);
  D8():
    deopt 25 [resp];
  L1(r17):
    n = ld n;
    check L33() else D12();
  L27():
    resp1 = force? resp;
    checkMissing(resp1);
    length = ldf length in base;
    r15 = dyn length(resp1);
    check L28() else D9();
  L29():
    input = ld input;
    check L31() else D10();
  L30():
    r16 = dyn base1(<sym input>);
    goto L1(r16);
  D9():
    deopt 28 [r15];
  D10():
    deopt 32 [input];
  D12():
    deopt 35 [r17, n];
  L28():
    goto L0(r15);
  L31():
    input1 = force? input;
    checkMissing(input1);
    length1 = ldf length in base;
    r18 = dyn length1(input1);
    check L32() else D11();
  L33():
    n1 = force? n;
    checkMissing(n1);
    r19 = `!=`(r17, n1);
    c2 = `as.logical`(r19);
    if c2 then L34() else L2();
  D11():
    deopt 35 [r18];
  L2():
    goto L3();
  L3():
    n2 = ld n;
    check L38() else D15();
  L32():
    goto L1(r18);
  L34():
    stop = ldf stop;
    check L35() else D13();
  D13():
    deopt 39 [];
  D15():
    deopt 44 [n2];
  L35():
    r20 = dyn stop("must have length of response = length of second argument to 'SSfol'");
    check L36() else D14();
  L38():
    n3 = force? n2;
    checkMissing(n3);
    r22 = `<`(n3, 4.0);
    c3 = `as.logical`(r22);
    if c3 then L39() else L4();
  D14():
    deopt 41 [r20];
  L4():
    goto L5();
  L5():
    sym2 = ldf `which.max`;
    base2 = ldf `which.max` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  L36():
    goto L3();
  L39():
    stop1 = ldf stop;
    check L40() else D16();
  D16():
    deopt 49 [];
  L6(r26):
    st rmaxind = r26;
    rmaxind = ld rmaxind;
    check L47() else D20();
  L40():
    r23 = dyn stop1("must have at least 4 observations to fit an 'SSfol' model");
    check L41() else D17();
  L43():
    resp2 = ld resp;
    check L45() else D18();
  L44():
    r25 = dyn base2(<sym resp>);
    goto L6(r25);
  D17():
    deopt 51 [r23];
  D18():
    deopt 56 [resp2];
  D20():
    deopt 61 [rmaxind];
  L41():
    goto L5();
  L45():
    resp3 = force? resp2;
    checkMissing(resp3);
    which_max = ldf `which.max` in base;
    r27 = dyn which_max(resp3);
    check L46() else D19();
  L47():
    rmaxind1 = force? rmaxind;
    checkMissing(rmaxind1);
    n4 = ld n;
    check L48() else D21();
  D19():
    deopt 59 [r27];
  D21():
    deopt 62 [rmaxind1, n4];
  L46():
    goto L6(r27);
  L48():
    n5 = force? n4;
    checkMissing(n5);
    r28 = `==`(rmaxind1, n5);
    c4 = `as.logical`(r28);
    if c4 then L49() else L7();
  L7():
    sym3 = ldf log;
    base3 = ldf log in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  L8(r29):
    st lKe = r29;
    nls = ldf nls;
    check L77() else D30();
  L49():
    goto L8(-2.5);
  D30():
    deopt 95 [];
  L51():
    sym4 = ldf log;
    base4 = ldf log in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  L52():
    r30 = dyn base3(<lang `/`(`(`(`-`(log(`[`(resp, rmaxind)), log(`[`(resp, n)))), `(`(`-`(`[`(input, n), `[`(input, rmaxind))))>);
    goto L8(r30);
  L77():
    p7 = prom<V +>{
      __6 = ldf `~` in base;
      r60 = dyn __6(<sym resp>, <lang `*`(`(`(`-`(exp(`*`(`-`(input), exp(lKe))), exp(`*`(`-`(input), exp(lKa))))), Dose)>);
      return r60;
    };
    p8 = prom<V +>{
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r63):
      return r63;
    L1():
      resp12 = ld resp;
      resp13 = force? resp12;
      checkMissing(resp13);
      input10 = ld input;
      input11 = force? input10;
      checkMissing(input11);
      Dose = ld Dose;
      Dose1 = force? Dose;
      checkMissing(Dose1);
      lKe = ld lKe;
      lKe1 = force? lKe;
      checkMissing(lKe1);
      list = ldf list in base;
      r64 = dyn list(resp13, input11, Dose1, lKe1);
      goto L0(r64);
    L2():
      r62 = dyn base6[resp, input, Dose, lKe](<sym resp>, <sym input>, <sym Dose>, <sym lKe>);
      goto L0(r62);
    };
    p9 = prom<V +>{
      sym7 = ldf list;
      base7 = ldf list in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r67):
      return r67;
    L1():
      lKe2 = ld lKe;
      lKe3 = force? lKe2;
      checkMissing(lKe3);
      r68 = `+`(lKe3, 1.0);
      list1 = ldf list in base;
      r69 = dyn list1(r68);
      goto L0(r69);
    L2():
      r66 = dyn base7[lKa](<lang `+`(lKe, 1.0)>);
      goto L0(r66);
    };
    ddd1 = ld `...`;
    r71 = dyn nls[, data, start, algorithm, `...`](p7, p8, p9, "plinear", ddd1);
    check L78() else D31();
  D31():
    deopt 104 [r71];
  L9(r32):
    sym5 = ldf log;
    base5 = ldf log in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L60() else L61();
  L53():
    resp4 = ld resp;
    check L55() else D22();
  L54():
    r31 = dyn base4(<lang `[`(resp, rmaxind)>);
    goto L9(r31);
  L78():
    st `cond.lin` = r71;
    coef = ldf coef;
    check L79() else D32();
  D22():
    deopt 69 [resp4];
  D32():
    deopt 107 [];
  L11(r38, r39):
    r46 = `-`(r38, r39);
    input2 = ld input;
    check L67() else D26();
  L55():
    resp5 = force? resp4;
    checkMissing(resp5);
    c5 = `is.object`(resp5);
    if c5 then L56() else L57(resp5);
  L60():
    resp8 = ld resp;
    check L62() else D24();
  L61():
    r37 = dyn base5(<lang `[`(resp, n)>);
    goto L11(r32, r37);
  L79():
    p10 = prom<V +>{
      cond_lin = ld `cond.lin`;
      cond_lin1 = force? cond_lin;
      checkMissing(cond_lin1);
      return cond_lin1;
    };
    r73 = dyn coef(p10);
    check L80() else D33();
  D24():
    deopt 75 [r32, resp8];
  D26():
    deopt 81 [r46, input2];
  D33():
    deopt 109 [r73];
  L10(dx5):
    r34 = log(dx5, 2.718281828459045);
    goto L9(r34);
  L56():
    dr4 = tryDispatchBuiltin.1("[", resp5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L58() else L57(dr4);
  L57(resp7):
    rmaxind2 = ld rmaxind;
    check L59() else D23();
  L62():
    resp9 = force? resp8;
    checkMissing(resp9);
    c6 = `is.object`(resp9);
    if c6 then L63() else L64(r32, resp9);
  L67():
    input3 = force? input2;
    checkMissing(input3);
    c7 = `is.object`(input3);
    if c7 then L68() else L69(r46, input3);
  L80():
    st pars = r73;
    nls1 = ldf nls;
    check L81() else D34();
  D23():
    deopt 71 [resp7, rmaxind2];
  D34():
    deopt 112 [];
  L12(r43, dx7):
    r45 = log(dx7, 2.718281828459045);
    goto L11(r43, r45);
  L13(r50, dx9):
    input6 = ld input;
    check L72() else D28();
  L58():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(dx4);
  L59():
    rmaxind3 = force? rmaxind2;
    __2 = ldf `[` in base;
    r33 = dyn __2(resp7, rmaxind3);
    goto L10(r33);
  L63():
    dr6 = tryDispatchBuiltin.1("[", resp9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L65() else L64(r32, dr6);
  L64(r41, resp11):
    n6 = ld n;
    check L66() else D25();
  L68():
    dr8 = tryDispatchBuiltin.1("[", input3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L70() else L69(r46, dr8);
  L69(r48, input5):
    n8 = ld n;
    check L71() else D27();
  L81():
    p11 = prom<V +>{
      __7 = ldf `~` in base;
      r74 = dyn __7(<sym resp>, <lang `/`(`(`(`*`(Dose, `(`(`-`(exp(`*`(`-`(input), exp(lKe))), exp(`*`(`-`(input), exp(lKa))))))), `(`(`-`(exp(lKa), exp(lKe))))>);
      return r74;
    };
    p13 = prom<V +>{
      data_frame1 = ldf `data.frame`;
      p12 = prom<V +>{
        sym8 = ldf list;
        base8 = ldf list in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L1() else L2();
      L0(r77):
        return r77;
      L1():
        resp14 = ld resp;
        resp15 = force? resp14;
        checkMissing(resp15);
        input12 = ld input;
        input13 = force? input12;
        checkMissing(input13);
        Dose2 = ld Dose;
        Dose3 = force? Dose2;
        checkMissing(Dose3);
        list2 = ldf list in base;
        r78 = dyn list2(resp15, input13, Dose3);
        goto L0(r78);
      L2():
        r76 = dyn base8[resp, input, Dose](<sym resp>, <sym input>, <sym Dose>);
        goto L0(r76);
      };
      r80 = dyn data_frame1(p12);
      return r80;
    };
    p14 = prom<V +>{
      sym9 = ldf list;
      base9 = ldf list in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L2() else L3();
    L0(r83):
      return r83;
    L2():
      pars = ld pars;
      pars1 = force? pars;
      checkMissing(pars1);
      c9 = `is.object`(pars1);
      if c9 then L4() else L5(pars1);
    L3():
      r82 = dyn base9[lKa, lKe](<lang `[[`(pars, "lKa")>, <sym lKe>);
      goto L0(r82);
    L1(dx17):
      lKe4 = ld lKe;
      lKe5 = force? lKe4;
      checkMissing(lKe5);
      list3 = ldf list in base;
      r85 = dyn list3(dx17, lKe5);
      goto L0(r85);
    L4():
      dr12 = tryDispatchBuiltin.1("[[", pars1);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L6() else L5(dr12);
    L5(pars3):
      __8 = ldf `[[` in base;
      r84 = dyn __8(pars3, "lKa");
      goto L1(r84);
    L6():
      dx16 = getTryDispatchBuiltinValue(dr12);
      goto L1(dx16);
    };
    ddd2 = ld `...`;
    r87 = dyn nls1[, data, start, algorithm, `...`](p11, p13, p14, "plinear", ddd2);
    check L82() else D35();
  D25():
    deopt 77 [r41, resp11, n6];
  D27():
    deopt 83 [r48, input5, n8];
  D28():
    deopt 85 [r50, dx9, input6];
  D35():
    deopt 121 [r87];
  L65():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(r32, dx6);
  L66():
    n7 = force? n6;
    __3 = ldf `[` in base;
    r44 = dyn __3(resp11, n7);
    goto L12(r41, r44);
  L70():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L13(r46, dx8);
  L71():
    n9 = force? n8;
    __4 = ldf `[` in base;
    r51 = dyn __4(input5, n9);
    goto L13(r48, r51);
  L72():
    input7 = force? input6;
    checkMissing(input7);
    c8 = `is.object`(input7);
    if c8 then L73() else L74(r50, dx9, input7);
  L82():
    st `cond.lin` = r87;
    coef1 = ldf coef;
    check L83() else D36();
  D36():
    deopt 124 [];
  L14(r55, dx14, dx15):
    r57 = `-`(dx14, dx15);
    r58 = `/`(r55, r57);
    r59 = log(r58, 2.718281828459045);
    goto L8(r59);
  L73():
    dr10 = tryDispatchBuiltin.1("[", input7);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L75() else L74(r50, dx9, dr10);
  L74(r53, dx11, input9):
    rmaxind4 = ld rmaxind;
    check L76() else D29();
  L83():
    p15 = prom<V +>{
      cond_lin2 = ld `cond.lin`;
      cond_lin3 = force? cond_lin2;
      checkMissing(cond_lin3);
      return cond_lin3;
    };
    r89 = dyn coef1(p15);
    check L84() else D37();
  D29():
    deopt 87 [r53, dx11, input9, rmaxind4];
  D37():
    deopt 126 [r89];
  L75():
    dx13 = getTryDispatchBuiltinValue(dr10);
    goto L14(r50, dx9, dx13);
  L76():
    rmaxind5 = force? rmaxind4;
    __5 = ldf `[` in base;
    r56 = dyn __5(input9, rmaxind5);
    goto L14(r53, dx11, r56);
  L84():
    st pars = r89;
    pars4 = ld pars;
    check L85() else D38();
  D38():
    deopt 128 [pars4];
  L85():
    pars5 = force? pars4;
    checkMissing(pars5);
    c10 = `is.object`(pars5);
    if c10 then L86() else L87(pars5);
  L15(dx19):
    st lKa = dx19;
    pars8 = ld pars;
    check L89() else D39();
  L86():
    dr14 = tryDispatchBuiltin.1("[[", pars5);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L88() else L87(dr14);
  L87(pars7):
    __9 = ldf `[[` in base;
    r90 = dyn __9(pars7, "lKa");
    goto L15(r90);
  D39():
    deopt 134 [pars8];
  L88():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L15(dx18);
  L89():
    pars9 = force? pars8;
    checkMissing(pars9);
    c11 = `is.object`(pars9);
    if c11 then L90() else L91(pars9);
  L16(dx21):
    st lKe = dx21;
    setNames = ldf setNames;
    check L93() else D40();
  L90():
    dr16 = tryDispatchBuiltin.1("[[", pars9);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L92() else L91(dr16);
  L91(pars11):
    __10 = ldf `[[` in base;
    r91 = dyn __10(pars11, "lKe");
    goto L16(r91);
  D40():
    deopt 141 [];
  L92():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L16(dx20);
  L93():
    p16 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L3() else L4();
    L0(r93):
      return r93;
    L3():
      lKe6 = ld lKe;
      lKe7 = force? lKe6;
      checkMissing(lKe7);
      lKa = ld lKa;
      lKa1 = force? lKa;
      checkMissing(lKa1);
      lKe8 = ld lKe;
      lKe9 = force? lKe8;
      checkMissing(lKe9);
      lKa2 = ld lKa;
      lKa3 = force? lKa2;
      checkMissing(lKa3);
      r94 = `+`(lKe9, lKa3);
      sym11 = ldf log;
      base11 = ldf log in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L5() else L6();
    L4():
      r92 = dyn base10(<sym lKe>, <sym lKa>, <lang `-`(`+`(lKe, lKa), log(`[[`(pars, 3)))>);
      goto L0(r92);
    L1(r98, r99):
      r106 = `-`(r98, r99);
      c13 = ldf c in base;
      r107 = dyn c13(lKe7, lKa1, r106);
      goto L0(r107);
    L5():
      pars12 = ld pars;
      pars13 = force? pars12;
      checkMissing(pars13);
      c12 = `is.object`(pars13);
      if c12 then L7() else L8(r94, pars13);
    L6():
      r97 = dyn base11(<lang `[[`(pars, 3)>);
      goto L1(r94, r97);
    L2(r103, dx23):
      r105 = log(dx23, 2.718281828459045);
      goto L1(r103, r105);
    L7():
      dr18 = tryDispatchBuiltin.1("[[", pars13);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L9() else L8(r94, dr18);
    L8(r101, pars15):
      __11 = ldf `[[` in base;
      r104 = dyn __11(pars15, 3);
      goto L2(r101, r104);
    L9():
      dx22 = getTryDispatchBuiltinValue(dr18);
      goto L2(r94, dx22);
    };
    p17 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r110):
      return r110;
    L1():
      c14 = ldf c in base;
      r111 = dyn c14("lKe", "lKa", "lCl");
      goto L0(r111);
    L2():
      r109 = dyn base12("lKe", "lKa", "lCl");
      goto L0(r109);
    };
    r113 = dyn setNames(p16, p17);
    check L94() else D41();
  D41():
    deopt 144 [r113];
  L94():
    popenv;
    return r113;
  }
}
fun inner2708337952() {
  () -+> V { reg SSfol:cls, reg Dose:*, reg Dose1:V, reg p:p(V +), reg Time:*, reg Time1:V, reg p1:p(V +), reg lKe:*, reg lKe1:V, reg p2:p(V +), reg lKa:*, reg lKa1:V, reg p3:p(V +), reg lCl:*, reg lCl1:V, reg p4:p(V +), reg r5:V |
    mkenv;
    st lKe = -2.5;
    st lKa = 0.5;
    st lCl = -3.0;
    SSfol = ldf SSfol;
    check L0() else D0();
  D0():
    deopt 10 [];
  L0():
    p = prom<V +>{
      Dose = ld Dose;
      Dose1 = force? Dose;
      checkMissing(Dose1);
      return Dose1;
    };
    p1 = prom<V +>{
      Time = ld Time;
      Time1 = force? Time;
      checkMissing(Time1);
      return Time1;
    };
    p2 = prom<V +>{
      lKe = ld lKe;
      lKe1 = force? lKe;
      checkMissing(lKe1);
      return lKe1;
    };
    p3 = prom<V +>{
      lKa = ld lKa;
      lKa1 = force? lKa;
      checkMissing(lKa1);
      return lKa1;
    };
    p4 = prom<V +>{
      lCl = ld lCl;
      lCl1 = force? lCl;
      checkMissing(lCl1);
      return lCl1;
    };
    r5 = dyn SSfol(p, p1, p2, p3, p4);
    check L1() else D1();
  D1():
    deopt 16 [r5];
  L1():
    popenv;
    return r5;
  }
}
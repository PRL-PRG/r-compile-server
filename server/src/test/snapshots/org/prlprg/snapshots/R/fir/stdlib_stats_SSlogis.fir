fun main() {
  () -+> V { reg structure:cls, reg r:cls, reg p:p(V +), reg r2:cls, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg c:cls, reg r6:V, reg p2:p(V +), reg r8:V |
    mkenv;
    structure = ldf structure;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      r = clos inner1144084371;
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
      r6 = dyn c("Asym", "xmid", "scal");
      goto L0(r6);
    L2():
      r4 = dyn base("Asym", "xmid", "scal");
      goto L0(r4);
    };
    r8 = dyn structure[, initial, pnames, class](p, p1, p2, "selfStart");
    check L1() else D1();
  D1():
    deopt 9 [r8];
  L1():
    st SSlogis = r8;
    invisible.0();
    popenv;
    return r8;
  }
}
fun inner1144084371(input, Asym, xmid, scal) {
  (reg input:*, reg Asym:*, reg xmid:*, reg scal:*) -+> V { var input:*, var Asym:*, var xmid:*, var scal:*, reg xmid1:*, reg xmid2:V, reg input1:*, reg input2:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg _expr1:*, reg _expr2:V, reg scal1:*, reg scal2:V, reg r3:V, reg r4:V, reg _expr3:*, reg _expr4:V, reg r5:V, reg Asym1:*, reg Asym2:V, reg _expr5:*, reg _expr6:V, reg r6:V, reg as_list:cls, reg match_call:cls, reg r7:V, reg c:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg r14:V, reg c1:cls, reg r15:V, reg __:cls, reg r16:V, reg p:p(V +), reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg vapply:cls, reg _actualArgs:*, reg _actualArgs1:V, reg p1:p(V +), reg is_name:*, reg is_name1:V, reg p2:p(V +), reg r23:V, reg all:cls, reg r24:V, reg c2:L, reg _expr7:*, reg _expr8:V, reg r25:V, reg array:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg _value:*, reg _value1:V, reg length:cls, reg r30:V, reg c3:cls, reg r31:V, reg p3:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg c4:cls, reg r37:V, reg list:cls, reg r38:V, reg p4:p(V +), reg r40:V, reg _expr9:*, reg _expr10:V, reg r41:V, reg l:*, reg c5:L, reg r43:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ___:cls, reg r46:V, reg Asym3:*, reg Asym4:V, reg _expr11:*, reg _expr12:V, reg r47:V, reg scal3:*, reg scal4:V, reg r48:V, reg _expr13:*, reg _expr14:V, reg r49:V, reg r50:V, reg l3:*, reg c6:L, reg r52:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ___1:cls, reg r55:V, reg xm:*, reg xm1:V, reg _e2:*, reg _e3:V, reg r56:V, reg l6:*, reg c7:L, reg r58:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ___2:cls, reg r61:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r62:V, reg r63:V, reg _actualArgs2:*, reg _actualArgs3:V, reg list1:cls, reg r64:V, reg l9:*, reg dimnames__:cls, reg r65:V, reg _grad:*, reg _grad1:V, reg l10:*, reg attr__:cls, reg r66:V, reg _value2:*, reg _value3:V |
    mkenv;
    st input = input;
    st Asym = Asym;
    st xmid = xmid;
    st scal = scal;
    xmid1 = ld xmid;
    check L8() else D0();
  D0():
    deopt 0 [xmid1];
  L8():
    xmid2 = force? xmid1;
    checkMissing(xmid2);
    input1 = ld input;
    check L9() else D1();
  D1():
    deopt 1 [xmid2, input1];
  L9():
    input2 = force? input1;
    checkMissing(input2);
    r = `-`(xmid2, input2);
    st `.expr1` = r;
    sym = ldf exp;
    base = ldf exp in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r2):
    st `.expr3` = r2;
    _expr3 = ld `.expr3`;
    check L14() else D4();
  L10():
    _expr1 = ld `.expr1`;
    check L12() else D2();
  L11():
    r1 = dyn base(<lang `<-`(.e2, `/`(.expr1, scal))>);
    goto L0(r1);
  D2():
    deopt 6 [_expr1];
  D4():
    deopt 14 [1.0, _expr3];
  L12():
    _expr2 = force? _expr1;
    checkMissing(_expr2);
    scal1 = ld scal;
    check L13() else D3();
  L14():
    _expr4 = force? _expr3;
    checkMissing(_expr4);
    r5 = `+`(1.0, _expr4);
    st `.expr4` = r5;
    Asym1 = ld Asym;
    check L15() else D5();
  D3():
    deopt 7 [_expr2, scal1];
  D5():
    deopt 18 [Asym1];
  L13():
    scal2 = force? scal1;
    checkMissing(scal2);
    r3 = `/`(_expr2, scal2);
    st `.e2` = r3;
    r4 = exp(r3);
    goto L0(r4);
  L15():
    Asym2 = force? Asym1;
    checkMissing(Asym2);
    _expr5 = ld `.expr4`;
    check L16() else D6();
  D6():
    deopt 19 [Asym2, _expr5];
  L16():
    _expr6 = force? _expr5;
    checkMissing(_expr6);
    r6 = `/`(Asym2, _expr6);
    st `.value` = r6;
    as_list = ldf `as.list`;
    check L17() else D7();
  D7():
    deopt 24 [];
  L17():
    p = prom<V +>{
      match_call = ldf `match.call`;
      r7 = dyn match_call();
      c = `is.object`(r7);
      if c then L2() else L3(r7);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", r7);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(r9):
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L5() else L6();
    L1(r13, r14):
      __ = ldf `[` in base;
      r16 = dyn __(r13, r14);
      goto L0(r16);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      c1 = ldf c in base;
      r15 = dyn c1("Asym", "xmid", "scal");
      goto L1(r9, r15);
    L6():
      r12 = dyn base1("Asym", "xmid", "scal");
      goto L1(r9, r12);
    };
    r18 = dyn as_list(p);
    check L18() else D8();
  D8():
    deopt 26 [r18];
  L18():
    st `.actualArgs` = r18;
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L1(r20):
    c2 = `as.logical`(r20);
    if c2 then L24() else L2();
  L19():
    vapply = ldf vapply;
    check L21() else D9();
  L20():
    r19 = dyn base2(<lang vapply(.actualArgs, is.name, NA_LGL)>);
    goto L1(r19);
  D9():
    deopt 31 [];
  L2():
    goto L7();
  L7():
    _value2 = ld `.value`;
    check L54() else D29();
  L21():
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
    r23 = dyn vapply(p1, p2, NA_LGL);
    check L22() else D10();
  L24():
    _expr7 = ld `.expr4`;
    check L25() else D12();
  D10():
    deopt 35 [r23];
  D12():
    deopt 38 [_expr7];
  D29():
    deopt 108 [_value2];
  L22():
    all = ldf all in base;
    r24 = dyn all(r23);
    check L23() else D11();
  L25():
    _expr8 = force? _expr7;
    checkMissing(_expr8);
    r25 = `^`(_expr8, 2.0);
    st `.expr10` = r25;
    array = ldf array;
    check L26() else D13();
  L54():
    _value3 = force? _value2;
    checkMissing(_value3);
    popenv;
    return _value3;
  D11():
    deopt 37 [r24];
  D13():
    deopt 44 [];
  L23():
    goto L1(r24);
  L26():
    p3 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r27):
      return r27;
    L2():
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L4() else L5();
    L3():
      r26 = dyn base3(<lang length(.value)>, 3);
      goto L0(r26);
    L1(r29):
      c3 = ldf c in base;
      r31 = dyn c3(r29, 3);
      goto L0(r31);
    L4():
      _value = ld `.value`;
      _value1 = force? _value;
      checkMissing(_value1);
      length = ldf length in base;
      r30 = dyn length(_value1);
      goto L1(r30);
    L5():
      r28 = dyn base4(<sym .value>);
      goto L1(r28);
    };
    p4 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r34):
      return r34;
    L2():
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L4() else L5();
    L3():
      r33 = dyn base5(NULL, <lang c("Asym", "xmid", "scal")>);
      goto L0(r33);
    L1(r36):
      list = ldf list in base;
      r38 = dyn list(NULL, r36);
      goto L0(r38);
    L4():
      c4 = ldf c in base;
      r37 = dyn c4("Asym", "xmid", "scal");
      goto L1(r37);
    L5():
      r35 = dyn base6("Asym", "xmid", "scal");
      goto L1(r35);
    };
    r40 = dyn array(0.0, p3, p4);
    check L27() else D14();
  D14():
    deopt 48 [r40];
  L27():
    st `.grad` = r40;
    _expr9 = ld `.expr4`;
    check L28() else D15();
  D15():
    deopt 51 [1.0, _expr9];
  L28():
    _expr10 = force? _expr9;
    checkMissing(_expr10);
    r41 = `/`(1.0, _expr10);
    l = ld `.grad`;
    c5 = `is.object`(l);
    if c5 then L29() else L30(r41);
  L3(dx3):
    st `.grad` = dx3;
    Asym3 = ld Asym;
    check L32() else D16();
  L29():
    dr2 = tryDispatchBuiltin.0("[<-", l, r41);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L31() else L30(r41);
  L30(r43):
    ___ = ldf `[<-` in base;
    r46 = dyn ___(l, <missing>, "Asym", r41);
    goto L3(r46);
  D16():
    deopt 60 [Asym3];
  L31():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L32():
    Asym4 = force? Asym3;
    checkMissing(Asym4);
    _expr11 = ld `.expr3`;
    check L33() else D17();
  D17():
    deopt 61 [Asym4, _expr11];
  L33():
    _expr12 = force? _expr11;
    checkMissing(_expr12);
    r47 = `*`(Asym4, _expr12);
    scal3 = ld scal;
    check L34() else D18();
  D18():
    deopt 63 [r47, scal3];
  L34():
    scal4 = force? scal3;
    checkMissing(scal4);
    r48 = `/`(r47, scal4);
    _expr13 = ld `.expr10`;
    check L35() else D19();
  D19():
    deopt 65 [r48, _expr13];
  L35():
    _expr14 = force? _expr13;
    checkMissing(_expr14);
    r49 = `/`(r48, _expr14);
    st xm = r49;
    r50 = `-`(<missing>, r49);
    l3 = ld `.grad`;
    c6 = `is.object`(l3);
    if c6 then L36() else L37(r50);
  L4(dx5):
    st `.grad` = dx5;
    xm = ld xm;
    check L39() else D20();
  L36():
    dr4 = tryDispatchBuiltin.0("[<-", l3, r50);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L38() else L37(r50);
  L37(r52):
    ___1 = ldf `[<-` in base;
    r55 = dyn ___1(l3, <missing>, "xmid", r50);
    goto L4(r55);
  D20():
    deopt 76 [xm];
  L38():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L4(dx4);
  L39():
    xm1 = force? xm;
    checkMissing(xm1);
    _e2 = ld `.e2`;
    check L40() else D21();
  D21():
    deopt 77 [xm1, _e2];
  L40():
    _e3 = force? _e2;
    checkMissing(_e3);
    r56 = `*`(xm1, _e3);
    l6 = ld `.grad`;
    c7 = `is.object`(l6);
    if c7 then L41() else L42(r56);
  L5(dx7):
    st `.grad` = dx7;
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L44() else L45();
  L41():
    dr6 = tryDispatchBuiltin.0("[<-", l6, r56);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L43() else L42(r56);
  L42(r58):
    ___2 = ldf `[<-` in base;
    r61 = dyn ___2(l6, <missing>, "scal", r56);
    goto L5(r61);
  L6(r63):
    l9 = ld `.grad`;
    dimnames__ = ldf `dimnames<-`;
    check L48() else D24();
  L43():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L5(dx6);
  L44():
    _actualArgs2 = ld `.actualArgs`;
    check L46() else D22();
  L45():
    r62 = dyn base7(NULL, <sym .actualArgs>);
    goto L6(r62);
  D22():
    deopt 89 [_actualArgs2];
  D24():
    deopt 94 [r63, l9, r63];
  L46():
    _actualArgs3 = force? _actualArgs2;
    checkMissing(_actualArgs3);
    list1 = ldf list in base;
    r64 = dyn list1(NULL, _actualArgs3);
    check L47() else D23();
  L48():
    r65 = dyn dimnames__(l9, NULL, r63);
    check L49() else D25();
  D23():
    deopt 92 [r64];
  D25():
    deopt 96 [r63, r65];
  L47():
    goto L6(r64);
  L49():
    st `.grad` = r65;
    _grad = ld `.grad`;
    check L50() else D26();
  D26():
    deopt 98 [_grad];
  L50():
    _grad1 = force? _grad;
    checkMissing(_grad1);
    l10 = ld `.value`;
    attr__ = ldf `attr<-`;
    check L51() else D27();
  D27():
    deopt 101 [_grad1, l10, _grad1];
  L51():
    r66 = dyn attr__(l10, NULL, "gradient", _grad1);
    check L52() else D28();
  D28():
    deopt 104 [_grad1, r66];
  L52():
    st `.value` = r66;
    goto L7();
  }
}
fun inner4146431868(mCall, data, LHS, `...`) {
  (reg mCall:*, reg data:*, reg LHS:*, reg ddd:dots) -+> V { var mCall:*, var data:*, var LHS:*, var `...`:dots?, reg sortedXyData:cls, reg mCall1:*, reg mCall2:V, reg c:L, reg mCall4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg p:p(V +), reg LHS1:*, reg LHS2:V, reg p1:p(V +), reg data1:*, reg data2:V, reg p2:p(V +), reg r4:V, reg nrow:cls, reg xy:*, reg xy1:V, reg p3:p(V +), reg r6:V, reg r7:V, reg c1:L, reg stop:cls, reg r8:V, reg xy2:*, reg xy3:V, reg c2:L, reg xy5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg z:*, reg z1:V, reg range:cls, reg r13:V, reg diff:cls, reg rng:*, reg rng1:V, reg p4:p(V +), reg r15:V, reg z2:*, reg z3:V, reg rng2:*, reg rng3:V, reg c3:L, reg z5:V, reg rng5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg z7:V, reg dx5:V, reg __2:cls, reg r16:V, reg r17:V, reg dz:*, reg dz1:V, reg r18:V, reg r19:V, reg dz2:*, reg dz3:V, reg r20:V, reg r21:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg z8:*, reg z9:V, reg z10:*, reg z11:V, reg r24:V, reg r25:V, reg r26:V, reg l:*, reg c4:L, reg r28:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ____:cls, reg r31:V, reg coef:cls, reg lm:cls, reg __3:cls, reg r32:V, reg p5:p(V +), reg xy6:*, reg xy7:V, reg p6:p(V +), reg r35:V, reg p7:p(V +), reg r37:V, reg coef1:cls, reg nls:cls, reg __4:cls, reg r38:V, reg p8:p(V +), reg xy8:*, reg xy9:V, reg p9:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r41:V, reg r42:V, reg aux:*, reg aux1:V, reg c5:L, reg aux3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __5:cls, reg r43:V, reg aux4:*, reg aux5:V, reg c6:L, reg aux7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __6:cls, reg r44:V, reg list:cls, reg r45:V, reg p10:p(V +), reg ddd1:dots?, reg r47:V, reg p11:p(V +), reg r49:V, reg setNames:cls, reg pars:*, reg pars1:V, reg c7:L, reg pars3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r50:V, reg pars6:V, reg r51:V, reg c8:cls, reg r52:V, reg __7:cls, reg r53:V, reg p12:p(V +), reg mCall5:*, reg mCall6:V, reg c9:L, reg mCall8:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r55:V, reg mCall11:V, reg r56:V, reg c10:cls, reg r57:V, reg __8:cls, reg r58:V, reg p13:p(V +), reg r60:V |
    mkenv;
    st mCall = mCall;
    st data = data;
    st LHS = LHS;
    st `...` = ddd;
    sortedXyData = ldf sortedXyData;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
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
      r = dyn __(mCall4, "input");
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      LHS1 = ld LHS;
      LHS2 = force? LHS1;
      checkMissing(LHS2);
      return LHS2;
    };
    p2 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r4 = dyn sortedXyData(p, p1, p2);
    check L8() else D1();
  D1():
    deopt 5 [r4];
  L8():
    st xy = r4;
    nrow = ldf nrow;
    check L9() else D2();
  D2():
    deopt 8 [];
  L9():
    p3 = prom<V +>{
      xy = ld xy;
      xy1 = force? xy;
      checkMissing(xy1);
      return xy1;
    };
    r6 = dyn nrow(p3);
    check L10() else D3();
  D3():
    deopt 10 [r6];
  L10():
    r7 = `<`(r6, 4.0);
    c1 = `as.logical`(r7);
    if c1 then L11() else L0();
  L0():
    goto L1();
  L1():
    xy2 = ld xy;
    check L15() else D6();
  L11():
    stop = ldf stop;
    check L12() else D4();
  D4():
    deopt 14 [];
  D6():
    deopt 19 [xy2];
  L12():
    r8 = dyn stop("too few distinct input values to fit a logistic model");
    check L13() else D5();
  L15():
    xy3 = force? xy2;
    checkMissing(xy3);
    c2 = `is.object`(xy3);
    if c2 then L16() else L17(xy3);
  D5():
    deopt 16 [r8];
  L2(dx3):
    st z = dx3;
    sym = ldf range;
    base = ldf range in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L13():
    goto L1();
  L16():
    dr2 = tryDispatchBuiltin.1("[[", xy3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L18() else L17(dr2);
  L17(xy5):
    __1 = ldf `[[` in base;
    r10 = dyn __1(xy5, "y");
    goto L2(r10);
  L3(r12):
    st rng = r12;
    diff = ldf diff;
    check L23() else D9();
  L18():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L19():
    z = ld z;
    check L21() else D7();
  L20():
    r11 = dyn base(<sym z>);
    goto L3(r11);
  D7():
    deopt 27 [z];
  D9():
    deopt 33 [];
  L21():
    z1 = force? z;
    checkMissing(z1);
    range = ldf range in base;
    r13 = dyn range(z1);
    check L22() else D8();
  L23():
    p4 = prom<V +>{
      rng = ld rng;
      rng1 = force? rng;
      checkMissing(rng1);
      return rng1;
    };
    r15 = dyn diff(p4);
    check L24() else D10();
  D8():
    deopt 30 [r13];
  D10():
    deopt 35 [r15];
  L22():
    goto L3(r13);
  L24():
    st dz = r15;
    z2 = ld z;
    check L25() else D11();
  D11():
    deopt 37 [z2];
  L25():
    z3 = force? z2;
    checkMissing(z3);
    rng2 = ld rng;
    check L26() else D12();
  D12():
    deopt 38 [z3, rng2];
  L26():
    rng3 = force? rng2;
    checkMissing(rng3);
    c3 = `is.object`(rng3);
    if c3 then L27() else L28(z3, rng3);
  L4(z7, dx5):
    r17 = `-`(z7, dx5);
    dz = ld dz;
    check L30() else D13();
  L27():
    dr4 = tryDispatchBuiltin.1("[", rng3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L29() else L28(z3, dr4);
  L28(z5, rng5):
    __2 = ldf `[` in base;
    r16 = dyn __2(rng5, 1);
    goto L4(z5, r16);
  D13():
    deopt 44 [r17, 0.05, dz];
  L29():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L4(z3, dx4);
  L30():
    dz1 = force? dz;
    checkMissing(dz1);
    r18 = `*`(0.05, dz1);
    r19 = `+`(r17, r18);
    dz2 = ld dz;
    check L31() else D14();
  D14():
    deopt 48 [r19, 1.1, dz2];
  L31():
    dz3 = force? dz2;
    checkMissing(dz3);
    r20 = `*`(1.1, dz3);
    r21 = `/`(r19, r20);
    st z = r21;
    sym1 = ldf log;
    base1 = ldf log in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L5(r23):
    l = ld xy;
    c4 = `is.object`(l);
    if c4 then L36() else L37(r23, l);
  L32():
    z8 = ld z;
    check L34() else D15();
  L33():
    r22 = dyn base1(<lang `/`(z, `(`(`-`(1.0, z)))>);
    goto L5(r22);
  D15():
    deopt 54 [z8];
  L6(dx7):
    st xy = dx7;
    coef = ldf coef;
    check L39() else D17();
  L34():
    z9 = force? z8;
    checkMissing(z9);
    z10 = ld z;
    check L35() else D16();
  L36():
    dr6 = tryDispatchBuiltin.0("[[<-", l, r23);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L38() else L37(r23, dr6);
  L37(r28, l2):
    ____ = ldf `[[<-` in base;
    r31 = dyn ____(l2, r23, "z");
    goto L6(r31);
  D16():
    deopt 56 [z9, 1.0, z10];
  D17():
    deopt 67 [];
  L35():
    z11 = force? z10;
    checkMissing(z11);
    r24 = `-`(1.0, z11);
    r25 = `/`(z9, r24);
    r26 = log(r25, 2.718281828459045);
    goto L5(r26);
  L38():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L6(dx6);
  L39():
    p7 = prom<V +>{
      lm = ldf lm;
      p5 = prom<V +>{
        __3 = ldf `~` in base;
        r32 = dyn __3(<sym x>, <sym z>);
        return r32;
      };
      p6 = prom<V +>{
        xy6 = ld xy;
        xy7 = force? xy6;
        checkMissing(xy7);
        return xy7;
      };
      r35 = dyn lm(p5, p6);
      return r35;
    };
    r37 = dyn coef(p7);
    check L40() else D18();
  D18():
    deopt 69 [r37];
  L40():
    st aux = r37;
    coef1 = ldf coef;
    check L41() else D19();
  D19():
    deopt 72 [];
  L41():
    p11 = prom<V +>{
      nls = ldf nls;
      p8 = prom<V +>{
        __4 = ldf `~` in base;
        r38 = dyn __4(<sym y>, <lang `/`(1.0, `(`(`+`(1.0, exp(`/`(`(`(`-`(xmid, x)), scal)))))>);
        return r38;
      };
      p9 = prom<V +>{
        xy8 = ld xy;
        xy9 = force? xy8;
        checkMissing(xy9);
        return xy9;
      };
      p10 = prom<V +>{
        sym2 = ldf list;
        base2 = ldf list in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L3() else L4();
      L0(r42):
        return r42;
      L3():
        aux = ld aux;
        aux1 = force? aux;
        checkMissing(aux1);
        c5 = `is.object`(aux1);
        if c5 then L5() else L6(aux1);
      L4():
        r41 = dyn base2[xmid, scal](<lang `[[`(aux, 1)>, <lang `[[`(aux, 2)>);
        goto L0(r41);
      L1(dx9):
        aux4 = ld aux;
        aux5 = force? aux4;
        checkMissing(aux5);
        c6 = `is.object`(aux5);
        if c6 then L8() else L9(aux5);
      L5():
        dr8 = tryDispatchBuiltin.1("[[", aux1);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L7() else L6(dr8);
      L6(aux3):
        __5 = ldf `[[` in base;
        r43 = dyn __5(aux3, 1);
        goto L1(r43);
      L2(dx11):
        list = ldf list in base;
        r45 = dyn list(dx9, dx11);
        goto L0(r45);
      L7():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L1(dx8);
      L8():
        dr10 = tryDispatchBuiltin.1("[[", aux5);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L10() else L9(dr10);
      L9(aux7):
        __6 = ldf `[[` in base;
        r44 = dyn __6(aux7, 2);
        goto L2(r44);
      L10():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L2(dx10);
      };
      ddd1 = ld `...`;
      r47 = dyn nls[, data, start, algorithm, `...`](p8, p9, p10, "plinear", ddd1);
      return r47;
    };
    r49 = dyn coef1(p11);
    check L42() else D20();
  D20():
    deopt 74 [r49];
  L42():
    st pars = r49;
    setNames = ldf setNames;
    check L43() else D21();
  D21():
    deopt 77 [];
  L43():
    p12 = prom<V +>{
      pars = ld pars;
      pars1 = force? pars;
      checkMissing(pars1);
      c7 = `is.object`(pars1);
      if c7 then L2() else L3(pars1);
    L0(dx13):
      return dx13;
    L2():
      dr12 = tryDispatchBuiltin.1("[", pars1);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L4() else L3(dr12);
    L3(pars3):
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L5() else L6();
    L1(pars6, r51):
      __7 = ldf `[` in base;
      r53 = dyn __7(pars6, r51);
      goto L0(r53);
    L4():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    L5():
      c8 = ldf c in base;
      r52 = dyn c8(".lin", "xmid", "scal");
      goto L1(pars3, r52);
    L6():
      r50 = dyn base3(".lin", "xmid", "scal");
      goto L1(pars3, r50);
    };
    p13 = prom<V +>{
      mCall5 = ld mCall;
      mCall6 = force? mCall5;
      checkMissing(mCall6);
      c9 = `is.object`(mCall6);
      if c9 then L2() else L3(mCall6);
    L0(dx15):
      return dx15;
    L2():
      dr14 = tryDispatchBuiltin.1("[", mCall6);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L4() else L3(dr14);
    L3(mCall8):
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L5() else L6();
    L1(mCall11, r56):
      __8 = ldf `[` in base;
      r58 = dyn __8(mCall11, r56);
      goto L0(r58);
    L4():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    L5():
      c10 = ldf c in base;
      r57 = dyn c10("Asym", "xmid", "scal");
      goto L1(mCall8, r57);
    L6():
      r55 = dyn base4("Asym", "xmid", "scal");
      goto L1(mCall8, r55);
    };
    r60 = dyn setNames(p12, p13);
    check L44() else D22();
  D22():
    deopt 80 [r60];
  L44():
    popenv;
    return r60;
  }
}
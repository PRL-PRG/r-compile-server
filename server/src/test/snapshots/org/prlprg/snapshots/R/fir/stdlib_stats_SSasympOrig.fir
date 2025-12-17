fun main() {
  () -+> V { reg structure:cls, reg r:cls, reg p:p(V +), reg r2:cls, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg c:cls, reg r6:V, reg p2:p(V +), reg r8:V |
    mkenv;
    structure = ldf structure;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      r = clos inner1650483685;
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
      r6 = dyn c("Asym", "lrc");
      goto L0(r6);
    L2():
      r4 = dyn base("Asym", "lrc");
      goto L0(r4);
    };
    r8 = dyn structure[, initial, pnames, class](p, p1, p2, "selfStart");
    check L1() else D1();
  D1():
    deopt 9 [r8];
  L1():
    st SSasympOrig = r8;
    invisible.0();
    popenv;
    return r8;
  }
}
fun inner1650483685(input, Asym, lrc) {
  (reg input:*, reg Asym:*, reg lrc:*) -+> V { var input:*, var Asym:*, var lrc:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg lrc1:*, reg lrc2:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg _expr1:*, reg _expr2:V, reg r5:V, reg input1:*, reg input2:V, reg r6:V, reg r7:V, reg _expr4:*, reg _expr5:V, reg r8:V, reg Asym1:*, reg Asym2:V, reg _expr6:*, reg _expr7:V, reg r9:V, reg as_list:cls, reg match_call:cls, reg r10:V, reg c:L, reg r12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg r17:V, reg c1:cls, reg r18:V, reg __:cls, reg r19:V, reg p:p(V +), reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg vapply:cls, reg _actualArgs:*, reg _actualArgs1:V, reg p1:p(V +), reg is_name:*, reg is_name1:V, reg p2:p(V +), reg r26:V, reg all:cls, reg r27:V, reg c2:L, reg array:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg _value:*, reg _value1:V, reg length:cls, reg r32:V, reg c3:cls, reg r33:V, reg p3:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg c4:cls, reg r39:V, reg list:cls, reg r40:V, reg p4:p(V +), reg r42:V, reg _expr8:*, reg _expr9:V, reg l:*, reg c5:L, reg _expr11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ___:cls, reg r43:V, reg Asym3:*, reg Asym4:V, reg _expr14:*, reg _expr15:V, reg _expr16:*, reg _expr17:V, reg input3:*, reg input4:V, reg r44:V, reg r45:V, reg r46:V, reg l3:*, reg c6:L, reg r48:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ___1:cls, reg r51:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r52:V, reg r53:V, reg _actualArgs2:*, reg _actualArgs3:V, reg list1:cls, reg r54:V, reg l6:*, reg dimnames__:cls, reg r55:V, reg _grad:*, reg _grad1:V, reg l7:*, reg attr__:cls, reg r56:V, reg _value2:*, reg _value3:V |
    mkenv;
    st input = input;
    st Asym = Asym;
    st lrc = lrc;
    sym = ldf exp;
    base = ldf exp in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    st `.expr1` = r1;
    sym1 = ldf exp;
    base1 = ldf exp in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L8():
    lrc1 = ld lrc;
    check L10() else D0();
  L9():
    r = dyn base(<sym lrc>);
    goto L0(r);
  D0():
    deopt 1 [lrc1];
  L1(r4):
    st `.expr4` = r4;
    _expr4 = ld `.expr4`;
    check L15() else D3();
  L10():
    lrc2 = force? lrc1;
    checkMissing(lrc2);
    r2 = exp(lrc2);
    goto L0(r2);
  L11():
    _expr1 = ld `.expr1`;
    check L13() else D1();
  L12():
    r3 = dyn base1(<lang `(`(`*`(`(`(`-`(.expr1)), input))>);
    goto L1(r3);
  D1():
    deopt 6 [_expr1];
  D3():
    deopt 14 [1.0, _expr4];
  L13():
    _expr2 = force? _expr1;
    checkMissing(_expr2);
    r5 = `-`(<missing>, _expr2);
    input1 = ld input;
    check L14() else D2();
  L15():
    _expr5 = force? _expr4;
    checkMissing(_expr5);
    r8 = `-`(1.0, _expr5);
    st `.expr5` = r8;
    Asym1 = ld Asym;
    check L16() else D4();
  D2():
    deopt 8 [r5, input1];
  D4():
    deopt 18 [Asym1];
  L14():
    input2 = force? input1;
    checkMissing(input2);
    r6 = `*`(r5, input2);
    r7 = exp(r6);
    goto L1(r7);
  L16():
    Asym2 = force? Asym1;
    checkMissing(Asym2);
    _expr6 = ld `.expr5`;
    check L17() else D5();
  D5():
    deopt 19 [Asym2, _expr6];
  L17():
    _expr7 = force? _expr6;
    checkMissing(_expr7);
    r9 = `*`(Asym2, _expr7);
    st `.value` = r9;
    as_list = ldf `as.list`;
    check L18() else D6();
  D6():
    deopt 24 [];
  L18():
    p = prom<V +>{
      match_call = ldf `match.call`;
      r10 = dyn match_call();
      c = `is.object`(r10);
      if c then L2() else L3(r10);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", r10);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(r12):
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L5() else L6();
    L1(r16, r17):
      __ = ldf `[` in base;
      r19 = dyn __(r16, r17);
      goto L0(r19);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      c1 = ldf c in base;
      r18 = dyn c1("Asym", "lrc");
      goto L1(r12, r18);
    L6():
      r15 = dyn base2("Asym", "lrc");
      goto L1(r12, r15);
    };
    r21 = dyn as_list(p);
    check L19() else D7();
  D7():
    deopt 26 [r21];
  L19():
    st `.actualArgs` = r21;
    sym3 = ldf all;
    base3 = ldf all in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L2(r23):
    c2 = `as.logical`(r23);
    if c2 then L25() else L3();
  L20():
    vapply = ldf vapply;
    check L22() else D8();
  L21():
    r22 = dyn base3(<lang vapply(.actualArgs, is.name, NA_LGL)>);
    goto L2(r22);
  D8():
    deopt 31 [];
  L3():
    goto L7();
  L7():
    _value2 = ld `.value`;
    check L49() else D25();
  L22():
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
    r26 = dyn vapply(p1, p2, NA_LGL);
    check L23() else D9();
  L25():
    array = ldf array;
    check L26() else D11();
  D9():
    deopt 35 [r26];
  D11():
    deopt 39 [];
  D25():
    deopt 89 [_value2];
  L23():
    all = ldf all in base;
    r27 = dyn all(r26);
    check L24() else D10();
  L26():
    p3 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r29):
      return r29;
    L2():
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L4() else L5();
    L3():
      r28 = dyn base4(<lang length(.value)>, 2);
      goto L0(r28);
    L1(r31):
      c3 = ldf c in base;
      r33 = dyn c3(r31, 2);
      goto L0(r33);
    L4():
      _value = ld `.value`;
      _value1 = force? _value;
      checkMissing(_value1);
      length = ldf length in base;
      r32 = dyn length(_value1);
      goto L1(r32);
    L5():
      r30 = dyn base5(<sym .value>);
      goto L1(r30);
    };
    p4 = prom<V +>{
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L2() else L3();
    L0(r36):
      return r36;
    L2():
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L4() else L5();
    L3():
      r35 = dyn base6(NULL, <lang c("Asym", "lrc")>);
      goto L0(r35);
    L1(r38):
      list = ldf list in base;
      r40 = dyn list(NULL, r38);
      goto L0(r40);
    L4():
      c4 = ldf c in base;
      r39 = dyn c4("Asym", "lrc");
      goto L1(r39);
    L5():
      r37 = dyn base7("Asym", "lrc");
      goto L1(r37);
    };
    r42 = dyn array(0.0, p3, p4);
    check L27() else D12();
  L49():
    _value3 = force? _value2;
    checkMissing(_value3);
    popenv;
    return _value3;
  D10():
    deopt 37 [r27];
  D12():
    deopt 43 [r42];
  L24():
    goto L2(r27);
  L27():
    st `.grad` = r42;
    _expr8 = ld `.expr5`;
    check L28() else D13();
  D13():
    deopt 45 [_expr8];
  L28():
    _expr9 = force? _expr8;
    checkMissing(_expr9);
    l = ld `.grad`;
    c5 = `is.object`(l);
    if c5 then L29() else L30(_expr9);
  L4(dx3):
    st `.grad` = dx3;
    Asym3 = ld Asym;
    check L32() else D14();
  L29():
    dr2 = tryDispatchBuiltin.0("[<-", l, _expr9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L31() else L30(_expr9);
  L30(_expr11):
    ___ = ldf `[<-` in base;
    r43 = dyn ___(l, <missing>, "Asym", _expr9);
    goto L4(r43);
  D14():
    deopt 53 [Asym3];
  L31():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L32():
    Asym4 = force? Asym3;
    checkMissing(Asym4);
    _expr14 = ld `.expr4`;
    check L33() else D15();
  D15():
    deopt 54 [Asym4, _expr14];
  L33():
    _expr15 = force? _expr14;
    checkMissing(_expr15);
    _expr16 = ld `.expr1`;
    check L34() else D16();
  D16():
    deopt 55 [Asym4, _expr15, _expr16];
  L34():
    _expr17 = force? _expr16;
    checkMissing(_expr17);
    input3 = ld input;
    check L35() else D17();
  D17():
    deopt 56 [Asym4, _expr15, _expr17, input3];
  L35():
    input4 = force? input3;
    checkMissing(input4);
    r44 = `*`(_expr17, input4);
    r45 = `*`(_expr15, r44);
    r46 = `*`(Asym4, r45);
    l3 = ld `.grad`;
    c6 = `is.object`(l3);
    if c6 then L36() else L37(r46);
  L5(dx5):
    st `.grad` = dx5;
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L39() else L40();
  L36():
    dr4 = tryDispatchBuiltin.0("[<-", l3, r46);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L38() else L37(r46);
  L37(r48):
    ___1 = ldf `[<-` in base;
    r51 = dyn ___1(l3, <missing>, "lrc", r46);
    goto L5(r51);
  L6(r53):
    l6 = ld `.grad`;
    dimnames__ = ldf `dimnames<-`;
    check L43() else D20();
  L38():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(dx4);
  L39():
    _actualArgs2 = ld `.actualArgs`;
    check L41() else D18();
  L40():
    r52 = dyn base8(NULL, <sym .actualArgs>);
    goto L6(r52);
  D18():
    deopt 70 [_actualArgs2];
  D20():
    deopt 75 [r53, l6, r53];
  L41():
    _actualArgs3 = force? _actualArgs2;
    checkMissing(_actualArgs3);
    list1 = ldf list in base;
    r54 = dyn list1(NULL, _actualArgs3);
    check L42() else D19();
  L43():
    r55 = dyn dimnames__(l6, NULL, r53);
    check L44() else D21();
  D19():
    deopt 73 [r54];
  D21():
    deopt 77 [r53, r55];
  L42():
    goto L6(r54);
  L44():
    st `.grad` = r55;
    _grad = ld `.grad`;
    check L45() else D22();
  D22():
    deopt 79 [_grad];
  L45():
    _grad1 = force? _grad;
    checkMissing(_grad1);
    l7 = ld `.value`;
    attr__ = ldf `attr<-`;
    check L46() else D23();
  D23():
    deopt 82 [_grad1, l7, _grad1];
  L46():
    r56 = dyn attr__(l7, NULL, "gradient", _grad1);
    check L47() else D24();
  D24():
    deopt 85 [_grad1, r56];
  L47():
    st `.value` = r56;
    goto L7();
  }
}
fun inner4146431868(mCall, data, LHS, `...`) {
  (reg mCall:*, reg data:*, reg LHS:*, reg ddd:dots) -+> V { var mCall:*, var data:*, var LHS:*, var `...`:dots?, reg sortedXyData:cls, reg mCall1:*, reg mCall2:V, reg c:L, reg mCall4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg p:p(V +), reg LHS1:*, reg LHS2:V, reg p1:p(V +), reg data1:*, reg data2:V, reg p2:p(V +), reg r4:V, reg nrow:cls, reg xy:*, reg xy1:V, reg p3:p(V +), reg r6:V, reg r7:V, reg c1:L, reg stop:cls, reg r8:V, reg NLSstRtAsymptote:cls, reg xy2:*, reg xy3:V, reg p4:p(V +), reg r11:V, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg mean:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg xy4:*, reg xy5:V, reg c2:L, reg r19:R, reg xy7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r21:R, reg dx3:V, reg r22:V, reg A0:*, reg A1:V, reg r23:V, reg r24:V, reg r25:V, reg xy8:*, reg xy9:V, reg c3:L, reg r27:V, reg xy11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r29:V, reg dx5:V, reg r30:V, reg r31:V, reg p5:p(V +), reg r33:V, reg abs:cls, reg r34:V, reg r35:V, reg data_frame:cls, reg xy12:*, reg xy13:V, reg p6:p(V +), reg r37:V, reg coef:cls, reg nls:cls, reg __1:cls, reg r38:V, reg p7:p(V +), reg xy14:*, reg xy15:V, reg p8:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r41:V, reg r42:V, reg lrc:*, reg lrc1:V, reg list:cls, reg r43:V, reg p9:p(V +), reg ddd1:dots?, reg r45:V, reg p10:p(V +), reg r47:V, reg setNames:cls, reg pars:*, reg pars1:V, reg c4:L, reg pars3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r48:V, reg pars6:V, reg r49:V, reg c5:cls, reg r50:V, reg __2:cls, reg r51:V, reg p11:p(V +), reg mCall5:*, reg mCall6:V, reg c6:L, reg mCall8:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r53:V, reg mCall11:V, reg r54:V, reg c7:cls, reg r55:V, reg __3:cls, reg r56:V, reg p12:p(V +), reg r58:V |
    mkenv;
    st mCall = mCall;
    st data = data;
    st LHS = LHS;
    st `...` = ddd;
    sortedXyData = ldf sortedXyData;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
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
    check L5() else D1();
  D1():
    deopt 5 [r4];
  L5():
    st xy = r4;
    nrow = ldf nrow;
    check L6() else D2();
  D2():
    deopt 8 [];
  L6():
    p3 = prom<V +>{
      xy = ld xy;
      xy1 = force? xy;
      checkMissing(xy1);
      return xy1;
    };
    r6 = dyn nrow(p3);
    check L7() else D3();
  D3():
    deopt 10 [r6];
  L7():
    r7 = `<`(r6, 3.0);
    c1 = `as.logical`(r7);
    if c1 then L8() else L0();
  L0():
    goto L1();
  L1():
    NLSstRtAsymptote = ldf NLSstRtAsymptote;
    check L12() else D6();
  L8():
    stop = ldf stop;
    check L9() else D4();
  D4():
    deopt 14 [];
  D6():
    deopt 20 [];
  L9():
    r8 = dyn stop("too few distinct input values to fit the 'asympOrig' model");
    check L10() else D5();
  L12():
    p4 = prom<V +>{
      xy2 = ld xy;
      xy3 = force? xy2;
      checkMissing(xy3);
      return xy3;
    };
    r11 = dyn NLSstRtAsymptote(p4);
    check L13() else D7();
  D5():
    deopt 16 [r8];
  D7():
    deopt 22 [r11];
  L10():
    goto L1();
  L13():
    st A0 = r11;
    sym = ldf log;
    base = ldf log in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L2(r13):
    st lrc = r13;
    data_frame = ldf `data.frame`;
    check L21() else D11();
  L14():
    sym1 = ldf abs;
    base1 = ldf abs in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L15():
    r12 = dyn base(<lang abs(mean(`/`(log(`-`(1.0, `/`(`$`(xy, y), A0))), `$`(xy, x)), na.rm=TRUE))>);
    goto L2(r12);
  D11():
    deopt 38 [];
  L3(r15):
    r35 = log(r15, 2.718281828459045);
    goto L2(r35);
  L16():
    mean = ldf mean;
    check L18() else D8();
  L17():
    r14 = dyn base1(<lang mean(`/`(log(`-`(1.0, `/`(`$`(xy, y), A0))), `$`(xy, x)), na.rm=TRUE)>);
    goto L3(r14);
  L21():
    p6 = prom<V +>{
      xy12 = ld xy;
      xy13 = force? xy12;
      checkMissing(xy13);
      return xy13;
    };
    r37 = dyn data_frame(p6);
    check L22() else D12();
  D8():
    deopt 28 [];
  D12():
    deopt 40 [r37];
  L18():
    p5 = prom<V +>{
      sym2 = ldf log;
      base2 = ldf log in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r17):
      xy8 = ld xy;
      xy9 = force? xy8;
      checkMissing(xy9);
      c3 = `is.object`(xy9);
      if c3 then L8() else L9(r17, xy9);
    L1():
      xy4 = ld xy;
      xy5 = force? xy4;
      checkMissing(xy5);
      c2 = `is.object`(xy5);
      if c2 then L4() else L5(1.0, xy5);
    L2():
      r16 = dyn base2(<lang `-`(1.0, `/`(`$`(xy, y), A0))>);
      goto L0(r16);
    L3(r21, dx3):
      A0 = ld A0;
      A1 = force? A0;
      checkMissing(A1);
      r23 = `/`(dx3, A1);
      r24 = `-`(r21, r23);
      r25 = log(r24, 2.718281828459045);
      goto L0(r25);
    L4():
      dr2 = tryDispatchBuiltin.1("$", xy5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(1.0, dr2);
    L5(r19, xy7):
      r22 = `$`(xy7, <sym y>);
      goto L3(r19, r22);
    L7(r29, dx5):
      r31 = `/`(r29, dx5);
      return r31;
    L8():
      dr4 = tryDispatchBuiltin.1("$", xy9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L10() else L9(r17, dr4);
    L9(r27, xy11):
      r30 = `$`(xy11, <sym x>);
      goto L7(r27, r30);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L3(1.0, dx2);
    L10():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L7(r17, dx4);
    };
    r33 = dyn mean[, `na.rm`](p5, TRUE);
    check L19() else D9();
  L22():
    st xy = r37;
    coef = ldf coef;
    check L23() else D13();
  D9():
    deopt 32 [r33];
  D13():
    deopt 43 [];
  L19():
    abs = ldf abs in base;
    r34 = dyn abs(r33);
    check L20() else D10();
  L23():
    p10 = prom<V +>{
      nls = ldf nls;
      p7 = prom<V +>{
        __1 = ldf `~` in base;
        r38 = dyn __1(<sym y>, <lang `-`(1.0, exp(`*`(`-`(exp(lrc)), x)))>);
        return r38;
      };
      p8 = prom<V +>{
        xy14 = ld xy;
        xy15 = force? xy14;
        checkMissing(xy15);
        return xy15;
      };
      p9 = prom<V +>{
        sym3 = ldf list;
        base3 = ldf list in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r42):
        return r42;
      L1():
        lrc = ld lrc;
        lrc1 = force? lrc;
        checkMissing(lrc1);
        list = ldf list in base;
        r43 = dyn list(lrc1);
        goto L0(r43);
      L2():
        r41 = dyn base3[lrc](<sym lrc>);
        goto L0(r41);
      };
      ddd1 = ld `...`;
      r45 = dyn nls[, data, start, algorithm, `...`](p7, p8, p9, "plinear", ddd1);
      return r45;
    };
    r47 = dyn coef(p10);
    check L24() else D14();
  D10():
    deopt 34 [r34];
  D14():
    deopt 45 [r47];
  L20():
    goto L3(r34);
  L24():
    st pars = r47;
    setNames = ldf setNames;
    check L25() else D15();
  D15():
    deopt 48 [];
  L25():
    p11 = prom<V +>{
      pars = ld pars;
      pars1 = force? pars;
      checkMissing(pars1);
      c4 = `is.object`(pars1);
      if c4 then L2() else L3(pars1);
    L0(dx7):
      return dx7;
    L2():
      dr6 = tryDispatchBuiltin.1("[", pars1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3(dr6);
    L3(pars3):
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L5() else L6();
    L1(pars6, r49):
      __2 = ldf `[` in base;
      r51 = dyn __2(pars6, r49);
      goto L0(r51);
    L4():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    L5():
      c5 = ldf c in base;
      r50 = dyn c5(".lin", "lrc");
      goto L1(pars3, r50);
    L6():
      r48 = dyn base4(".lin", "lrc");
      goto L1(pars3, r48);
    };
    p12 = prom<V +>{
      mCall5 = ld mCall;
      mCall6 = force? mCall5;
      checkMissing(mCall6);
      c6 = `is.object`(mCall6);
      if c6 then L2() else L3(mCall6);
    L0(dx9):
      return dx9;
    L2():
      dr8 = tryDispatchBuiltin.1("[", mCall6);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L4() else L3(dr8);
    L3(mCall8):
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L5() else L6();
    L1(mCall11, r54):
      __3 = ldf `[` in base;
      r56 = dyn __3(mCall11, r54);
      goto L0(r56);
    L4():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    L5():
      c7 = ldf c in base;
      r55 = dyn c7("Asym", "lrc");
      goto L1(mCall8, r55);
    L6():
      r53 = dyn base5("Asym", "lrc");
      goto L1(mCall8, r53);
    };
    r58 = dyn setNames(p11, p12);
    check L26() else D16();
  D16():
    deopt 51 [r58];
  L26():
    popenv;
    return r58;
  }
}
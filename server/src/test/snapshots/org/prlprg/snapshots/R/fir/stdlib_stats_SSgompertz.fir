fun main() {
  () -+> V { reg structure:cls, reg r:cls, reg p:p(V +), reg r2:cls, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg c:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg subset:cls, reg DNase:*, reg DNase1:V, reg p3:p(V +), reg Run:*, reg Run1:V, reg r10:V, reg p4:p(V +), reg r12:V, reg SSgompertz:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg DNase_1:*, reg DNase_2:V, reg c1:L, reg DNase_4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r15:V, reg r16:V, reg p5:p(V +), reg r18:V, reg r19:cls, reg r20:cls, reg r21:V, reg print:cls, reg getInitial:cls, reg __:cls, reg r22:V, reg p6:p(V +), reg DNase_5:*, reg DNase_6:V, reg p7:p(V +), reg r25:V, reg p8:p(V +), reg r27:V, reg nls:cls, reg __1:cls, reg r28:V, reg p9:p(V +), reg DNase_7:*, reg DNase_8:V, reg p10:p(V +), reg r31:V, reg summary:cls, reg fm1:*, reg fm2:V, reg p11:p(V +), reg r33:V, reg plot:cls, reg __2:cls, reg r34:V, reg p12:p(V +), reg DNase_9:*, reg DNase_10:V, reg p13:p(V +), reg r37:V, reg par:cls, reg r38:V, reg c2:L, reg r40:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __3:cls, reg r41:V, reg seq:cls, reg ux:*, reg ux1:V, reg c3:L, reg ux3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __4:cls, reg r42:V, reg p14:p(V +), reg ux4:*, reg ux5:V, reg c4:L, reg ux7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __5:cls, reg r44:V, reg p15:p(V +), reg r46:V, reg lines:cls, reg x:*, reg x1:V, reg p16:p(V +), reg do_call:cls, reg SSgompertz1:*, reg SSgompertz2:V, reg p17:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r49:V, reg r50:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r51:V, reg r52:V, reg x2:*, reg x3:V, reg list:cls, reg r53:V, reg coef:cls, reg fm3:*, reg fm4:V, reg p18:p(V +), reg r55:V, reg c5:cls, reg r56:V, reg p19:p(V +), reg r58:V, reg p20:p(V +), reg r60:V, reg coef1:cls, reg fm5:*, reg fm6:V, reg p21:p(V +), reg r62:V, reg c6:L, reg r64:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __6:cls, reg r65:V, reg abline:cls, reg r66:V, reg axis:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r67:V, reg r68:V, reg coef2:cls, reg fm7:*, reg fm8:V, reg p22:p(V +), reg r70:V, reg c7:L, reg r72:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __7:cls, reg r73:V, reg r74:V, reg r75:V, reg p23:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r77:V, reg r78:V, reg quote:cls, reg r79:V, reg p24:p(V +), reg r81:V |
    mkenv;
    structure = ldf structure;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      r = clos inner1957792407;
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
      r6 = dyn c("Asym", "b2", "b3");
      goto L0(r6);
    L2():
      r4 = dyn base("Asym", "b2", "b3");
      goto L0(r4);
    };
    r8 = dyn structure[, initial, pnames, class](p, p1, p2, "selfStart");
    check L3() else D1();
  D1():
    deopt 9 [r8];
  L3():
    st SSgompertz = r8;
    subset = ldf subset;
    check L4() else D2();
  D2():
    deopt 12 [];
  L4():
    p3 = prom<V +>{
      DNase = ld DNase;
      DNase1 = force? DNase;
      checkMissing(DNase1);
      return DNase1;
    };
    p4 = prom<V +>{
      Run = ld Run;
      Run1 = force? Run;
      checkMissing(Run1);
      r10 = `==`(Run1, 1.0);
      return r10;
    };
    r12 = dyn subset(p3, p4);
    check L5() else D3();
  D3():
    deopt 15 [r12];
  L5():
    st `DNase.1` = r12;
    SSgompertz = ldf SSgompertz;
    check L6() else D4();
  D4():
    deopt 18 [];
  L6():
    p5 = prom<V +>{
      sym1 = ldf log;
      base1 = ldf log in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      DNase_1 = ld `DNase.1`;
      DNase_2 = force? DNase_1;
      checkMissing(DNase_2);
      c1 = `is.object`(DNase_2);
      if c1 then L4() else L5(DNase_2);
    L2():
      r13 = dyn base1(<lang `$`(DNase.1, conc)>);
      goto L0(r13);
    L3(dx1):
      r16 = log(dx1, 2.718281828459045);
      goto L0(r16);
    L4():
      dr = tryDispatchBuiltin.1("$", DNase_2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(DNase_4):
      r15 = `$`(DNase_4, <sym conc>);
      goto L3(r15);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L3(dx);
    };
    r18 = dyn SSgompertz(p5, 4.5, 2.3, 0.7);
    check L7() else D5();
  D5():
    deopt 23 [r18];
  L7():
    r19 = clos inner2708337952;
    checkFun.0(r19);
    r20 = r19 as cls;
    r21 = dyn r20();
    check L8() else D6();
  D6():
    deopt 27 [r21];
  L8():
    print = ldf print;
    check L9() else D7();
  D7():
    deopt 29 [];
  L9():
    p8 = prom<V +>{
      getInitial = ldf getInitial;
      p6 = prom<V +>{
        __ = ldf `~` in base;
        r22 = dyn __(<sym density>, <lang SSgompertz(log(conc), Asym, b2, b3)>);
        return r22;
      };
      p7 = prom<V +>{
        DNase_5 = ld `DNase.1`;
        DNase_6 = force? DNase_5;
        checkMissing(DNase_6);
        return DNase_6;
      };
      r25 = dyn getInitial[, data](p6, p7);
      return r25;
    };
    r27 = dyn print[, digits](p8, 5.0);
    check L10() else D8();
  D8():
    deopt 33 [r27];
  L10():
    nls = ldf nls;
    check L11() else D9();
  D9():
    deopt 35 [];
  L11():
    p9 = prom<V +>{
      __1 = ldf `~` in base;
      r28 = dyn __1(<sym density>, <lang SSgompertz(log(conc), Asym, b2, b3)>);
      return r28;
    };
    p10 = prom<V +>{
      DNase_7 = ld `DNase.1`;
      DNase_8 = force? DNase_7;
      checkMissing(DNase_8);
      return DNase_8;
    };
    r31 = dyn nls[, data](p9, p10);
    check L12() else D10();
  D10():
    deopt 39 [r31];
  L12():
    st fm1 = r31;
    summary = ldf summary;
    check L13() else D11();
  D11():
    deopt 42 [];
  L13():
    p11 = prom<V +>{
      fm1 = ld fm1;
      fm2 = force? fm1;
      checkMissing(fm2);
      return fm2;
    };
    r33 = dyn summary(p11);
    check L14() else D12();
  D12():
    deopt 44 [r33];
  L14():
    plot = ldf plot;
    check L15() else D13();
  D13():
    deopt 46 [];
  L15():
    p12 = prom<V +>{
      __2 = ldf `~` in base;
      r34 = dyn __2(<sym density>, <lang log(conc)>);
      return r34;
    };
    p13 = prom<V +>{
      DNase_9 = ld `DNase.1`;
      DNase_10 = force? DNase_9;
      checkMissing(DNase_10);
      return DNase_10;
    };
    r37 = dyn plot[, , main](p12, p13, "SSgompertz() fit to DNase.1");
    check L16() else D14();
  D14():
    deopt 51 [r37];
  L16():
    par = ldf par;
    check L17() else D15();
  D15():
    deopt 53 [];
  L17():
    r38 = dyn par("usr");
    check L18() else D16();
  D16():
    deopt 55 [r38];
  L18():
    c2 = `is.object`(r38);
    if c2 then L19() else L20(r38);
  L0(dx3):
    st ux = dx3;
    seq = ldf seq;
    check L22() else D17();
  L19():
    dr2 = tryDispatchBuiltin.1("[", r38);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L21() else L20(dr2);
  L20(r40):
    __3 = ldf `[` in base;
    r41 = dyn __3(r40, <int 1, 2>);
    goto L0(r41);
  D17():
    deopt 61 [];
  L21():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L0(dx2);
  L22():
    p14 = prom<V +>{
      ux = ld ux;
      ux1 = force? ux;
      checkMissing(ux1);
      c3 = `is.object`(ux1);
      if c3 then L1() else L2(ux1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", ux1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(ux3):
      __4 = ldf `[` in base;
      r42 = dyn __4(ux3, 1.0);
      goto L0(r42);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p15 = prom<V +>{
      ux4 = ld ux;
      ux5 = force? ux4;
      checkMissing(ux5);
      c4 = `is.object`(ux5);
      if c4 then L1() else L2(ux5);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", ux5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(ux7):
      __5 = ldf `[` in base;
      r44 = dyn __5(ux7, 2.0);
      goto L0(r44);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r46 = dyn seq[, , `length.out`](p14, p15, 250.0);
    check L23() else D18();
  D18():
    deopt 66 [r46];
  L23():
    st x = r46;
    lines = ldf lines;
    check L24() else D19();
  D19():
    deopt 69 [];
  L24():
    p16 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p20 = prom<V +>{
      do_call = ldf `do.call`;
      p17 = prom<V +>{
        SSgompertz1 = ld SSgompertz;
        SSgompertz2 = force? SSgompertz1;
        checkMissing(SSgompertz2);
        return SSgompertz2;
      };
      p19 = prom<V +>{
        sym2 = ldf c;
        base2 = ldf c in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L2() else L3();
      L0(r50):
        return r50;
      L2():
        sym3 = ldf list;
        base3 = ldf list in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L4() else L5();
      L3():
        r49 = dyn base2(<lang list(x=x)>, <lang coef(fm1)>);
        goto L0(r49);
      L1(r52):
        coef = ldf coef;
        p18 = prom<V +>{
          fm3 = ld fm1;
          fm4 = force? fm3;
          checkMissing(fm4);
          return fm4;
        };
        r55 = dyn coef(p18);
        c5 = ldf c in base;
        r56 = dyn c5(r52, r55);
        goto L0(r56);
      L4():
        x2 = ld x;
        x3 = force? x2;
        checkMissing(x3);
        list = ldf list in base;
        r53 = dyn list(x3);
        goto L1(r53);
      L5():
        r51 = dyn base3[x](<sym x>);
        goto L1(r51);
      };
      r58 = dyn do_call(p17, p19);
      return r58;
    };
    r60 = dyn lines[, , col, lwd](p16, p20, "red", 2.0);
    check L25() else D20();
  D20():
    deopt 76 [r60];
  L25():
    coef1 = ldf coef;
    check L26() else D21();
  D21():
    deopt 78 [];
  L26():
    p21 = prom<V +>{
      fm5 = ld fm1;
      fm6 = force? fm5;
      checkMissing(fm6);
      return fm6;
    };
    r62 = dyn coef1(p21);
    check L27() else D22();
  D22():
    deopt 80 [r62];
  L27():
    c6 = `is.object`(r62);
    if c6 then L28() else L29(r62);
  L1(dx9):
    st As = dx9;
    abline = ldf abline;
    check L31() else D23();
  L28():
    dr8 = tryDispatchBuiltin.1("[[", r62);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L30() else L29(dr8);
  L29(r64):
    __6 = ldf `[[` in base;
    r65 = dyn __6(r64, "Asym");
    goto L1(r65);
  D23():
    deopt 86 [];
  L30():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L1(dx8);
  L31():
    r66 = dyn abline[v, h, lty](0.0, 0.0, 3.0);
    check L32() else D24();
  D24():
    deopt 93 [r66];
  L32():
    axis = ldf axis;
    check L33() else D25();
  D25():
    deopt 95 [];
  L33():
    p23 = prom<V +>{
      sym4 = ldf exp;
      base4 = ldf exp in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r68):
      return r68;
    L2():
      coef2 = ldf coef;
      p22 = prom<V +>{
        fm7 = ld fm1;
        fm8 = force? fm7;
        checkMissing(fm8);
        return fm8;
      };
      r70 = dyn coef2(p22);
      c7 = `is.object`(r70);
      if c7 then L4() else L5(r70);
    L3():
      r67 = dyn base4(<lang `-`(`[[`(coef(fm1), "b2"))>);
      goto L0(r67);
    L1(dx11):
      r74 = `-`(<missing>, dx11);
      r75 = exp(r74);
      goto L0(r75);
    L4():
      dr10 = tryDispatchBuiltin.1("[[", r70);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L6() else L5(dr10);
    L5(r72):
      __7 = ldf `[[` in base;
      r73 = dyn __7(r72, "b2");
      goto L1(r73);
    L6():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx10);
    };
    p24 = prom<V +>{
      sym5 = ldf quote;
      base5 = ldf quote in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r78):
      return r78;
    L1():
      quote = ldf quote in base;
      r79 = dyn quote(<lang `^`(e, {
          `-`(`[`(b, 2.0))
        })>);
      goto L0(r79);
    L2():
      r77 = dyn base5(<lang `^`(e, {
          `-`(`[`(b, 2.0))
        })>);
      goto L0(r77);
    };
    r81 = dyn axis[, at, , las, pos](2.0, p23, p24, 1.0, 0.0);
    check L34() else D26();
  D26():
    deopt 104 [r81];
  L34():
    popenv;
    return r81;
  }
}
fun inner1957792407(x, Asym, b2, b3) {
  (reg x:*, reg Asym:*, reg b2:*, reg b3:*) -+> V { var x:*, var Asym:*, var b2:*, var b3:*, reg b4:*, reg b5:V, reg x1:*, reg x2:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg b6:*, reg b7:V, reg r3:V, reg _expr2:*, reg _expr3:V, reg r4:V, reg r5:V, reg Asym1:*, reg Asym2:V, reg _expr4:*, reg _expr5:V, reg r6:V, reg as_list:cls, reg match_call:cls, reg r7:V, reg c:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg r14:V, reg c1:cls, reg r15:V, reg __:cls, reg r16:V, reg p:p(V +), reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg vapply:cls, reg _actualArgs:*, reg _actualArgs1:V, reg p1:p(V +), reg is_name:*, reg is_name1:V, reg p2:p(V +), reg r23:V, reg all:cls, reg r24:V, reg c2:L, reg array:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg _value:*, reg _value1:V, reg length:cls, reg r29:V, reg c3:cls, reg r30:V, reg p3:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg c4:cls, reg r36:V, reg list:cls, reg r37:V, reg p4:p(V +), reg r39:V, reg _expr6:*, reg _expr7:V, reg l:*, reg c5:L, reg _expr9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ___:cls, reg r40:V, reg Asym3:*, reg Asym4:V, reg r41:V, reg _expr12:*, reg _expr13:V, reg _expr14:*, reg _expr15:V, reg r42:V, reg r43:V, reg l3:*, reg c6:L, reg r45:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ___1:cls, reg r48:V, reg Asym5:*, reg Asym6:V, reg r49:V, reg _expr16:*, reg _expr17:V, reg b8:*, reg b9:V, reg b10:*, reg b11:V, reg x3:*, reg x4:V, reg r50:V, reg r51:V, reg x5:*, reg x6:V, reg r52:V, reg r53:V, reg r54:V, reg r55:V, reg l6:*, reg c7:L, reg r57:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ___2:cls, reg r60:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r61:V, reg r62:V, reg _actualArgs2:*, reg _actualArgs3:V, reg list1:cls, reg r63:V, reg l9:*, reg dimnames__:cls, reg r64:V, reg _grad:*, reg _grad1:V, reg l10:*, reg attr__:cls, reg r65:V, reg _value2:*, reg _value3:V |
    mkenv;
    st x = x;
    st Asym = Asym;
    st b2 = b2;
    st b3 = b3;
    b4 = ld b3;
    check L8() else D0();
  D0():
    deopt 0 [b4];
  L8():
    b5 = force? b4;
    checkMissing(b5);
    x1 = ld x;
    check L9() else D1();
  D1():
    deopt 1 [b5, x1];
  L9():
    x2 = force? x1;
    checkMissing(x2);
    r = `^`(b5, x2);
    st `.expr2` = r;
    sym = ldf exp;
    base = ldf exp in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r2):
    st `.expr4` = r2;
    Asym1 = ld Asym;
    check L14() else D4();
  L10():
    b6 = ld b2;
    check L12() else D2();
  L11():
    r1 = dyn base(<lang `*`(`-`(b2), .expr2)>);
    goto L0(r1);
  D2():
    deopt 6 [b6];
  D4():
    deopt 13 [Asym1];
  L12():
    b7 = force? b6;
    checkMissing(b7);
    r3 = `-`(<missing>, b7);
    _expr2 = ld `.expr2`;
    check L13() else D3();
  L14():
    Asym2 = force? Asym1;
    checkMissing(Asym2);
    _expr4 = ld `.expr4`;
    check L15() else D5();
  D3():
    deopt 8 [r3, _expr2];
  D5():
    deopt 14 [Asym2, _expr4];
  L13():
    _expr3 = force? _expr2;
    checkMissing(_expr3);
    r4 = `*`(r3, _expr3);
    r5 = exp(r4);
    goto L0(r5);
  L15():
    _expr5 = force? _expr4;
    checkMissing(_expr5);
    r6 = `*`(Asym2, _expr5);
    st `.value` = r6;
    as_list = ldf `as.list`;
    check L16() else D6();
  D6():
    deopt 19 [];
  L16():
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
      r15 = dyn c1("Asym", "b2", "b3");
      goto L1(r9, r15);
    L6():
      r12 = dyn base1("Asym", "b2", "b3");
      goto L1(r9, r12);
    };
    r18 = dyn as_list(p);
    check L17() else D7();
  D7():
    deopt 21 [r18];
  L17():
    st `.actualArgs` = r18;
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L1(r20):
    c2 = `as.logical`(r20);
    if c2 then L23() else L2();
  L18():
    vapply = ldf vapply;
    check L20() else D8();
  L19():
    r19 = dyn base2(<lang vapply(.actualArgs, is.name, NA_LGL)>);
    goto L1(r19);
  D8():
    deopt 26 [];
  L2():
    goto L7();
  L7():
    _value2 = ld `.value`;
    check L55() else D30();
  L20():
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
    check L21() else D9();
  L23():
    array = ldf array;
    check L24() else D11();
  D9():
    deopt 30 [r23];
  D11():
    deopt 34 [];
  D30():
    deopt 104 [_value2];
  L21():
    all = ldf all in base;
    r24 = dyn all(r23);
    check L22() else D10();
  L24():
    p3 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r26):
      return r26;
    L2():
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L4() else L5();
    L3():
      r25 = dyn base3(<lang length(.value)>, 3);
      goto L0(r25);
    L1(r28):
      c3 = ldf c in base;
      r30 = dyn c3(r28, 3);
      goto L0(r30);
    L4():
      _value = ld `.value`;
      _value1 = force? _value;
      checkMissing(_value1);
      length = ldf length in base;
      r29 = dyn length(_value1);
      goto L1(r29);
    L5():
      r27 = dyn base4(<sym .value>);
      goto L1(r27);
    };
    p4 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r33):
      return r33;
    L2():
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L4() else L5();
    L3():
      r32 = dyn base5(NULL, <lang c("Asym", "b2", "b3")>);
      goto L0(r32);
    L1(r35):
      list = ldf list in base;
      r37 = dyn list(NULL, r35);
      goto L0(r37);
    L4():
      c4 = ldf c in base;
      r36 = dyn c4("Asym", "b2", "b3");
      goto L1(r36);
    L5():
      r34 = dyn base6("Asym", "b2", "b3");
      goto L1(r34);
    };
    r39 = dyn array(0.0, p3, p4);
    check L25() else D12();
  L55():
    _value3 = force? _value2;
    checkMissing(_value3);
    popenv;
    return _value3;
  D10():
    deopt 32 [r24];
  D12():
    deopt 38 [r39];
  L22():
    goto L1(r24);
  L25():
    st `.grad` = r39;
    _expr6 = ld `.expr4`;
    check L26() else D13();
  D13():
    deopt 40 [_expr6];
  L26():
    _expr7 = force? _expr6;
    checkMissing(_expr7);
    l = ld `.grad`;
    c5 = `is.object`(l);
    if c5 then L27() else L28(_expr7);
  L3(dx3):
    st `.grad` = dx3;
    Asym3 = ld Asym;
    check L30() else D14();
  L27():
    dr2 = tryDispatchBuiltin.0("[<-", l, _expr7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L29() else L28(_expr7);
  L28(_expr9):
    ___ = ldf `[<-` in base;
    r40 = dyn ___(l, <missing>, "Asym", _expr7);
    goto L3(r40);
  D14():
    deopt 48 [Asym3];
  L29():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L30():
    Asym4 = force? Asym3;
    checkMissing(Asym4);
    r41 = `-`(<missing>, Asym4);
    _expr12 = ld `.expr4`;
    check L31() else D15();
  D15():
    deopt 50 [r41, _expr12];
  L31():
    _expr13 = force? _expr12;
    checkMissing(_expr13);
    _expr14 = ld `.expr2`;
    check L32() else D16();
  D16():
    deopt 51 [r41, _expr13, _expr14];
  L32():
    _expr15 = force? _expr14;
    checkMissing(_expr15);
    r42 = `*`(_expr13, _expr15);
    r43 = `*`(r41, r42);
    l3 = ld `.grad`;
    c6 = `is.object`(l3);
    if c6 then L33() else L34(r43);
  L4(dx5):
    st `.grad` = dx5;
    Asym5 = ld Asym;
    check L36() else D17();
  L33():
    dr4 = tryDispatchBuiltin.0("[<-", l3, r43);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L35() else L34(r43);
  L34(r45):
    ___1 = ldf `[<-` in base;
    r48 = dyn ___1(l3, <missing>, "b2", r43);
    goto L4(r48);
  D17():
    deopt 61 [Asym5];
  L35():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L4(dx4);
  L36():
    Asym6 = force? Asym5;
    checkMissing(Asym6);
    r49 = `-`(<missing>, Asym6);
    _expr16 = ld `.expr4`;
    check L37() else D18();
  D18():
    deopt 63 [r49, _expr16];
  L37():
    _expr17 = force? _expr16;
    checkMissing(_expr17);
    b8 = ld b2;
    check L38() else D19();
  D19():
    deopt 64 [r49, _expr17, b8];
  L38():
    b9 = force? b8;
    checkMissing(b9);
    b10 = ld b3;
    check L39() else D20();
  D20():
    deopt 65 [r49, _expr17, b9, b10];
  L39():
    b11 = force? b10;
    checkMissing(b11);
    x3 = ld x;
    check L40() else D21();
  D21():
    deopt 66 [r49, _expr17, b9, b11, x3];
  L40():
    x4 = force? x3;
    checkMissing(x4);
    r50 = `-`(x4, 1.0);
    r51 = `^`(b11, r50);
    x5 = ld x;
    check L41() else D22();
  D22():
    deopt 70 [r49, _expr17, b9, r51, x5];
  L41():
    x6 = force? x5;
    checkMissing(x6);
    r52 = `*`(r51, x6);
    r53 = `*`(b9, r52);
    r54 = `*`(_expr17, r53);
    r55 = `*`(r49, r54);
    l6 = ld `.grad`;
    c7 = `is.object`(l6);
    if c7 then L42() else L43(r55);
  L5(dx7):
    st `.grad` = dx7;
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L45() else L46();
  L42():
    dr6 = tryDispatchBuiltin.0("[<-", l6, r55);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L44() else L43(r55);
  L43(r57):
    ___2 = ldf `[<-` in base;
    r60 = dyn ___2(l6, <missing>, "b3", r55);
    goto L5(r60);
  L6(r62):
    l9 = ld `.grad`;
    dimnames__ = ldf `dimnames<-`;
    check L49() else D25();
  L44():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L5(dx6);
  L45():
    _actualArgs2 = ld `.actualArgs`;
    check L47() else D23();
  L46():
    r61 = dyn base7(NULL, <sym .actualArgs>);
    goto L6(r61);
  D23():
    deopt 85 [_actualArgs2];
  D25():
    deopt 90 [r62, l9, r62];
  L47():
    _actualArgs3 = force? _actualArgs2;
    checkMissing(_actualArgs3);
    list1 = ldf list in base;
    r63 = dyn list1(NULL, _actualArgs3);
    check L48() else D24();
  L49():
    r64 = dyn dimnames__(l9, NULL, r62);
    check L50() else D26();
  D24():
    deopt 88 [r63];
  D26():
    deopt 92 [r62, r64];
  L48():
    goto L6(r63);
  L50():
    st `.grad` = r64;
    _grad = ld `.grad`;
    check L51() else D27();
  D27():
    deopt 94 [_grad];
  L51():
    _grad1 = force? _grad;
    checkMissing(_grad1);
    l10 = ld `.value`;
    attr__ = ldf `attr<-`;
    check L52() else D28();
  D28():
    deopt 97 [_grad1, l10, _grad1];
  L52():
    r65 = dyn attr__(l10, NULL, "gradient", _grad1);
    check L53() else D29();
  D29():
    deopt 100 [_grad1, r65];
  L53():
    st `.value` = r65;
    goto L7();
  }
}
fun inner4146431868(mCall, data, LHS, `...`) {
  (reg mCall:*, reg data:*, reg LHS:*, reg ddd:dots) -+> V { var mCall:*, var data:*, var LHS:*, var `...`:dots?, reg sortedXyData:cls, reg mCall1:*, reg mCall2:V, reg c:L, reg mCall4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg p:p(V +), reg LHS1:*, reg LHS2:V, reg p1:p(V +), reg data1:*, reg data2:V, reg p2:p(V +), reg r4:V, reg nrow:cls, reg xy:*, reg xy1:V, reg p3:p(V +), reg r6:V, reg r7:V, reg c1:L, reg stop:cls, reg r8:V, reg xy2:*, reg xy3:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg xyL:*, reg xyL1:V, reg c2:L, reg xyL3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r14:V, reg abs:cls, reg r15:V, reg r16:V, reg l:*, reg c3:L, reg r18:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r21:V, reg NLSstAsymptotic:cls, reg xyL4:*, reg xyL5:V, reg p4:p(V +), reg r23:V, reg coef:cls, reg nls:cls, reg __1:cls, reg r24:V, reg p5:p(V +), reg xy4:*, reg xy5:V, reg p6:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg pars:*, reg pars1:V, reg c4:L, reg pars3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r29:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg pars4:*, reg pars5:V, reg c5:L, reg pars7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r34:V, reg r35:V, reg r36:V, reg r37:V, reg c6:cls, reg r38:V, reg p7:p(V +), reg ddd1:dots?, reg r40:V, reg p8:p(V +), reg r42:V, reg setNames:cls, reg pars8:*, reg pars9:V, reg c7:L, reg pars11:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg pars14:V, reg r44:V, reg c8:cls, reg r45:V, reg __4:cls, reg r46:V, reg p9:p(V +), reg mCall5:*, reg mCall6:V, reg c9:L, reg mCall8:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg mCall11:V, reg r49:V, reg c10:cls, reg r50:V, reg __5:cls, reg r51:V, reg p10:p(V +), reg r53:V |
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
      r = dyn __(mCall4, "x");
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
    r7 = `<`(r6, 4.0);
    c1 = `as.logical`(r7);
    if c1 then L8() else L0();
  L0():
    goto L1();
  L1():
    xy2 = ld xy;
    check L12() else D6();
  L8():
    stop = ldf stop;
    check L9() else D4();
  D4():
    deopt 14 [];
  D6():
    deopt 19 [xy2];
  L9():
    r8 = dyn stop("too few distinct input values to fit the Gompertz model");
    check L10() else D5();
  L12():
    xy3 = force? xy2;
    checkMissing(xy3);
    st xyL = xy3;
    sym = ldf log;
    base = ldf log in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  D5():
    deopt 16 [r8];
  L2(r11):
    l = ld xyL;
    c3 = `is.object`(l);
    if c3 then L24() else L25(r11, l);
  L10():
    goto L1();
  L13():
    sym1 = ldf abs;
    base1 = ldf abs in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L14():
    r10 = dyn base(<lang abs(`$`(xyL, y))>);
    goto L2(r10);
  L3(r13):
    r16 = log(r13, 2.718281828459045);
    goto L2(r16);
  L15():
    xyL = ld xyL;
    check L17() else D7();
  L16():
    r12 = dyn base1(<lang `$`(xyL, y)>);
    goto L3(r12);
  L23(dx5):
    st xyL = dx5;
    NLSstAsymptotic = ldf NLSstAsymptotic;
    check L27() else D9();
  L24():
    dr4 = tryDispatchBuiltin.0("$<-", l, r11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L26() else L25(r11, dr4);
  L25(r18, l2):
    r21 = `$<-`(l2, <sym y>, r11);
    goto L23(r21);
  D7():
    deopt 25 [xyL];
  D9():
    deopt 35 [];
  L17():
    xyL1 = force? xyL;
    checkMissing(xyL1);
    c2 = `is.object`(xyL1);
    if c2 then L19() else L20(xyL1);
  L26():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L23(dx4);
  L27():
    p4 = prom<V +>{
      xyL4 = ld xyL;
      xyL5 = force? xyL4;
      checkMissing(xyL5);
      return xyL5;
    };
    r23 = dyn NLSstAsymptotic(p4);
    check L28() else D10();
  D10():
    deopt 37 [r23];
  L18(dx3):
    abs = ldf abs in base;
    r15 = dyn abs(dx3);
    check L22() else D8();
  L19():
    dr2 = tryDispatchBuiltin.1("$", xyL1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L21() else L20(dr2);
  L20(xyL3):
    r14 = `$`(xyL3, <sym y>);
    goto L18(r14);
  L28():
    st pars = r23;
    coef = ldf coef;
    check L29() else D11();
  D8():
    deopt 29 [r15];
  D11():
    deopt 40 [];
  L21():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L18(dx2);
  L22():
    goto L3(r15);
  L29():
    p8 = prom<V +>{
      nls = ldf nls;
      p5 = prom<V +>{
        __1 = ldf `~` in base;
        r24 = dyn __1(<sym y>, <lang exp(`*`(`-`(b2), `^`(b3, x)))>);
        return r24;
      };
      p6 = prom<V +>{
        xy4 = ld xy;
        xy5 = force? xy4;
        checkMissing(xy5);
        return xy5;
      };
      p7 = prom<V +>{
        sym2 = ldf c;
        base2 = ldf c in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L5() else L6();
      L0(r28):
        return r28;
      L5():
        pars = ld pars;
        pars1 = force? pars;
        checkMissing(pars1);
        c4 = `is.object`(pars1);
        if c4 then L7() else L8(pars1);
      L6():
        r27 = dyn base2[b2, b3](<lang `[[`(pars, "b1")>, <lang exp(`-`(exp(`[[`(pars, "lrc"))))>);
        goto L0(r27);
      L1(dx7):
        sym3 = ldf exp;
        base3 = ldf exp in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L10() else L11();
      L7():
        dr6 = tryDispatchBuiltin.1("[[", pars1);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L9() else L8(dr6);
      L8(pars3):
        __2 = ldf `[[` in base;
        r29 = dyn __2(pars3, "b1");
        goto L1(r29);
      L2(r31):
        c6 = ldf c in base;
        r38 = dyn c6(dx7, r31);
        goto L0(r38);
      L9():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L1(dx6);
      L10():
        sym4 = ldf exp;
        base4 = ldf exp in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L12() else L13();
      L11():
        r30 = dyn base3(<lang `-`(exp(`[[`(pars, "lrc")))>);
        goto L2(r30);
      L3(r33):
        r36 = `-`(<missing>, r33);
        r37 = exp(r36);
        goto L2(r37);
      L12():
        pars4 = ld pars;
        pars5 = force? pars4;
        checkMissing(pars5);
        c5 = `is.object`(pars5);
        if c5 then L14() else L15(pars5);
      L13():
        r32 = dyn base4(<lang `[[`(pars, "lrc")>);
        goto L3(r32);
      L4(dx9):
        r35 = exp(dx9);
        goto L3(r35);
      L14():
        dr8 = tryDispatchBuiltin.1("[[", pars5);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L16() else L15(dr8);
      L15(pars7):
        __3 = ldf `[[` in base;
        r34 = dyn __3(pars7, "lrc");
        goto L4(r34);
      L16():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L4(dx8);
      };
      ddd1 = ld `...`;
      r40 = dyn nls[, data, start, algorithm, `...`](p5, p6, p7, "plinear", ddd1);
      return r40;
    };
    r42 = dyn coef(p8);
    check L30() else D12();
  D12():
    deopt 42 [r42];
  L30():
    st pars = r42;
    setNames = ldf setNames;
    check L31() else D13();
  D13():
    deopt 45 [];
  L31():
    p9 = prom<V +>{
      pars8 = ld pars;
      pars9 = force? pars8;
      checkMissing(pars9);
      c7 = `is.object`(pars9);
      if c7 then L2() else L3(pars9);
    L0(dx11):
      return dx11;
    L2():
      dr10 = tryDispatchBuiltin.1("[", pars9);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L4() else L3(dr10);
    L3(pars11):
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L5() else L6();
    L1(pars14, r44):
      __4 = ldf `[` in base;
      r46 = dyn __4(pars14, r44);
      goto L0(r46);
    L4():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    L5():
      c8 = ldf c in base;
      r45 = dyn c8(".lin", "b2", "b3");
      goto L1(pars11, r45);
    L6():
      r43 = dyn base5(".lin", "b2", "b3");
      goto L1(pars11, r43);
    };
    p10 = prom<V +>{
      mCall5 = ld mCall;
      mCall6 = force? mCall5;
      checkMissing(mCall6);
      c9 = `is.object`(mCall6);
      if c9 then L2() else L3(mCall6);
    L0(dx13):
      return dx13;
    L2():
      dr12 = tryDispatchBuiltin.1("[", mCall6);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L4() else L3(dr12);
    L3(mCall8):
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L5() else L6();
    L1(mCall11, r49):
      __5 = ldf `[` in base;
      r51 = dyn __5(mCall11, r49);
      goto L0(r51);
    L4():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    L5():
      c10 = ldf c in base;
      r50 = dyn c10("Asym", "b2", "b3");
      goto L1(mCall8, r50);
    L6():
      r48 = dyn base6("Asym", "b2", "b3");
      goto L1(mCall8, r48);
    };
    r53 = dyn setNames(p9, p10);
    check L32() else D14();
  D14():
    deopt 48 [r53];
  L32():
    popenv;
    return r53;
  }
}
fun inner2708337952() {
  () -+> V { reg SSgompertz:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg DNase_1:*, reg DNase_2:V, reg c:L, reg DNase_4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg r3:V, reg p:p(V +), reg Asym:*, reg Asym1:V, reg p1:p(V +), reg b2:*, reg b3:V, reg p2:p(V +), reg b4:*, reg b5:V, reg p3:p(V +), reg r8:V |
    mkenv;
    st Asym = 4.5;
    st b2 = 2.3;
    st b3 = 0.7;
    SSgompertz = ldf SSgompertz;
    check L0() else D0();
  D0():
    deopt 10 [];
  L0():
    p = prom<V +>{
      sym = ldf log;
      base = ldf log in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      DNase_1 = ld `DNase.1`;
      DNase_2 = force? DNase_1;
      checkMissing(DNase_2);
      c = `is.object`(DNase_2);
      if c then L4() else L5(DNase_2);
    L2():
      r = dyn base(<lang `$`(DNase.1, conc)>);
      goto L0(r);
    L3(dx1):
      r3 = log(dx1, 2.718281828459045);
      goto L0(r3);
    L4():
      dr = tryDispatchBuiltin.1("$", DNase_2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(DNase_4):
      r2 = `$`(DNase_4, <sym conc>);
      goto L3(r2);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L3(dx);
    };
    p1 = prom<V +>{
      Asym = ld Asym;
      Asym1 = force? Asym;
      checkMissing(Asym1);
      return Asym1;
    };
    p2 = prom<V +>{
      b2 = ld b2;
      b3 = force? b2;
      checkMissing(b3);
      return b3;
    };
    p3 = prom<V +>{
      b4 = ld b3;
      b5 = force? b4;
      checkMissing(b5);
      return b5;
    };
    r8 = dyn SSgompertz(p, p1, p2, p3);
    check L1() else D1();
  D1():
    deopt 15 [r8];
  L1():
    popenv;
    return r8;
  }
}
fun main() {
  () -+> V { reg r:cls, reg eval:cls, reg p:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg expression:cls, reg r5:V, reg mEx:*, reg mEx1:V, reg eval1:cls, reg mEx2:*, reg mEx3:V, reg p1:p(V +), reg r7:V, reg eval2:cls, reg xx:*, reg xx1:V, reg r9:V, reg p2:p(V +), reg r11:V, reg xx2:*, reg xx3:V, reg evalq:cls, reg evalq1:cls, reg a:*, reg a1:V, reg b:*, reg b1:V, reg r12:V, reg aa:*, reg aa1:V, reg r13:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg list:cls, reg r17:V, reg p4:p(V +), reg r19:V, reg p5:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg list1:cls, reg r23:V, reg p6:p(V +), reg r25:V, reg evalq2:cls, reg evalq3:cls, reg a2:*, reg a3:V, reg b2:*, reg b3:V, reg r26:V, reg aa2:*, reg aa3:V, reg r27:V, reg p7:p(V +), reg p8:p(V +), reg r30:V, reg p9:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg list2:cls, reg r34:V, reg p10:p(V +), reg r36:V, reg r37:cls, reg r38:cls, reg tst_ev:cls, reg r39:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r40:V, reg r41:V, reg list3:cls, reg r42:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg with:cls, reg a4:*, reg a5:V, reg p11:p(V +), reg p12:p(V +), reg r47:V, reg new_env:cls, reg r48:V, reg assign:cls, reg env:*, reg env1:V, reg p13:p(V +), reg r50:V, reg eval3:cls, reg p14:p(V +), reg env2:*, reg env3:V, reg p15:p(V +), reg r53:V, reg N:*, reg N1:V, reg get:cls, reg env4:*, reg env5:V, reg p16:p(V +), reg r55:V, reg evalq4:cls, reg p17:p(V +), reg env6:*, reg env7:V, reg p18:p(V +), reg r58:V, reg N2:*, reg N3:V, reg get1:cls, reg env8:*, reg env9:V, reg p19:p(V +), reg r60:V, reg r61:cls, reg r62:cls, reg r63:V, reg gg:cls, reg r64:V, reg sapply:cls, reg p20:p(V +), reg gg1:*, reg gg2:V, reg p21:p(V +), reg r67:V, reg r68:cls, reg r69:cls, reg r70:V, reg sapply1:cls, reg p22:p(V +), reg gg3:*, reg gg4:V, reg p23:p(V +), reg r73:V, reg ls:cls, reg environment:cls, reg gg5:*, reg gg6:V, reg p24:p(V +), reg r75:V, reg p25:p(V +), reg r77:V, reg ls1:cls, reg environment1:cls, reg get2:cls, reg environment2:cls, reg gg7:*, reg gg8:V, reg p26:p(V +), reg r79:V, reg p27:p(V +), reg r81:V, reg p28:p(V +), reg r83:V, reg p29:p(V +), reg r85:V |
    mkenv;
    r = clos inner260214374;
    st eval = r;
    eval = ldf eval;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    p = prom<V +>{
      return 256.0;
    };
    r2 = dyn eval(p);
    check L4() else D1();
  D1():
    deopt 6 [r2];
  L4():
    sym = ldf expression;
    base = ldf expression in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r4):
    st mEx = r4;
    mEx = ld mEx;
    check L7() else D2();
  L5():
    expression = ldf expression in base;
    r5 = dyn expression(<lang `^`(2.0, `^`(2.0, 3.0))>);
    goto L0(r5);
  L6():
    r3 = dyn base(<lang `^`(2.0, `^`(2.0, 3.0))>);
    goto L0(r3);
  D2():
    deopt 11 [mEx];
  L7():
    mEx1 = force? mEx;
    checkMissing(mEx1);
    eval1 = ldf eval;
    check L8() else D3();
  D3():
    deopt 15 [1.0];
  L8():
    p1 = prom<V +>{
      mEx2 = ld mEx;
      mEx3 = force? mEx2;
      checkMissing(mEx3);
      return mEx3;
    };
    r7 = dyn eval1(p1);
    check L9() else D4();
  D4():
    deopt 17 [1.0, r7];
  L9():
    `+`(1.0, r7);
    eval2 = ldf eval;
    check L10() else D5();
  D5():
    deopt 20 [];
  L10():
    p2 = prom<V +>{
      st xx = 3.141592653589793;
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      r9 = `^`(xx1, 2.0);
      return r9;
    };
    r11 = dyn eval2(p2);
    check L11() else D6();
  D6():
    deopt 22 [r11];
  L11():
    xx2 = ld xx;
    check L12() else D7();
  D7():
    deopt 23 [xx2];
  L12():
    xx3 = force? xx2;
    checkMissing(xx3);
    st a = 3.0;
    st aa = 4.0;
    evalq = ldf evalq;
    check L13() else D8();
  D8():
    deopt 32 [];
  L13():
    p5 = prom<V +>{
      evalq1 = ldf evalq;
      p3 = prom<V +>{
        a = ld a;
        a1 = force? a;
        checkMissing(a1);
        b = ld b;
        b1 = force? b;
        checkMissing(b1);
        r12 = `+`(a1, b1);
        aa = ld aa;
        aa1 = force? aa;
        checkMissing(aa1);
        r13 = `+`(r12, aa1);
        return r13;
      };
      p4 = prom<V +>{
        sym1 = ldf list;
        base1 = ldf list in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r16):
        return r16;
      L1():
        list = ldf list in base;
        r17 = dyn list(1.0);
        goto L0(r17);
      L2():
        r15 = dyn base1[a](1.0);
        goto L0(r15);
      };
      r19 = dyn evalq1(p3, p4);
      return r19;
    };
    p6 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      list1 = ldf list in base;
      r23 = dyn list1(5.0);
      goto L0(r23);
    L2():
      r21 = dyn base2[b](5.0);
      goto L0(r21);
    };
    r25 = dyn evalq(p5, p6);
    check L14() else D9();
  D9():
    deopt 35 [r25];
  L14():
    st a = 3.0;
    st aa = 4.0;
    evalq2 = ldf evalq;
    check L15() else D10();
  D10():
    deopt 43 [];
  L15():
    p9 = prom<V +>{
      evalq3 = ldf evalq;
      p7 = prom<V +>{
        a2 = ld a;
        a3 = force? a2;
        checkMissing(a3);
        b2 = ld b;
        b3 = force? b2;
        checkMissing(b3);
        r26 = `+`(a3, b3);
        aa2 = ld aa;
        aa3 = force? aa2;
        checkMissing(aa3);
        r27 = `+`(r26, aa3);
        return r27;
      };
      p8 = prom<V +>{
        return -1.0;
      };
      r30 = dyn evalq3(p7, p8);
      return r30;
    };
    p10 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      list2 = ldf list in base;
      r34 = dyn list2(5.0);
      goto L0(r34);
    L2():
      r32 = dyn base3[b](5.0);
      goto L0(r32);
    };
    r36 = dyn evalq2(p9, p10);
    check L16() else D11();
  D11():
    deopt 46 [r36];
  L16():
    r37 = clos inner560854305;
    st ev = r37;
    r38 = clos inner1167900026;
    st `tst.ev` = r38;
    tst_ev = ldf `tst.ev`;
    check L17() else D12();
  D12():
    deopt 54 [];
  L17():
    r39 = dyn tst_ev();
    check L18() else D13();
  D13():
    deopt 55 [r39];
  L18():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L19() else L20();
  L1(r41):
    st a = r41;
    sym5 = ldf with;
    base5 = ldf with in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L22() else L23();
  L19():
    list3 = ldf list in base;
    r42 = dyn list3(3.0, 4.0);
    check L21() else D14();
  L20():
    r40 = dyn base4[a, b](3.0, 4.0);
    goto L1(r40);
  D14():
    deopt 63 [r42];
  L2():
    st N = 3.0;
    new_env = ldf `new.env`;
    check L26() else D17();
  L21():
    goto L1(r42);
  L22():
    with = ldf with;
    check L24() else D15();
  L23():
    r43 = dyn base5(<sym a>, <lang `<-`(a, 5.0)>);
    goto L2();
  D15():
    deopt 67 [];
  D17():
    deopt 75 [];
  L24():
    p11 = prom<V +>{
      a4 = ld a;
      a5 = force? a4;
      checkMissing(a5);
      return a5;
    };
    p12 = prom<V +>{
      st a = 5.0;
      invisible.0();
      return 5.0;
    };
    r47 = dyn with(p11, p12);
    check L25() else D16();
  L26():
    r48 = dyn new_env();
    check L27() else D18();
  D16():
    deopt 70 [r47];
  D18():
    deopt 76 [r48];
  L25():
    goto L2();
  L27():
    st env = r48;
    assign = ldf assign;
    check L28() else D19();
  D19():
    deopt 79 [];
  L28():
    p13 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r50 = dyn assign[, , envir]("N", 27.0, p13);
    check L29() else D20();
  D20():
    deopt 84 [r50];
  L29():
    eval3 = ldf eval;
    check L30() else D21();
  D21():
    deopt 86 [];
  L30():
    p14 = prom<V +>{
      st N = 4.0;
      invisible.0();
      return 4.0;
    };
    p15 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r53 = dyn eval3(p14, p15);
    check L31() else D22();
  D22():
    deopt 89 [r53];
  L31():
    N = ld N;
    check L32() else D23();
  D23():
    deopt 90 [N];
  L32():
    N1 = force? N;
    checkMissing(N1);
    get = ldf get;
    check L33() else D24();
  D24():
    deopt 93 [];
  L33():
    p16 = prom<V +>{
      env4 = ld env;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    r55 = dyn get[, envir]("N", p16);
    check L34() else D25();
  D25():
    deopt 97 [r55];
  L34():
    evalq4 = ldf evalq;
    check L35() else D26();
  D26():
    deopt 99 [];
  L35():
    p17 = prom<V +>{
      st N = 5.0;
      invisible.0();
      return 5.0;
    };
    p18 = prom<V +>{
      env6 = ld env;
      env7 = force? env6;
      checkMissing(env7);
      return env7;
    };
    r58 = dyn evalq4(p17, p18);
    check L36() else D27();
  D27():
    deopt 102 [r58];
  L36():
    N2 = ld N;
    check L37() else D28();
  D28():
    deopt 103 [N2];
  L37():
    N3 = force? N2;
    checkMissing(N3);
    get1 = ldf get;
    check L38() else D29();
  D29():
    deopt 106 [];
  L38():
    p19 = prom<V +>{
      env8 = ld env;
      env9 = force? env8;
      checkMissing(env9);
      return env9;
    };
    r60 = dyn get1[, envir]("N", p19);
    check L39() else D30();
  D30():
    deopt 110 [r60];
  L39():
    r61 = clos inner560854305;
    checkFun.0(r61);
    r62 = r61 as cls;
    r63 = dyn r62();
    check L40() else D31();
  D31():
    deopt 114 [r63];
  L40():
    st gg = r63;
    gg = ldf gg;
    check L41() else D32();
  D32():
    deopt 117 [];
  L41():
    r64 = dyn gg(10.0);
    check L42() else D33();
  D33():
    deopt 119 [r64];
  L42():
    sapply = ldf sapply;
    check L43() else D34();
  D34():
    deopt 121 [];
  L43():
    p20 = prom<V +>{
      return <int 1, 2, 3, 4, 5>;
    };
    p21 = prom<V +>{
      gg1 = ld gg;
      gg2 = force? gg1;
      checkMissing(gg2);
      return gg2;
    };
    r67 = dyn sapply(p20, p21);
    check L44() else D35();
  D35():
    deopt 124 [r67];
  L44():
    r68 = clos inner560854305;
    checkFun.0(r68);
    r69 = r68 as cls;
    r70 = dyn r69();
    check L45() else D36();
  D36():
    deopt 128 [r70];
  L45():
    st gg = r70;
    sapply1 = ldf sapply;
    check L46() else D37();
  D37():
    deopt 131 [];
  L46():
    p22 = prom<V +>{
      return <int 1, 2, 3, 4, 5>;
    };
    p23 = prom<V +>{
      gg3 = ld gg;
      gg4 = force? gg3;
      checkMissing(gg4);
      return gg4;
    };
    r73 = dyn sapply1(p22, p23);
    check L47() else D38();
  D38():
    deopt 134 [r73];
  L47():
    ls = ldf ls;
    check L48() else D39();
  D39():
    deopt 136 [];
  L48():
    p25 = prom<V +>{
      environment = ldf environment;
      p24 = prom<V +>{
        gg5 = ld gg;
        gg6 = force? gg5;
        checkMissing(gg6);
        return gg6;
      };
      r75 = dyn environment(p24);
      return r75;
    };
    r77 = dyn ls[envir](p25);
    check L49() else D40();
  D40():
    deopt 139 [r77];
  L49():
    ls1 = ldf ls;
    check L50() else D41();
  D41():
    deopt 141 [];
  L50():
    p29 = prom<V +>{
      environment1 = ldf environment;
      p28 = prom<V +>{
        get2 = ldf get;
        p27 = prom<V +>{
          environment2 = ldf environment;
          p26 = prom<V +>{
            gg7 = ld gg;
            gg8 = force? gg7;
            checkMissing(gg8);
            return gg8;
          };
          r79 = dyn environment2(p26);
          return r79;
        };
        r81 = dyn get2[, envir]("k", p27);
        return r81;
      };
      r83 = dyn environment1(p28);
      return r83;
    };
    r85 = dyn ls1[envir](p29);
    check L51() else D42();
  D42():
    deopt 144 [r85];
  L51():
    popenv;
    return r85;
  }
}
fun inner260214374(expr, envir, enclos) {
  (reg expr:*, reg envir:*, reg enclos:*) -+> V { var expr:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var enclos:*, reg enclos_isMissing:L, reg enclos_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg envir1:*, reg envir2:V, reg is_list:cls, reg r4:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c5:L, reg r6:V, reg envir3:*, reg envir4:V, reg is_pairlist:cls, reg r7:V, reg c6:L, reg c7:V, reg c9:L, reg parent_frame1:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg baseenv:cls, reg r11:V, reg p1:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg expr1:*, reg expr2:V, reg envir5:*, reg envir6:V, reg enclos1:*, reg enclos2:V, reg eval:cls, reg r15:V |
    mkenv;
    st expr = expr;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L0() else L1(envir);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L1(p);
  L1(envir_orDefault):
    st envir = envir_orDefault;
    enclos_isMissing = missing.0(enclos);
    if enclos_isMissing then L2() else L3(enclos);
  L2():
    p1 = prom<V +>{
      sym = ldf `is.list`;
      base = ldf `is.list` in base;
      guard = `==`.4(sym, base);
      if guard then L5() else L6();
    L0(r3):
      c = `as.logical`(r3);
      if c then L1(c) else L7();
    L5():
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      is_list = ldf `is.list` in base;
      r4 = dyn is_list(envir2);
      goto L0(r4);
    L6():
      r2 = dyn base(<sym envir>);
      goto L0(r2);
    L1(c1):
      c9 = `as.logical`(c1);
      if c9 then L11() else L3();
    L7():
      sym1 = ldf `is.pairlist`;
      base1 = ldf `is.pairlist` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L8() else L9();
    L2(c5, r6):
      c6 = `as.logical`(r6);
      c7 = `||`(c5, c6);
      goto L1(c7);
    L3():
      sym2 = ldf baseenv;
      base2 = ldf baseenv in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L13() else L14();
    L8():
      envir3 = ld envir;
      envir4 = force? envir3;
      checkMissing(envir4);
      is_pairlist = ldf `is.pairlist` in base;
      r7 = dyn is_pairlist(envir4);
      goto L2(c, r7);
    L9():
      r5 = dyn base1(<sym envir>);
      goto L2(c, r5);
    L11():
      parent_frame1 = ldf `parent.frame`;
      r8 = dyn parent_frame1();
      return r8;
    L4(r10):
      return r10;
    L13():
      baseenv = ldf baseenv in base;
      r11 = dyn baseenv();
      goto L4(r11);
    L14():
      r9 = dyn base2();
      goto L4(r9);
    };
    goto L3(p1);
  L3(enclos_orDefault):
    st enclos = enclos_orDefault;
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L5() else L6();
  L4(r14):
    popenv;
    return r14;
  L5():
    expr1 = ld expr;
    check L7() else D0();
  L6():
    r13 = dyn base3(<lang eval(expr, envir, enclos)>);
    goto L4(r13);
  D0():
    deopt 2 [expr1];
  L7():
    expr2 = force? expr1;
    checkMissing(expr2);
    envir5 = ld envir;
    check L8() else D1();
  D1():
    deopt 4 [envir5];
  L8():
    envir6 = force? envir5;
    checkMissing(envir6);
    enclos1 = ld enclos;
    check L9() else D2();
  D2():
    deopt 6 [enclos1];
  L9():
    enclos2 = force? enclos1;
    checkMissing(enclos2);
    eval = ldf eval in base;
    r15 = dyn eval(expr2, envir6, enclos2);
    check L10() else D3();
  D3():
    deopt 9 [r15];
  L10():
    goto L4(r15);
  }
}
fun inner560854305() {
  () -+> V { reg parent_frame:cls, reg r:V, reg eval:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg expression:cls, reg r3:V, reg p:p(V +), reg e1:*, reg e2:V, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg expression1:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg aa:*, reg aa1:V, reg eval1:cls, reg a:*, reg a1:V, reg p2:p(V +), reg e3:*, reg e4:V, reg p3:p(V +), reg r14:V, reg list:cls, reg r15:V |
    mkenv;
    parent_frame = ldf `parent.frame`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    r = dyn parent_frame();
    check L3() else D1();
  D1():
    deopt 2 [r];
  L3():
    st e1 = r;
    eval = ldf eval;
    check L4() else D2();
  D2():
    deopt 5 [];
  L4():
    p = prom<V +>{
      sym = ldf expression;
      base = ldf expression in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      expression = ldf expression in base;
      r3 = dyn expression(<sym a>);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym a>);
      goto L0(r1);
    };
    p1 = prom<V +>{
      e1 = ld e1;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    r6 = dyn eval(p, p1);
    check L5() else D3();
  D3():
    deopt 8 [r6];
  L5():
    st aa = r6;
    sym1 = ldf expression;
    base1 = ldf expression in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L0(r8):
    st a = r8;
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L8() else L9();
  L6():
    expression1 = ldf expression in base;
    r9 = dyn expression1(<lang `+`(x, y)>);
    goto L0(r9);
  L7():
    r7 = dyn base1(<lang `+`(x, y)>);
    goto L0(r7);
  L1(r11):
    popenv;
    return r11;
  L8():
    aa = ld aa;
    check L10() else D4();
  L9():
    r10 = dyn base2[aa, eval](<sym aa>, <lang eval(a, e1)>);
    goto L1(r10);
  D4():
    deopt 16 [aa];
  L10():
    aa1 = force? aa;
    checkMissing(aa1);
    eval1 = ldf eval;
    check L11() else D5();
  D5():
    deopt 20 [];
  L11():
    p2 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    p3 = prom<V +>{
      e3 = ld e1;
      e4 = force? e3;
      checkMissing(e4);
      return e4;
    };
    r14 = dyn eval1(p2, p3);
    check L12() else D6();
  D6():
    deopt 23 [r14];
  L12():
    list = ldf list in base;
    r15 = dyn list(aa1, r14);
    check L13() else D7();
  D7():
    deopt 26 [r15];
  L13():
    goto L1(r15);
  }
}
fun inner1167900026(a) {
  (reg a:*) -+> V { var a:*, reg a_isMissing:L, reg a_orDefault:*, reg ev:cls, reg r:V |
    mkenv;
    a_isMissing = missing.0(a);
    if a_isMissing then L0(7.0) else L0(a);
  L0(a_orDefault):
    st a = a_orDefault;
    st x = 3.141592653589793;
    st y = 1.0;
    ev = ldf ev;
    check L1() else D0();
  D0():
    deopt 7 [];
  L1():
    r = dyn ev();
    check L2() else D1();
  D1():
    deopt 8 [r];
  L2():
    popenv;
    return r;
  }
}
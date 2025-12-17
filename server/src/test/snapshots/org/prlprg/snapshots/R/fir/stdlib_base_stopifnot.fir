fun main() {
  () -+> V { reg r:cls, reg stopifnot:cls, reg p:p(V +), reg all_equal:cls, reg pi:*, reg pi1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg p3:p(V +), reg r6:V, reg matrix:cls, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg c:cls, reg r9:V, reg p4:p(V +), reg r11:V, reg stopifnot1:cls, reg m:*, reg m1:V, reg t:cls, reg m2:*, reg m3:V, reg p5:p(V +), reg r13:V, reg r14:V, reg p6:p(V +), reg diag:cls, reg m4:*, reg m5:V, reg p7:p(V +), reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg r21:V, reg r22:V, reg rep:cls, reg r23:V, reg r24:V, reg p8:p(V +), reg r26:V, reg try:cls, reg stopifnot2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg length:cls, reg r29:V, reg p9:p(V +), reg r31:V, reg p10:p(V +), reg r33:V, reg try1:cls, reg stopifnot3:cls, reg all_equal1:cls, reg pi2:*, reg pi3:V, reg p11:p(V +), reg r35:V, reg p12:p(V +), reg p13:p(V +), reg p14:p(V +), reg p15:p(V +), reg r40:V, reg p16:p(V +), reg r42:V, reg try2:cls, reg stopifnot4:cls, reg all_equal2:cls, reg pi4:*, reg pi5:V, reg p17:p(V +), reg p18:p(V +), reg r46:V, reg p19:p(V +), reg r48:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r49:V, reg r50:V, reg expression:cls, reg r51:V, reg try3:cls, reg stopifnot5:cls, reg eObj:*, reg eObj1:V, reg p20:p(V +), reg r53:V, reg p21:p(V +), reg r55:V, reg stopifnot6:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r56:V, reg r57:V, reg quote:cls, reg r58:V, reg p22:p(V +), reg r60:V, reg stopifnot7:cls, reg r61:V, reg try4:cls, reg stopifnot8:cls, reg all_equal3:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r62:V, reg r63:V, reg rep1:cls, reg r64:V, reg p23:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r66:V, reg r67:V, reg list:cls, reg r68:V, reg p24:p(V +), reg r70:V, reg p25:p(V +), reg r72:V, reg p26:p(V +), reg r74:V, reg l:*, reg c1:L, reg r76:R, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r79:V, reg try5:cls, reg stopifnot9:cls, reg m6:*, reg m7:V, reg t1:cls, reg m8:*, reg m9:V, reg p27:p(V +), reg r81:V, reg r82:V, reg p28:p(V +), reg r84:V, reg p29:p(V +), reg r86:V, reg stopifnot10:*, reg stopifnot11:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r87:V, reg r88:V, reg body:cls, reg warnifnot:*, reg warnifnot1:V, reg p30:p(V +), reg r90:V, reg length1:cls, reg r91:V, reg do_call:cls, reg substitute:*, reg substitute1:V, reg p31:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r93:V, reg r94:V, reg bdy:*, reg bdy1:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r95:V, reg r96:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r97:V, reg r98:V, reg quote1:cls, reg r99:V, reg list1:cls, reg r100:V, reg list2:cls, reg r101:V, reg p32:p(V +), reg r103:V, reg do_call1:cls, reg substitute2:*, reg substitute3:V, reg p33:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r105:V, reg r106:V, reg bdy2:*, reg bdy3:V, reg c2:L, reg bdy5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg N:*, reg N1:V, reg r107:V, reg __:cls, reg r108:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r109:V, reg r110:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r111:V, reg r112:V, reg quote2:cls, reg r113:V, reg list3:cls, reg r114:V, reg list4:cls, reg r115:V, reg p34:p(V +), reg r117:V, reg l3:*, reg c3:L, reg r119:V, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg N2:*, reg N3:V, reg r122:V, reg ____:cls, reg r123:V, reg bdy6:*, reg bdy7:V, reg l6:*, reg body__:cls, reg r124:V, reg warnifnot2:cls, reg p35:p(V +), reg p36:p(V +), reg p37:p(V +), reg r128:V, reg warnifnot3:cls, reg p38:p(V +), reg r130:V |
    mkenv;
    r = clos inner24653272;
    st stopifnot = r;
    stopifnot = ldf stopifnot;
    check L4() else D0();
  D0():
    deopt 4 [];
  L4():
    p = prom<V +>{
      return TRUE;
    };
    p2 = prom<V +>{
      all_equal = ldf `all.equal`;
      p1 = prom<V +>{
        pi = ld pi;
        pi1 = force? pi;
        checkMissing(pi1);
        return pi1;
      };
      r3 = dyn all_equal(p1, 3.14159265);
      return r3;
    };
    p3 = prom<V +>{
      return TRUE;
    };
    r6 = dyn stopifnot(p, p2, p3);
    check L5() else D1();
  D1():
    deopt 8 [r6];
  L5():
    matrix = ldf matrix;
    check L6() else D2();
  D2():
    deopt 10 [];
  L6():
    p4 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c = ldf c in base;
      r9 = dyn c(1.0, 3.0, 3.0, 1.0);
      goto L0(r9);
    L2():
      r7 = dyn base(1.0, 3.0, 3.0, 1.0);
      goto L0(r7);
    };
    r11 = dyn matrix(p4, 2.0, 2.0);
    check L7() else D3();
  D3():
    deopt 14 [r11];
  L7():
    st m = r11;
    stopifnot1 = ldf stopifnot;
    check L8() else D4();
  D4():
    deopt 17 [];
  L8():
    p6 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      t = ldf t;
      p5 = prom<V +>{
        m2 = ld m;
        m3 = force? m2;
        checkMissing(m3);
        return m3;
      };
      r13 = dyn t(p5);
      r14 = `==`(m1, r13);
      return r14;
    };
    p8 = prom<V +>{
      diag = ldf diag;
      p7 = prom<V +>{
        m4 = ld m;
        m5 = force? m4;
        checkMissing(m5);
        return m5;
      };
      r17 = dyn diag(p7);
      sym1 = ldf rep;
      base1 = ldf rep in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r21, r22):
      r24 = `==`(r21, r22);
      return r24;
    L1():
      rep = ldf rep in base;
      r23 = dyn rep(1.0, 2.0);
      goto L0(r17, r23);
    L2():
      r20 = dyn base1(1.0, 2.0);
      goto L0(r17, r20);
    };
    r26 = dyn stopifnot1(p6, p8);
    check L9() else D5();
  D5():
    deopt 20 [r26];
  L9():
    try = ldf try;
    check L10() else D6();
  D6():
    deopt 22 [];
  L10():
    p10 = prom<V +>{
      stopifnot2 = ldf stopifnot;
      p9 = prom<V +>{
        sym2 = ldf length;
        base2 = ldf length in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r28):
        return r28;
      L1():
        length = ldf length in base;
        r29 = dyn length(10.0);
        goto L0(r29);
      L2():
        r27 = dyn base2(10.0);
        goto L0(r27);
      };
      r31 = dyn stopifnot2(p9);
      return r31;
    };
    r33 = dyn try(p10);
    check L11() else D7();
  D7():
    deopt 24 [r33];
  L11():
    try1 = ldf try;
    check L12() else D8();
  D8():
    deopt 26 [];
  L12():
    p16 = prom<V +>{
      stopifnot3 = ldf stopifnot;
      p12 = prom<V +>{
        all_equal1 = ldf `all.equal`;
        p11 = prom<V +>{
          pi2 = ld pi;
          pi3 = force? pi2;
          checkMissing(pi3);
          return pi3;
        };
        r35 = dyn all_equal1(p11, 3.141593);
        return r35;
      };
      p13 = prom<V +>{
        return FALSE;
      };
      p14 = prom<V +>{
        return <lgl TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE>;
      };
      p15 = prom<V +>{
        return TRUE;
      };
      r40 = dyn stopifnot3(p12, p13, p14, p15);
      return r40;
    };
    r42 = dyn try1(p16);
    check L13() else D9();
  D9():
    deopt 28 [r42];
  L13():
    try2 = ldf try;
    check L14() else D10();
  D10():
    deopt 30 [];
  L14():
    p19 = prom<V +>{
      stopifnot4 = ldf stopifnot;
      p18 = prom<V +>{
        all_equal2 = ldf `all.equal`;
        p17 = prom<V +>{
          pi4 = ld pi;
          pi5 = force? pi4;
          checkMissing(pi5);
          return pi5;
        };
        dyn all_equal2(p17, 3.1415927);
        return TRUE;
      };
      r46 = dyn stopifnot4[exprs](p18);
      return r46;
    };
    r48 = dyn try2(p19);
    check L15() else D11();
  D11():
    deopt 32 [r48];
  L15():
    sym3 = ldf expression;
    base3 = ldf expression in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L16() else L17();
  L0(r50):
    st eObj = r50;
    try3 = ldf try;
    check L18() else D12();
  L16():
    expression = ldf expression in base;
    r51 = dyn expression(<lang `<`(2.0, 3.0)>, <lang `<=`(3.0, `:`(3.0, 6.0))>, <lang `<`(`:`(1.0, 10.0), 2.0)>);
    goto L0(r51);
  L17():
    r49 = dyn base3(<lang `<`(2.0, 3.0)>, <lang `<=`(3.0, `:`(3.0, 6.0))>, <lang `<`(`:`(1.0, 10.0), 2.0)>);
    goto L0(r49);
  D12():
    deopt 38 [];
  L18():
    p21 = prom<V +>{
      stopifnot5 = ldf stopifnot;
      p20 = prom<V +>{
        eObj = ld eObj;
        eObj1 = force? eObj;
        checkMissing(eObj1);
        return eObj1;
      };
      r53 = dyn stopifnot5[exprObject](p20);
      return r53;
    };
    r55 = dyn try3(p21);
    check L19() else D13();
  D13():
    deopt 40 [r55];
  L19():
    stopifnot6 = ldf stopifnot;
    check L20() else D14();
  D14():
    deopt 42 [];
  L20():
    p22 = prom<V +>{
      sym4 = ldf quote;
      base4 = ldf quote in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r57):
      return r57;
    L1():
      quote = ldf quote in base;
      r58 = dyn quote(<lang `==`(3.0, 3.0)>);
      goto L0(r58);
    L2():
      r56 = dyn base4(<lang `==`(3.0, 3.0)>);
      goto L0(r56);
    };
    r60 = dyn stopifnot6[exprObject](p22);
    check L21() else D15();
  D15():
    deopt 45 [r60];
  L21():
    stopifnot7 = ldf stopifnot;
    check L22() else D16();
  D16():
    deopt 47 [];
  L22():
    r61 = dyn stopifnot7[exprObject](TRUE);
    check L23() else D17();
  D17():
    deopt 50 [r61];
  L23():
    try4 = ldf try;
    check L24() else D18();
  D18():
    deopt 52 [];
  L24():
    p26 = prom<V +>{
      stopifnot8 = ldf stopifnot;
      p25 = prom<V +>{
        all_equal3 = ldf `all.equal`;
        p23 = prom<V +>{
          sym5 = ldf rep;
          base5 = ldf rep in base;
          guard5 = `==`.4(sym5, base5);
          if guard5 then L1() else L2();
        L0(r63):
          return r63;
        L1():
          rep1 = ldf rep in base;
          r64 = dyn rep1(<lang list(pi)>, 4.0);
          goto L0(r64);
        L2():
          r62 = dyn base5(<lang list(pi)>, 4.0);
          goto L0(r62);
        };
        p24 = prom<V +>{
          sym6 = ldf list;
          base6 = ldf list in base;
          guard6 = `==`.4(sym6, base6);
          if guard6 then L1() else L2();
        L0(r67):
          return r67;
        L1():
          list = ldf list in base;
          r68 = dyn list(3.1, 3.14, 3.141, 3.1415);
          goto L0(r68);
        L2():
          r66 = dyn base6(3.1, 3.14, 3.141, 3.1415);
          goto L0(r66);
        };
        r70 = dyn all_equal3(p23, p24);
        return r70;
      };
      r72 = dyn stopifnot8(p25);
      return r72;
    };
    r74 = dyn try4(p26);
    check L25() else D19();
  D19():
    deopt 54 [r74];
  L25():
    l = ld m;
    c1 = `is.object`(l);
    if c1 then L26() else L27(12.0, l);
  L1(dx1):
    st m = dx1;
    try5 = ldf try;
    check L29() else D20();
  L26():
    dr = tryDispatchBuiltin.0("[<-", l, 12.0);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L28() else L27(12.0, dr);
  L27(r76, l2):
    ___ = ldf `[<-` in base;
    r79 = dyn ___(l2, 12.0, 1.0, 2.0);
    goto L1(r79);
  D20():
    deopt 64 [];
  L28():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L29():
    p29 = prom<V +>{
      stopifnot9 = ldf stopifnot;
      p28 = prom<V +>{
        m6 = ld m;
        m7 = force? m6;
        checkMissing(m7);
        t1 = ldf t;
        p27 = prom<V +>{
          m8 = ld m;
          m9 = force? m8;
          checkMissing(m9);
          return m9;
        };
        r81 = dyn t1(p27);
        r82 = `==`(m7, r81);
        return r82;
      };
      r84 = dyn stopifnot9[`m must be symmetric`](p28);
      return r84;
    };
    r86 = dyn try5(p29);
    check L30() else D21();
  D21():
    deopt 66 [r86];
  L30():
    stopifnot10 = ld stopifnot;
    check L31() else D22();
  D22():
    deopt 67 [stopifnot10];
  L31():
    stopifnot11 = force? stopifnot10;
    checkMissing(stopifnot11);
    st warnifnot = stopifnot11;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L32() else L33();
  L2(r88):
    st N = r88;
    do_call = ldf `do.call`;
    check L37() else D26();
  L32():
    body = ldf body;
    check L34() else D23();
  L33():
    r87 = dyn base7(<lang `<-`(bdy, body(warnifnot))>);
    goto L2(r87);
  D23():
    deopt 73 [];
  D26():
    deopt 81 [];
  L34():
    p30 = prom<V +>{
      warnifnot = ld warnifnot;
      warnifnot1 = force? warnifnot;
      checkMissing(warnifnot1);
      return warnifnot1;
    };
    r90 = dyn body(p30);
    check L35() else D24();
  L37():
    p31 = prom<V +>{
      substitute = ld substitute;
      substitute1 = force? substitute;
      checkMissing(substitute1);
      return substitute1;
    };
    p32 = prom<V +>{
      sym8 = ldf list;
      base8 = ldf list in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L3() else L4();
    L0(r94):
      return r94;
    L3():
      bdy = ld bdy;
      bdy1 = force? bdy;
      checkMissing(bdy1);
      sym9 = ldf list;
      base9 = ldf list in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L5() else L6();
    L4():
      r93 = dyn base8(<sym bdy>, <lang list(stopifnot=quote(warnifnot))>);
      goto L0(r93);
    L1(r96):
      list2 = ldf list in base;
      r101 = dyn list2(bdy1, r96);
      goto L0(r101);
    L5():
      sym10 = ldf quote;
      base10 = ldf quote in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L7() else L8();
    L6():
      r95 = dyn base9[stopifnot](<lang quote(warnifnot)>);
      goto L1(r95);
    L2(r98):
      list1 = ldf list in base;
      r100 = dyn list1(r98);
      goto L1(r100);
    L7():
      quote1 = ldf quote in base;
      r99 = dyn quote1(<sym warnifnot>);
      goto L2(r99);
    L8():
      r97 = dyn base10(<sym warnifnot>);
      goto L2(r97);
    };
    r103 = dyn do_call(p31, p32);
    check L38() else D27();
  D24():
    deopt 75 [r90];
  D27():
    deopt 84 [r103];
  L35():
    st bdy = r90;
    length1 = ldf length in base;
    r91 = dyn length1(r90);
    check L36() else D25();
  L38():
    st bdy = r103;
    do_call1 = ldf `do.call`;
    check L39() else D28();
  D25():
    deopt 78 [r91];
  D28():
    deopt 87 [];
  L36():
    goto L2(r91);
  L39():
    p33 = prom<V +>{
      substitute2 = ld substitute;
      substitute3 = force? substitute2;
      checkMissing(substitute3);
      return substitute3;
    };
    p34 = prom<V +>{
      sym11 = ldf list;
      base11 = ldf list in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L4() else L5();
    L0(r106):
      return r106;
    L4():
      bdy2 = ld bdy;
      bdy3 = force? bdy2;
      checkMissing(bdy3);
      c2 = `is.object`(bdy3);
      if c2 then L6() else L7(bdy3);
    L5():
      r105 = dyn base11(<lang `[[`(bdy, `-`(N, 1.0))>, <lang list(stop=quote(warning))>);
      goto L0(r105);
    L1(dx3):
      sym12 = ldf list;
      base12 = ldf list in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L9() else L10();
    L6():
      dr2 = tryDispatchBuiltin.1("[[", bdy3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L8() else L7(dr2);
    L7(bdy5):
      N = ld N;
      N1 = force? N;
      checkMissing(N1);
      r107 = `-`(N1, 1.0);
      __ = ldf `[[` in base;
      r108 = dyn __(bdy5, r107);
      goto L1(r108);
    L2(r110):
      list4 = ldf list in base;
      r115 = dyn list4(dx3, r110);
      goto L0(r115);
    L8():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    L9():
      sym13 = ldf quote;
      base13 = ldf quote in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L11() else L12();
    L10():
      r109 = dyn base12[stop](<lang quote(warning)>);
      goto L2(r109);
    L3(r112):
      list3 = ldf list in base;
      r114 = dyn list3(r112);
      goto L2(r114);
    L11():
      quote2 = ldf quote in base;
      r113 = dyn quote2(<sym warning>);
      goto L3(r113);
    L12():
      r111 = dyn base13(<sym warning>);
      goto L3(r111);
    };
    r117 = dyn do_call1(p33, p34);
    check L40() else D29();
  D29():
    deopt 90 [r117];
  L40():
    l3 = ld bdy;
    c3 = `is.object`(l3);
    if c3 then L41() else L42(r117, l3);
  L3(dx5):
    st bdy = dx5;
    bdy6 = ld bdy;
    check L45() else D31();
  L41():
    dr4 = tryDispatchBuiltin.0("[[<-", l3, r117);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L43() else L42(r117, dr4);
  L42(r119, l5):
    N2 = ld N;
    check L44() else D30();
  D30():
    deopt 92 [r119, l5, r117, N2];
  D31():
    deopt 98 [bdy6];
  L43():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L3(dx4);
  L44():
    N3 = force? N2;
    checkMissing(N3);
    r122 = `-`(N3, 1.0);
    ____ = ldf `[[<-` in base;
    r123 = dyn ____(l5, r117, r122);
    goto L3(r123);
  L45():
    bdy7 = force? bdy6;
    checkMissing(bdy7);
    l6 = ld warnifnot;
    body__ = ldf `body<-`;
    check L46() else D32();
  D32():
    deopt 101 [bdy7, l6, bdy7];
  L46():
    r124 = dyn body__(l6, NULL, bdy7);
    check L47() else D33();
  D33():
    deopt 103 [bdy7, r124];
  L47():
    st warnifnot = r124;
    warnifnot2 = ldf warnifnot;
    check L48() else D34();
  D34():
    deopt 106 [];
  L48():
    p35 = prom<V +>{
      return TRUE;
    };
    p36 = prom<V +>{
      return TRUE;
    };
    p37 = prom<V +>{
      return FALSE;
    };
    r128 = dyn warnifnot2(p35, p36, p37);
    check L49() else D35();
  D35():
    deopt 110 [r128];
  L49():
    warnifnot3 = ldf warnifnot;
    check L50() else D36();
  D36():
    deopt 112 [];
  L50():
    p38 = prom<V +>{
      return FALSE;
    };
    r130 = dyn warnifnot3[exprs](p38);
    check L51() else D37();
  D37():
    deopt 115 [r130];
  L51():
    popenv;
    return r130;
  }
}
fun inner24653272(`...`, exprs, exprObject, local) {
  (reg ddd:dots, reg exprs:*, reg exprObject:*, reg local:*) -+> V { var `...`:dots?, var exprs:*, var exprObject:*, var local:*, reg local_isMissing:L, reg local_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ___length:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg missing:cls, reg r5:V, reg r6:V, reg c:L, reg c1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c5:L, reg r8:V, reg missing1:cls, reg r9:V, reg r10:V, reg c6:L, reg c7:V, reg c9:L, reg n:*, reg n1:V, reg c10:L, reg c11:V, reg has_e:*, reg has_e1:V, reg c13:L, reg c16:L, reg c17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c22:L, reg c23:L, reg r12:V, reg missing2:cls, reg r13:V, reg r14:V, reg c24:L, reg c25:V, reg c28:L, reg c29:V, reg c31:L, reg stop:cls, reg r15:V, reg isTRUE:cls, reg local1:*, reg local2:V, reg p:p(V +), reg r18:V, reg c32:L, reg parent_frame:cls, reg r19:V, reg r20:V, reg isFALSE:cls, reg local3:*, reg local4:V, reg p1:p(V +), reg r22:V, reg c33:L, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg local5:*, reg local6:V, reg is_environment:cls, reg r25:V, reg c34:L, reg local7:*, reg local8:V, reg stop1:cls, reg r26:V, reg has_e2:*, reg has_e3:V, reg c35:L, reg c37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg c40:L, reg r28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg c43:L, reg r30:V, reg substitute:cls, reg r31:V, reg is_call:cls, reg r32:V, reg c44:L, reg c45:V, reg c47:L, reg exprs1:*, reg exprs2:V, reg c48:L, reg exprs4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r33:V, reg dx2:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg r35:V, reg E1:*, reg E2:V, reg c49:L, reg c50:L, reg c52:V, reg E3:*, reg E4:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r36:V, reg c55:L, reg E7:V, reg r37:V, reg quote:cls, reg r38:V, reg r39:V, reg c56:L, reg c57:V, reg c59:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r40:V, reg r41:V, reg quote1:cls, reg r42:V, reg l:*, reg c60:L, reg r44:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg ____:cls, reg r47:V, reg exprs5:*, reg exprs6:V, reg exprs7:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r48:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r49:V, reg r50:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r51:V, reg r52:V, reg quote2:cls, reg r53:V, reg has_e4:*, reg has_e5:V, reg r54:V, reg c61:L, reg exprObject1:*, reg exprObject2:V, reg exprObject3:V, reg as_expression:cls, reg exprs8:*, reg exprs9:V, reg p2:p(V +), reg r56:V, reg c62:cls, reg r57:V, reg as_call:cls, reg r58:V, reg l3:*, reg names__:cls, reg r59:V, reg eval:cls, reg cl:*, reg cl1:V, reg p3:p(V +), reg envir:*, reg envir1:V, reg p4:p(V +), reg r62:V, reg r65:cls, reg r66:cls, reg r67:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r68:V, reg r69:V, reg n2:*, reg n3:V, reg r70:I, reg s:V, reg l4:I, reg i:I, reg i1:I, reg i2:I, reg c63:L, reg x:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r71:V, reg i7:I, reg r72:V, reg i8:*, reg i9:V, reg ___elt:cls, reg r73:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r74:V, reg i12:I, reg r75:V, reg r76:*, reg r77:V, reg c64:L, reg c65:L, reg i14:I, reg c67:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r78:V, reg i17:I, reg c70:L, reg r79:V, reg r80:*, reg r81:V, reg anyNA:cls, reg r82:V, reg r83:V, reg c71:L, reg c72:V, reg c74:L, reg i20:I, reg c76:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r84:V, reg i23:I, reg c79:L, reg r85:V, reg r86:*, reg r87:V, reg all:cls, reg r88:V, reg c80:L, reg c81:V, reg r89:V, reg c83:L, reg match_call:cls, reg r90:V, reg c84:L, reg i28:I, reg r92:V, reg dr4:V, reg dc2:L, reg dx5:V, reg i30:I, reg dx6:V, reg __1:cls, reg r93:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r94:V, reg i33:I, reg r95:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r96:V, reg i36:I, reg r97:V, reg dots:*, reg dots1:V, reg names:cls, reg r98:V, reg c85:V, reg c86:L, reg i37:I, reg c87:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r99:V, reg i41:I, reg c91:L, reg r100:V, reg msg:*, reg msg1:V, reg c92:L, reg i43:I, reg c94:L, reg msg3:V, reg dr6:V, reg dc3:L, reg dx7:V, reg i45:I, reg c96:L, reg dx8:V, reg i46:*, reg i47:V, reg __2:cls, reg r101:V, reg nzchar:cls, reg r102:V, reg r103:V, reg c97:L, reg c98:V, reg c100:L, reg dots2:*, reg dots3:V, reg c101:L, reg i52:I, reg dots5:V, reg dr8:V, reg dc4:L, reg dx9:V, reg i54:I, reg dx10:V, reg i55:*, reg i56:V, reg __3:cls, reg r104:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r105:V, reg i59:I, reg r106:V, reg cl_i:*, reg cl_i1:V, reg is_call1:cls, reg r107:V, reg c102:L, reg i61:I, reg c104:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r108:V, reg i64:I, reg c107:L, reg r109:V, reg pmatch:cls, reg sym23:cls, reg base23:cls, reg guard23:L, reg r110:V, reg r111:V, reg quote3:cls, reg r112:V, reg p5:p(V +), reg cl_i2:*, reg cl_i3:V, reg c108:L, reg cl_i5:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg __4:cls, reg r114:V, reg p6:p(V +), reg r116:V, reg identical:cls, reg r117:V, reg c109:L, reg c110:V, reg c112:L, reg i67:I, reg c114:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r118:V, reg i70:I, reg c117:L, reg r119:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r120:V, reg i73:I, reg c120:L, reg r121:V, reg cl_i6:*, reg cl_i7:V, reg names1:cls, reg r122:V, reg c121:V, reg c122:L, reg i74:I, reg c123:L, reg c124:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r123:V, reg i78:I, reg c131:L, reg c132:L, reg r124:V, reg cl_i8:*, reg cl_i9:V, reg length:cls, reg r125:V, reg r126:V, reg c133:L, reg c134:V, reg c137:L, reg i80:I, reg c138:L, reg c139:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r127:V, reg i84:I, reg c146:L, reg c147:L, reg r128:V, reg cl_i10:*, reg cl_i11:V, reg c148:L, reg i86:I, reg c151:L, reg c152:L, reg cl_i13:V, reg dr12:V, reg dc6:L, reg dx13:V, reg i88:I, reg c155:L, reg c156:L, reg dx14:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r129:V, reg i91:I, reg c161:L, reg c162:L, reg cl_i16:V, reg r130:V, reg ni:*, reg ni1:V, reg nzchar1:cls, reg r131:V, reg r132:V, reg __5:cls, reg r133:V, reg length1:cls, reg r134:V, reg r135:V, reg c163:L, reg c164:V, reg c167:L, reg c168:V, reg c170:L, reg sprintf:cls, reg gettext:cls, reg r136:V, reg p7:p(V +), reg Dparse:cls, reg cl_i17:*, reg cl_i18:V, reg c171:L, reg cl_i20:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg __6:cls, reg r138:V, reg p8:p(V +), reg r140:V, reg p9:p(V +), reg Dparse1:cls, reg cl_i21:*, reg cl_i22:V, reg c172:L, reg cl_i24:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg __7:cls, reg r142:V, reg p10:p(V +), reg r144:V, reg p11:p(V +), reg abbrev:cls, reg r146:*, reg r147:V, reg p12:p(V +), reg r149:V, reg p13:p(V +), reg r151:V, reg i96:I, reg r152:V, reg sprintf1:cls, reg ngettext:cls, reg sym29:cls, reg base29:cls, reg guard29:L, reg r153:V, reg r154:V, reg r155:*, reg r156:V, reg length2:cls, reg r157:V, reg p14:p(V +), reg r159:V, reg p15:p(V +), reg Dparse2:cls, reg cl_i25:*, reg cl_i26:V, reg p16:p(V +), reg r162:V, reg p17:p(V +), reg r164:V, reg i97:I, reg stop2:cls, reg simpleError:cls, reg msg4:*, reg msg5:V, reg p18:p(V +), reg sys_parent:cls, reg r167:V, reg c173:L, reg sys_call:cls, reg p19:*, reg p20:V, reg p21:p(V +), reg r169:V, reg p22:p(V +), reg r171:V, reg p23:p(V +), reg r173:V, reg i98:I, reg sym30:cls, reg base30:cls, reg guard30:L, reg r175:V, reg r176:V, reg invisible:cls, reg r177:V |
    mkenv;
    st `...` = ddd;
    st exprs = exprs;
    st exprObject = exprObject;
    local_isMissing = missing.0(local);
    if local_isMissing then L0(TRUE) else L0(local);
  L0(local_orDefault):
    st local = local_orDefault;
    sym = ldf `...length`;
    base = ldf `...length` in base;
    guard = `==`.4(sym, base);
    if guard then L69() else L70();
  L1(r1):
    st n = r1;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L72() else L73();
  L69():
    ___length = ldf `...length` in base;
    r2 = dyn ___length();
    check L71() else D0();
  L70():
    r = dyn base();
    goto L1(r);
  D0():
    deopt 3 [r2];
  L2(r4):
    r6 = `!`(r4);
    st `has.e` = r6;
    c = `as.logical`(r6);
    if c then L3(c) else L74();
  L71():
    goto L1(r2);
  L72():
    missing = ldf missing in base;
    r5 = dyn missing(<sym exprs>);
    goto L2(r5);
  L73():
    r3 = dyn base1(<sym exprs>);
    goto L2(r3);
  L3(c1):
    c9 = `as.logical`(c1);
    if c9 then L78() else L5();
  L74():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L75() else L76();
  L4(c5, r8):
    r10 = `!`(r8);
    c6 = `as.logical`(r10);
    c7 = `||`(c5, c6);
    goto L3(c7);
  L5():
    r65 = clos inner3447885460;
    st Dparse = r65;
    r66 = clos inner1794286971;
    st head = r66;
    r67 = clos inner3723081192;
    st abbrev = r67;
    sym13 = ldf seq_len;
    base13 = ldf seq_len in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L161() else L162();
  L75():
    missing1 = ldf missing in base;
    r9 = dyn missing1(<sym exprObject>);
    goto L4(c, r9);
  L76():
    r7 = dyn base2(<sym exprObject>);
    goto L4(c, r7);
  L78():
    n = ld n;
    check L79() else D1();
  D1():
    deopt 15 [n];
  L34(r69):
    s = toForSeq(r69);
    l4 = length(s);
    i = 0;
    goto L35(i);
  L79():
    n1 = force? n;
    checkMissing(n1);
    c10 = `as.logical`(n1);
    if c10 then L6(c10) else L80();
  L161():
    n2 = ld n;
    check L163() else D33();
  L162():
    r68 = dyn base13(<sym n>);
    goto L34(r68);
  D33():
    deopt 143 [n2];
  L6(c11):
    c31 = `as.logical`(c11);
    if c31 then L87() else L9();
  L35(i1):
    i2 = `+`.1(i1, 1);
    c63 = `<`.1(l4, i2);
    if c63 then L164() else L67();
  L80():
    has_e = ld `has.e`;
    check L81() else D2();
  L163():
    n3 = force? n2;
    checkMissing(n3);
    r70 = seq_len(n3);
    goto L34(r70);
  D2():
    deopt 17 [c10, has_e];
  L9():
    goto L10();
  L10():
    isTRUE = ldf isTRUE;
    check L91() else D5();
  L67():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym14 = ldf `...elt`;
    base14 = ldf `...elt` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L165() else L166();
  L81():
    has_e1 = force? has_e;
    checkMissing(has_e1);
    c13 = `as.logical`(has_e1);
    if c13 then L82() else L7(c10, c13);
  L87():
    stop = ldf stop;
    check L88() else D3();
  L164():
    sym30 = ldf invisible;
    base30 = ldf invisible in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L260() else L261();
  D3():
    deopt 26 [];
  D5():
    deopt 32 [];
  L7(c16, c17):
    c28 = `as.logical`(c17);
    c29 = `||`(c16, c28);
    goto L6(c29);
  L36(i7, r72):
    st r = r72;
    sym15 = ldf `is.logical`;
    base15 = ldf `is.logical` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L169() else L170();
  L68(r176):
    popenv;
    return r176;
  L82():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L83() else L84();
  L88():
    r15 = dyn stop("Only one of 'exprs', 'exprObject' or expressions, not more");
    check L89() else D4();
  L91():
    p = prom<V +>{
      local1 = ld local;
      local2 = force? local1;
      checkMissing(local2);
      return local2;
    };
    r18 = dyn isTRUE(p);
    check L92() else D6();
  L165():
    i8 = ld i;
    check L167() else D34();
  L166():
    r71 = dyn base14(<sym i>);
    goto L36(i2, r71);
  L260():
    invisible = ldf invisible in base;
    r177 = dyn invisible();
    check L262() else D69();
  L261():
    r175 = dyn base30();
    goto L68(r175);
  D4():
    deopt 28 [r15];
  D6():
    deopt 34 [r18];
  D34():
    deopt 148 [i2, i8];
  D69():
    deopt 295 [r177];
  L8(c22, c23, r12):
    r14 = `!`(r12);
    c24 = `as.logical`(r14);
    c25 = `&&`(c23, c24);
    goto L7(c22, c25);
  L37(i12, r75):
    c65 = `as.logical`(r75);
    if c65 then L172() else L38(i12, c65);
  L83():
    missing2 = ldf missing in base;
    r13 = dyn missing2(<sym exprObject>);
    goto L8(c10, c13, r13);
  L84():
    r11 = dyn base3(<sym exprObject>);
    goto L8(c10, c13, r11);
  L89():
    goto L10();
  L92():
    c32 = `as.logical`(r18);
    if c32 then L93() else L11();
  L167():
    i9 = force? i8;
    checkMissing(i9);
    ___elt = ldf `...elt` in base;
    r73 = dyn ___elt(i9);
    check L168() else D35();
  L169():
    r76 = ld r;
    check L171() else D36();
  L170():
    r74 = dyn base15(<sym r>);
    goto L37(i7, r74);
  L262():
    goto L68(r177);
  D35():
    deopt 151 [i2, r73];
  D36():
    deopt 154 [i7, r76];
  L11():
    isFALSE = ldf isFALSE;
    check L97() else D9();
  L12(r20):
    st envir = r20;
    has_e2 = ld `has.e`;
    check L111() else D17();
  L38(i14, c67):
    c74 = `as.logical`(c67);
    if c74 then L178() else L40(i14, c74);
  L93():
    parent_frame = ldf `parent.frame`;
    check L94() else D7();
  L168():
    goto L36(i2, r73);
  L171():
    r77 = force? r76;
    checkMissing(r77);
    c64 = `is.logical`(r77);
    goto L37(i7, c64);
  L172():
    sym16 = ldf anyNA;
    base16 = ldf anyNA in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L173() else L174();
  D7():
    deopt 36 [];
  D9():
    deopt 39 [];
  D17():
    deopt 57 [has_e2];
  L39(i17, c70, r79):
    r83 = `!`(r79);
    c71 = `as.logical`(r83);
    c72 = `&&`(c70, c71);
    goto L38(i17, c72);
  L40(i20, c76):
    r89 = `!`(c76);
    c83 = `as.logical`(r89);
    if c83 then L184() else L42();
  L94():
    r19 = dyn parent_frame();
    check L95() else D8();
  L97():
    p1 = prom<V +>{
      local3 = ld local;
      local4 = force? local3;
      checkMissing(local4);
      return local4;
    };
    r22 = dyn isFALSE(p1);
    check L98() else D10();
  L111():
    has_e3 = force? has_e2;
    checkMissing(has_e3);
    c35 = `as.logical`(has_e3);
    if c35 then L112() else L16(c35);
  L173():
    r80 = ld r;
    check L175() else D37();
  L174():
    r78 = dyn base16(<sym r>);
    goto L39(i12, c65, r78);
  L178():
    sym17 = ldf all;
    base17 = ldf all in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L179() else L180();
  D8():
    deopt 37 [r19];
  D10():
    deopt 41 [r22];
  D37():
    deopt 159 [i12, c65, r80];
  L16(c37):
    c47 = `as.logical`(c37);
    if c47 then L119() else L19();
  L41(i23, c79, r85):
    c80 = `as.logical`(r85);
    c81 = `&&`(c79, c80);
    goto L40(i23, c81);
  L42():
    goto L66(i20);
  L66(i98):
    goto L35(i98);
  L95():
    goto L12(r19);
  L98():
    c33 = `as.logical`(r22);
    if c33 then L99() else L13();
  L112():
    sym5 = ldf `is.call`;
    base5 = ldf `is.call` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L113() else L114();
  L175():
    r81 = force? r80;
    checkMissing(r81);
    anyNA = ldf anyNA in base;
    r82 = dyn anyNA(r81);
    check L176() else D38();
  L179():
    r86 = ld r;
    check L181() else D39();
  L180():
    r84 = dyn base17(<sym r>);
    goto L41(i14, c74, r84);
  L184():
    match_call = ldf `match.call`;
    check L185() else D41();
  D38():
    deopt 162 [i12, c65, r82];
  D39():
    deopt 167 [i14, c74, r86];
  D41():
    deopt 174 [i20];
  L13():
    sym4 = ldf `is.environment`;
    base4 = ldf `is.environment` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L102() else L103();
  L17(c40, r28):
    c44 = `as.logical`(r28);
    c45 = `&&`(c40, c44);
    goto L16(c45);
  L19():
    goto L21(NULL);
  L21(dx2):
    st E1 = dx2;
    sym7 = ldf `is.symbol`;
    base7 = ldf `is.symbol` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L125() else L126();
  L99():
    _GlobalEnv = ld `.GlobalEnv`;
    check L100() else D11();
  L113():
    sym6 = ldf substitute;
    base6 = ldf substitute in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L115() else L116();
  L114():
    r27 = dyn base5(<lang `<-`(exprs, substitute(exprs))>);
    goto L17(c35, r27);
  L119():
    exprs1 = ld exprs;
    check L120() else D19();
  L176():
    goto L39(i12, c65, r82);
  L181():
    r87 = force? r86;
    checkMissing(r87);
    all = ldf all in base;
    r88 = dyn all(r87);
    check L182() else D40();
  L185():
    r90 = dyn match_call();
    check L186() else D42();
  D11():
    deopt 42 [_GlobalEnv];
  D19():
    deopt 68 [exprs1];
  D40():
    deopt 170 [i14, c74, r88];
  D42():
    deopt 175 [i20, r90];
  L14(r24):
    c34 = `as.logical`(r24);
    if c34 then L106() else L15();
  L18(c43, r30):
    st exprs = r30;
    is_call = ldf `is.call` in base;
    r32 = dyn is_call(r30);
    check L117() else D18();
  L22(r35):
    c50 = `as.logical`(r35);
    if c50 then L128() else L23(c50);
  L100():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    goto L12(_GlobalEnv1);
  L102():
    local5 = ld local;
    check L104() else D12();
  L103():
    r23 = dyn base4(<sym local>);
    goto L14(r23);
  L115():
    substitute = ldf substitute in base;
    r31 = dyn substitute(<sym exprs>);
    goto L18(c35, r31);
  L116():
    r29 = dyn base6(<sym exprs>);
    goto L18(c35, r29);
  L120():
    exprs2 = force? exprs1;
    checkMissing(exprs2);
    c48 = `is.object`(exprs2);
    if c48 then L121() else L122(exprs2);
  L125():
    E1 = ld E1;
    check L127() else D20();
  L126():
    r34 = dyn base7(<sym E1>);
    goto L22(r34);
  L182():
    goto L41(i14, c74, r88);
  L186():
    c84 = `is.object`(r90);
    if c84 then L187() else L188(i20, r90);
  D12():
    deopt 46 [local5];
  D18():
    deopt 66 [c43, r32];
  D20():
    deopt 77 [E1];
  L15():
    stop1 = ldf stop;
    check L109() else D15();
  L20(dx1):
    goto L21(dx1);
  L23(c52):
    c59 = `as.logical`(c52);
    if c59 then L133() else L25();
  L43(i30, dx6):
    st dots = dx6;
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L190() else L191();
  L104():
    local6 = force? local5;
    checkMissing(local6);
    is_environment = ldf `is.environment` in base;
    r25 = dyn is_environment(local6);
    check L105() else D13();
  L106():
    local7 = ld local;
    check L107() else D14();
  L117():
    goto L17(c43, r32);
  L121():
    dr = tryDispatchBuiltin.1("[[", exprs2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L123() else L122(dr);
  L122(exprs4):
    __ = ldf `[[` in base;
    r33 = dyn __(exprs4, 1.0);
    goto L20(r33);
  L127():
    E2 = force? E1;
    checkMissing(E2);
    c49 = `is.symbol`(E2);
    goto L22(c49);
  L128():
    E3 = ld E1;
    check L129() else D21();
  L187():
    dr4 = tryDispatchBuiltin.1("[", r90);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L189() else L188(i20, dr4);
  L188(i28, r92):
    __1 = ldf `[` in base;
    r93 = dyn __1(r92, -1);
    goto L43(i28, r93);
  D13():
    deopt 49 [r25];
  D14():
    deopt 50 [local7];
  D15():
    deopt 53 [];
  D21():
    deopt 80 [c50, E3];
  L25():
    sym10 = ldf `as.call`;
    base10 = ldf `as.call` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L141() else L142();
  L28(exprs7):
    st cl = exprs7;
    l3 = ld cl;
    names__ = ldf `names<-`;
    check L155() else D29();
  L44(i33, r95):
    c86 = `as.logical`(r95);
    if c86 then L46(i33, c86) else L196();
  L105():
    goto L14(r25);
  L107():
    local8 = force? local7;
    checkMissing(local8);
    goto L12(local8);
  L109():
    r26 = dyn stop1("'local' must be TRUE, FALSE or an environment");
    check L110() else D16();
  L123():
    dx = getTryDispatchBuiltinValue(dr);
    goto L20(dx);
  L129():
    E4 = force? E3;
    checkMissing(E4);
    sym8 = ldf quote;
    base8 = ldf quote in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L130() else L131();
  L133():
    sym9 = ldf quote;
    base9 = ldf quote in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L134() else L135();
  L189():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L43(i20, dx5);
  L190():
    sym19 = ldf names;
    base19 = ldf names in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L192() else L193();
  L191():
    r94 = dyn base18(<lang `<-`(msg, names(dots))>);
    goto L44(i30, r94);
  D16():
    deopt 55 [r26];
  D29():
    deopt 120 [NULL, l3, NULL];
  L24(c55, E7, r37):
    r39 = `==`(E7, r37);
    c56 = `as.logical`(r39);
    c57 = `&&`(c55, c56);
    goto L23(c57);
  L26(r41):
    l = ld exprs;
    c60 = `is.object`(l);
    if c60 then L136() else L137(r41, l);
  L45(i36, r97):
    st msg = r97;
    c85 = `==`(r97, NULL);
    goto L44(i36, c85);
  L46(i37, c87):
    c100 = `as.logical`(c87);
    if c100 then L206() else L49();
  L110():
    goto L12(r26);
  L130():
    quote = ldf quote in base;
    r38 = dyn quote(<sym `{`>);
    goto L24(c50, E4, r38);
  L131():
    r36 = dyn base8(<sym `{`>);
    goto L24(c50, E4, r36);
  L134():
    quote1 = ldf quote in base;
    r42 = dyn quote1(<sym stopifnot>);
    goto L26(r42);
  L135():
    r40 = dyn base9(<sym stopifnot>);
    goto L26(r40);
  L141():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L143() else L144();
  L142():
    r48 = dyn base10(<lang c(quote(stopifnot), if(`!`(has.e), exprObject, as.expression(exprs)))>);
    goto L28(r48);
  L155():
    r59 = dyn names__(l3, NULL, NULL);
    check L156() else D30();
  L192():
    dots = ld dots;
    check L194() else D43();
  L193():
    r96 = dyn base19(<sym dots>);
    goto L45(i30, r96);
  L196():
    sym20 = ldf nzchar;
    base20 = ldf nzchar in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L197() else L198();
  D30():
    deopt 122 [NULL, r59];
  D43():
    deopt 183 [i30, dots];
  L27(dx4):
    st exprs = dx4;
    exprs5 = ld exprs;
    check L139() else D22();
  L29(r50):
    as_call = ldf `as.call` in base;
    r58 = dyn as_call(r50);
    check L154() else D28();
  L47(i41, c91, r100):
    r103 = `!`(r100);
    c97 = `as.logical`(r103);
    c98 = `||`(c91, c97);
    goto L46(i41, c98);
  L49():
    goto L65(i37);
  L65(i97):
    stop2 = ldf stop;
    check L257() else D67();
  L136():
    dr2 = tryDispatchBuiltin.0("[[<-", l, r41);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L138() else L137(r41, dr2);
  L137(r44, l2):
    ____ = ldf `[[<-` in base;
    r47 = dyn ____(l2, r41, 1.0);
    goto L27(r47);
  L143():
    sym12 = ldf quote;
    base12 = ldf quote in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L145() else L146();
  L144():
    r49 = dyn base11(<lang quote(stopifnot)>, <lang if(`!`(has.e), exprObject, as.expression(exprs))>);
    goto L29(r49);
  L156():
    st cl = r59;
    eval = ldf eval;
    check L157() else D31();
  L194():
    dots1 = force? dots;
    checkMissing(dots1);
    names = ldf names in base;
    r98 = dyn names(dots1);
    check L195() else D44();
  L197():
    msg = ld msg;
    check L199() else D45();
  L198():
    r99 = dyn base20(<lang `<-`(msg, `[`(msg, i))>);
    goto L47(i33, c86, r99);
  L206():
    dots2 = ld dots;
    check L207() else D48();
  D22():
    deopt 94 [exprs5];
  D28():
    deopt 115 [r58];
  D31():
    deopt 125 [];
  D44():
    deopt 186 [i30, r98];
  D45():
    deopt 191 [i33, c86, msg];
  D48():
    deopt 201 [i37, dots2];
  D67():
    deopt 284 [i97];
  L30(r52):
    has_e4 = ld `has.e`;
    check L147() else D23();
  L138():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L27(dx3);
  L139():
    exprs6 = force? exprs5;
    checkMissing(exprs6);
    goto L28(exprs6);
  L145():
    quote2 = ldf quote in base;
    r53 = dyn quote2(<sym stopifnot>);
    goto L30(r53);
  L146():
    r51 = dyn base12(<sym stopifnot>);
    goto L30(r51);
  L154():
    goto L28(r58);
  L157():
    p3 = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    p4 = prom<V +>{
      envir = ld envir;
      envir1 = force? envir;
      checkMissing(envir1);
      return envir1;
    };
    r62 = dyn eval[, envir](p3, p4);
    check L158() else D32();
  L195():
    goto L45(i30, r98);
  L199():
    msg1 = force? msg;
    checkMissing(msg1);
    c92 = `is.object`(msg1);
    if c92 then L200() else L201(i33, c86, msg1);
  L207():
    dots3 = force? dots2;
    checkMissing(dots3);
    c101 = `is.object`(dots3);
    if c101 then L208() else L209(i37, dots3);
  L257():
    p23 = prom<V +>{
      simpleError = ldf simpleError;
      p18 = prom<V +>{
        msg4 = ld msg;
        msg5 = force? msg4;
        checkMissing(msg5);
        return msg5;
      };
      p22 = prom<V +>{
        sys_parent = ldf `sys.parent`;
        r167 = dyn sys_parent(1);
        st p = r167;
        c173 = `as.logical`(r167);
        if c173 then L1() else L0();
      L0():
        invisible.0();
        return NULL;
      L1():
        sys_call = ldf `sys.call`;
        p21 = prom<V +>{
          p19 = ld p;
          p20 = force? p19;
          checkMissing(p20);
          return p20;
        };
        r169 = dyn sys_call(p21);
        return r169;
      };
      r171 = dyn simpleError[, call](p18, p22);
      return r171;
    };
    r173 = dyn stop2(p23);
    check L258() else D68();
  D23():
    deopt 103 [has_e4];
  D32():
    deopt 129 [r62];
  D68():
    deopt 286 [i97, r173];
  L48(i45, c96, dx8):
    st msg = dx8;
    nzchar = ldf nzchar in base;
    r102 = dyn nzchar(dx8);
    check L204() else D47();
  L50(i54, dx10):
    st `cl.i` = dx10;
    sym21 = ldf `is.call`;
    base21 = ldf `is.call` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L212() else L213();
  L147():
    has_e5 = force? has_e4;
    checkMissing(has_e5);
    r54 = `!`(has_e5);
    c61 = `as.logical`(r54);
    if c61 then L148() else L31();
  L158():
    popenv;
    return r62;
  L200():
    dr6 = tryDispatchBuiltin.1("[", msg1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L202() else L201(i33, c86, dr6);
  L201(i43, c94, msg3):
    i46 = ld i;
    check L203() else D46();
  L208():
    dr8 = tryDispatchBuiltin.1("[[", dots3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L210() else L209(i37, dr8);
  L209(i52, dots5):
    i55 = ld i;
    check L211() else D49();
  L258():
    goto L66(i97);
  D46():
    deopt 193 [i43, c94, msg3, i46];
  D47():
    deopt 198 [i45, c96, r102];
  D49():
    deopt 203 [i52, dots5, i55];
  L31():
    as_expression = ldf `as.expression`;
    check L151() else D25();
  L32(exprObject3):
    c62 = ldf c in base;
    r57 = dyn c62(r52, exprObject3);
    check L153() else D27();
  L51(i59, r106):
    c102 = `as.logical`(r106);
    if c102 then L216() else L52(i59, c102);
  L148():
    exprObject1 = ld exprObject;
    check L149() else D24();
  L202():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L48(i33, c86, dx7);
  L203():
    i47 = force? i46;
    __2 = ldf `[` in base;
    r101 = dyn __2(msg3, i47);
    goto L48(i43, c94, r101);
  L204():
    goto L47(i45, c96, r102);
  L210():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L50(i37, dx9);
  L211():
    i56 = force? i55;
    __3 = ldf `[[` in base;
    r104 = dyn __3(dots5, i56);
    goto L50(i52, r104);
  L212():
    cl_i = ld `cl.i`;
    check L214() else D50();
  L213():
    r105 = dyn base21(<sym cl.i>);
    goto L51(i54, r105);
  D24():
    deopt 106 [exprObject1];
  D25():
    deopt 109 [];
  D27():
    deopt 113 [r57];
  D50():
    deopt 209 [i54, cl_i];
  L52(i61, c104):
    c112 = `as.logical`(c104);
    if c112 then L223() else L54(i61, c112);
  L149():
    exprObject2 = force? exprObject1;
    checkMissing(exprObject2);
    goto L32(exprObject2);
  L151():
    p2 = prom<V +>{
      exprs8 = ld exprs;
      exprs9 = force? exprs8;
      checkMissing(exprs9);
      return exprs9;
    };
    r56 = dyn as_expression(p2);
    check L152() else D26();
  L153():
    goto L29(r57);
  L214():
    cl_i1 = force? cl_i;
    checkMissing(cl_i1);
    is_call1 = ldf `is.call` in base;
    r107 = dyn is_call1(cl_i1);
    check L215() else D51();
  L216():
    sym22 = ldf identical;
    base22 = ldf identical in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L217() else L218();
  D26():
    deopt 111 [r56];
  D51():
    deopt 212 [i54, r107];
  L53(i64, c107, r109):
    c109 = `as.logical`(r109);
    c110 = `&&`(c107, c109);
    goto L52(i64, c110);
  L54(i67, c114):
    c170 = `as.logical`(c114);
    if c170 then L250() else L63();
  L152():
    goto L32(r56);
  L215():
    goto L51(i54, r107);
  L217():
    pmatch = ldf pmatch;
    check L219() else D52();
  L218():
    r108 = dyn base22(1, <lang pmatch(quote(all.equal), `[[`(cl.i, 1.0))>);
    goto L53(i59, c102, r108);
  L223():
    sym24 = ldf `is.null`;
    base24 = ldf `is.null` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L224() else L225();
  D52():
    deopt 217 [i59, c102];
  L55(i70, c117, r119):
    c122 = `as.logical`(r119);
    if c122 then L57(i70, c117, c122) else L230();
  L63():
    sprintf1 = ldf sprintf;
    check L254() else D65();
  L64(i96, r152):
    st msg = r152;
    goto L65(i96);
  L219():
    p5 = prom<V +>{
      sym23 = ldf quote;
      base23 = ldf quote in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L1() else L2();
    L0(r111):
      return r111;
    L1():
      quote3 = ldf quote in base;
      r112 = dyn quote3(<sym all.equal>);
      goto L0(r112);
    L2():
      r110 = dyn base23(<sym all.equal>);
      goto L0(r110);
    };
    p6 = prom<V +>{
      cl_i2 = ld `cl.i`;
      cl_i3 = force? cl_i2;
      checkMissing(cl_i3);
      c108 = `is.object`(cl_i3);
      if c108 then L1() else L2(cl_i3);
    L0(dx12):
      return dx12;
    L1():
      dr10 = tryDispatchBuiltin.1("[[", cl_i3);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(cl_i5):
      __4 = ldf `[[` in base;
      r114 = dyn __4(cl_i5, 1.0);
      goto L0(r114);
    L3():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx11);
    };
    r116 = dyn pmatch(p5, p6);
    check L220() else D53();
  L224():
    sym25 = ldf names;
    base25 = ldf names in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L226() else L227();
  L225():
    r118 = dyn base24(<lang `<-`(ni, names(cl.i))>);
    goto L55(i61, c112, r118);
  L250():
    sprintf = ldf sprintf;
    check L251() else D63();
  D53():
    deopt 220 [i59, c102, r116];
  D63():
    deopt 269 [i67];
  D65():
    deopt 276 [i67];
  L56(i73, c120, r121):
    st ni = r121;
    c121 = `==`(r121, NULL);
    goto L55(i73, c120, c121);
  L57(i74, c123, c124):
    c137 = `as.logical`(c124);
    if c137 then L59(i74, c123, c137) else L236();
  L220():
    identical = ldf identical in base;
    r117 = dyn identical(1, r116, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L221() else D54();
  L226():
    cl_i6 = ld `cl.i`;
    check L228() else D55();
  L227():
    r120 = dyn base25(<sym cl.i>);
    goto L56(i61, c112, r120);
  L230():
    sym26 = ldf length;
    base26 = ldf length in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L231() else L232();
  L251():
    p7 = prom<V +>{
      gettext = ldf gettext;
      r136 = dyn gettext("%s and %s are not equal:\n  %s");
      return r136;
    };
    p9 = prom<V +>{
      Dparse = ldf Dparse;
      p8 = prom<V +>{
        cl_i17 = ld `cl.i`;
        cl_i18 = force? cl_i17;
        checkMissing(cl_i18);
        c171 = `is.object`(cl_i18);
        if c171 then L1() else L2(cl_i18);
      L0(dx16):
        return dx16;
      L1():
        dr14 = tryDispatchBuiltin.1("[[", cl_i18);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(cl_i20):
        __6 = ldf `[[` in base;
        r138 = dyn __6(cl_i20, 2.0);
        goto L0(r138);
      L3():
        dx15 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx15);
      };
      r140 = dyn Dparse(p8);
      return r140;
    };
    p11 = prom<V +>{
      Dparse1 = ldf Dparse;
      p10 = prom<V +>{
        cl_i21 = ld `cl.i`;
        cl_i22 = force? cl_i21;
        checkMissing(cl_i22);
        c172 = `is.object`(cl_i22);
        if c172 then L1() else L2(cl_i22);
      L0(dx18):
        return dx18;
      L1():
        dr16 = tryDispatchBuiltin.1("[[", cl_i22);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(cl_i24):
        __7 = ldf `[[` in base;
        r142 = dyn __7(cl_i24, 3.0);
        goto L0(r142);
      L3():
        dx17 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx17);
      };
      r144 = dyn Dparse1(p10);
      return r144;
    };
    p13 = prom<V +>{
      abbrev = ldf abbrev;
      p12 = prom<V +>{
        r146 = ld r;
        r147 = force? r146;
        checkMissing(r147);
        return r147;
      };
      r149 = dyn abbrev(p12);
      return r149;
    };
    r151 = dyn sprintf(p7, p9, p11, p13);
    check L252() else D64();
  L254():
    p15 = prom<V +>{
      ngettext = ldf ngettext;
      p14 = prom<V +>{
        sym29 = ldf length;
        base29 = ldf length in base;
        guard29 = `==`.4(sym29, base29);
        if guard29 then L1() else L2();
      L0(r154):
        return r154;
      L1():
        r155 = ld r;
        r156 = force? r155;
        checkMissing(r156);
        length2 = ldf length in base;
        r157 = dyn length2(r156);
        goto L0(r157);
      L2():
        r153 = dyn base29(<sym r>);
        goto L0(r153);
      };
      r159 = dyn ngettext(p14, "%s is not TRUE", "%s are not all TRUE");
      return r159;
    };
    p17 = prom<V +>{
      Dparse2 = ldf Dparse;
      p16 = prom<V +>{
        cl_i25 = ld `cl.i`;
        cl_i26 = force? cl_i25;
        checkMissing(cl_i26);
        return cl_i26;
      };
      r162 = dyn Dparse2(p16);
      return r162;
    };
    r164 = dyn sprintf1(p15, p17);
    check L255() else D66();
  D54():
    deopt 229 [i59, c102, r117];
  D55():
    deopt 234 [i61, c112, cl_i6];
  D64():
    deopt 274 [i67, r151];
  D66():
    deopt 279 [i67, r164];
  L58(i78, c131, c132, r124):
    r126 = `==`(r124, 3);
    c133 = `as.logical`(r126);
    c134 = `||`(c132, c133);
    goto L57(i78, c131, c134);
  L59(i80, c138, c139):
    c167 = `as.logical`(c139);
    c168 = `&&`(c138, c167);
    goto L54(i80, c168);
  L221():
    goto L53(i59, c102, r117);
  L228():
    cl_i7 = force? cl_i6;
    checkMissing(cl_i7);
    names1 = ldf names in base;
    r122 = dyn names1(cl_i7);
    check L229() else D56();
  L231():
    cl_i8 = ld `cl.i`;
    check L233() else D57();
  L232():
    r123 = dyn base26(<sym cl.i>);
    goto L58(i70, c117, c122, r123);
  L236():
    sym27 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L237() else L238();
  L252():
    goto L64(i67, r151);
  L255():
    goto L64(i67, r164);
  D56():
    deopt 237 [i61, c112, r122];
  D57():
    deopt 242 [i70, c117, c122, cl_i8];
  L60(i84, c146, c147, r128):
    r135 = `==`(r128, 3);
    c163 = `as.logical`(r135);
    c164 = `||`(c147, c163);
    goto L59(i84, c146, c164);
  L229():
    goto L56(i61, c112, r122);
  L233():
    cl_i9 = force? cl_i8;
    checkMissing(cl_i9);
    length = ldf length in base;
    r125 = dyn length(cl_i9);
    check L234() else D58();
  L237():
    cl_i10 = ld `cl.i`;
    check L239() else D59();
  L238():
    r127 = dyn base27(<lang `<-`(cl.i, `[`(cl.i, `!`(nzchar(ni))))>);
    goto L60(i74, c123, c137, r127);
  D58():
    deopt 245 [i70, c117, c122, r125];
  D59():
    deopt 251 [i74, c123, c137, cl_i10];
  L234():
    goto L58(i70, c117, c122, r125);
  L239():
    cl_i11 = force? cl_i10;
    checkMissing(cl_i11);
    c148 = `is.object`(cl_i11);
    if c148 then L240() else L241(i74, c123, c137, cl_i11);
  L61(i88, c155, c156, dx14):
    st `cl.i` = dx14;
    length1 = ldf length in base;
    r134 = dyn length1(dx14);
    check L247() else D62();
  L240():
    dr12 = tryDispatchBuiltin.1("[", cl_i11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L242() else L241(i74, c123, c137, dr12);
  L241(i86, c151, c152, cl_i13):
    sym28 = ldf nzchar;
    base28 = ldf nzchar in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L243() else L244();
  D62():
    deopt 263 [i88, c155, c156, r134];
  L62(i91, c161, c162, cl_i16, r130):
    r132 = `!`(r130);
    __5 = ldf `[` in base;
    r133 = dyn __5(cl_i16, r132);
    goto L61(i91, c161, c162, r133);
  L242():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L61(i74, c123, c137, dx13);
  L243():
    ni = ld ni;
    check L245() else D60();
  L244():
    r129 = dyn base28(<sym ni>);
    goto L62(i86, c151, c152, cl_i13, r129);
  L247():
    goto L60(i88, c155, c156, r134);
  D60():
    deopt 255 [i86, c151, c152, cl_i13, ni];
  L245():
    ni1 = force? ni;
    checkMissing(ni1);
    nzchar1 = ldf nzchar in base;
    r131 = dyn nzchar1(ni1);
    check L246() else D61();
  D61():
    deopt 258 [i86, c151, c152, cl_i13, r131];
  L246():
    goto L62(i86, c151, c152, cl_i13, r131);
  }
}
fun inner3447885460(call, cutoff) {
  (reg call:*, reg cutoff:*) -+> V { var call:*, var cutoff:*, reg cutoff_isMissing:L, reg cutoff_orDefault:*, reg deparse:cls, reg call1:*, reg call2:V, reg p:p(V +), reg cutoff1:*, reg cutoff2:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg ch:*, reg ch1:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg paste:cls, reg ch2:*, reg ch3:V, reg c1:L, reg ch5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg ch6:*, reg ch7:V |
    mkenv;
    st call = call;
    cutoff_isMissing = missing.0(cutoff);
    if cutoff_isMissing then L0(60) else L0(cutoff);
  L0(cutoff_orDefault):
    st cutoff = cutoff_orDefault;
    deparse = ldf deparse;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      call1 = ld call;
      call2 = force? call1;
      checkMissing(call2);
      return call2;
    };
    p1 = prom<V +>{
      cutoff1 = ld cutoff;
      cutoff2 = force? cutoff1;
      checkMissing(cutoff2);
      return cutoff2;
    };
    r2 = dyn deparse[, `width.cutoff`](p, p1);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    st ch = r2;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(r4):
    r6 = `>`(r4, 1);
    c = `as.logical`(r6);
    if c then L9() else L2();
  L5():
    ch = ld ch;
    check L7() else D2();
  L6():
    r3 = dyn base(<sym ch>);
    goto L1(r3);
  D2():
    deopt 9 [ch];
  L2():
    ch6 = ld ch;
    check L13() else D6();
  L7():
    ch1 = force? ch;
    checkMissing(ch1);
    length = ldf length in base;
    r5 = dyn length(ch1);
    check L8() else D3();
  L9():
    paste = ldf paste;
    check L10() else D4();
  D3():
    deopt 12 [r5];
  D4():
    deopt 16 [];
  D6():
    deopt 20 [ch6];
  L8():
    goto L1(r5);
  L10():
    p2 = prom<V +>{
      ch2 = ld ch;
      ch3 = force? ch2;
      checkMissing(ch3);
      c1 = `is.object`(ch3);
      if c1 then L1() else L2(ch3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", ch3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(ch5):
      __ = ldf `[` in base;
      r7 = dyn __(ch5, 1);
      goto L0(r7);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r9 = dyn paste(p2, "....");
    check L11() else D5();
  L13():
    ch7 = force? ch6;
    checkMissing(ch7);
    popenv;
    return ch7;
  D5():
    deopt 19 [r9];
  L11():
    popenv;
    return r9;
  }
}
fun inner1794286971(x, n) {
  (reg x:*, reg n:*) -+> V { var x:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg x7:V, reg r1:V, reg n1:*, reg n2:V, reg r2:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg x12:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg x15:V, reg r6:V, reg x16:*, reg x17:V, reg length:cls, reg r7:V, reg n3:*, reg n4:V, reg r8:V, reg max:cls, reg r9:V, reg x18:V, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg n5:*, reg n6:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg x23:V, reg r13:V, reg x24:*, reg x25:V, reg length1:cls, reg r14:V, reg min:cls, reg r15:V, reg r16:I, reg __:cls, reg r17:V |
    mkenv;
    st x = x;
    n_isMissing = missing.0(n);
    if n_isMissing then L0(6) else L0(n);
  L0(n_orDefault):
    st n = n_orDefault;
    x1 = ld x;
    check L8() else D0();
  D0():
    deopt 0 [x1];
  L8():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L9() else L10(x2);
  L1(dx1):
    popenv;
    return dx1;
  L9():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(x4):
    sym = ldf seq_len;
    base = ldf seq_len in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L2(x7, r1):
    __ = ldf `[` in base;
    r17 = dyn __(x7, r1);
    goto L1(r17);
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L12():
    n1 = ld n;
    check L14() else D1();
  L13():
    r = dyn base(<lang if(`<`(n, 0), max(`+`(length(x), n), 0), min(n, length(x)))>);
    goto L2(x4, r);
  D1():
    deopt 3 [x4, n1];
  L14():
    n2 = force? n1;
    checkMissing(n2);
    r2 = `<`(n2, 0);
    c1 = `as.logical`(r2);
    if c1 then L15() else L3();
  L3():
    sym3 = ldf min;
    base3 = ldf min in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  L6(x18, r10):
    r16 = seq_len(r10);
    goto L2(x18, r16);
  L15():
    sym1 = ldf max;
    base1 = ldf max in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L4(x12, r4):
    goto L6(x12, r4);
  L16():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L17():
    r3 = dyn base1(<lang `+`(length(x), n)>, 0);
    goto L4(x4, r3);
  L25():
    n5 = ld n;
    check L27() else D6();
  L26():
    r11 = dyn base3(<sym n>, <lang length(x)>);
    goto L6(x4, r11);
  D6():
    deopt 22 [x4, n5];
  L5(x15, r6):
    n3 = ld n;
    check L22() else D4();
  L18():
    x16 = ld x;
    check L20() else D2();
  L19():
    r5 = dyn base2(<sym x>);
    goto L5(x4, r5);
  L27():
    n6 = force? n5;
    checkMissing(n6);
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L28() else L29();
  D2():
    deopt 11 [x4, x16];
  D4():
    deopt 14 [x15, r6, n3];
  L7(x23, r13):
    min = ldf min in base;
    r15 = dyn min(n6, r13);
    check L32() else D9();
  L20():
    x17 = force? x16;
    checkMissing(x17);
    length = ldf length in base;
    r7 = dyn length(x17);
    check L21() else D3();
  L22():
    n4 = force? n3;
    checkMissing(n4);
    r8 = `+`(r6, n4);
    max = ldf max in base;
    r9 = dyn max(r8, 0);
    check L23() else D5();
  L28():
    x24 = ld x;
    check L30() else D7();
  L29():
    r12 = dyn base4(<sym x>);
    goto L7(x4, r12);
  D3():
    deopt 14 [x4, r7];
  D5():
    deopt 19 [x15, r9];
  D7():
    deopt 26 [x4, x24];
  D9():
    deopt 31 [x23, r15];
  L21():
    goto L5(x4, r7);
  L23():
    goto L4(x15, r9);
  L30():
    x25 = force? x24;
    checkMissing(x25);
    length1 = ldf length in base;
    r14 = dyn length1(x25);
    check L31() else D8();
  L32():
    goto L6(x23, r15);
  D8():
    deopt 29 [x4, r14];
  L31():
    goto L7(x4, r14);
  }
}
fun inner3723081192(ae, n) {
  (reg ae:*, reg n:*) -+> V { var ae:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, reg paste:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg head:cls, reg ae1:*, reg ae2:V, reg p:p(V +), reg n1:*, reg n2:V, reg p1:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg ae3:*, reg ae4:V, reg length:cls, reg r7:V, reg n3:*, reg n4:V, reg r8:V, reg c:L, reg r9:V, reg c1:cls, reg r10:V, reg p2:p(V +), reg r12:V |
    mkenv;
    st ae = ae;
    n_isMissing = missing.0(n);
    if n_isMissing then L0(3) else L0(n);
  L0(n_orDefault):
    st n = n_orDefault;
    paste = ldf paste;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L4() else L5();
    L0(r1):
      return r1;
    L4():
      head = ldf head;
      p = prom<V +>{
        ae1 = ld ae;
        ae2 = force? ae1;
        checkMissing(ae2);
        return ae2;
      };
      p1 = prom<V +>{
        n1 = ld n;
        n2 = force? n1;
        checkMissing(n2);
        return n2;
      };
      r4 = dyn head(p, p1);
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L6() else L7();
    L5():
      r = dyn base(<lang head(ae, n)>, <lang if(`>`(length(ae), n), "....")>);
      goto L0(r);
    L1(r6):
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      r8 = `>`(r6, n4);
      c = `as.logical`(r8);
      if c then L8() else L2();
    L6():
      ae3 = ld ae;
      ae4 = force? ae3;
      checkMissing(ae4);
      length = ldf length in base;
      r7 = dyn length(ae4);
      goto L1(r7);
    L7():
      r5 = dyn base1(<sym ae>);
      goto L1(r5);
    L2():
      goto L3(NULL);
    L3(r9):
      c1 = ldf c in base;
      r10 = dyn c1(r4, r9);
      goto L0(r10);
    L8():
      goto L3("....");
    };
    r12 = dyn paste[, collapse](p2, "\n  ");
    check L2() else D1();
  D1():
    deopt 5 [r12];
  L2():
    popenv;
    return r12;
  }
}
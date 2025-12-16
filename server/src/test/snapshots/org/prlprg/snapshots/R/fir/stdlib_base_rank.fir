fun main() {
  () -+> V { reg r:cls, reg rank:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg letters:*, reg letters1:V, reg c2:L, reg letters3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r9:V, reg __:cls, reg r10:V, reg l:*, reg names__:cls, reg r11:V, reg rank1:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg r13:V, reg stopifnot:cls, reg rank2:cls, reg r14:*, reg r15:V, reg p2:p(V +), reg r17:V, reg r18:*, reg r19:V, reg r20:V, reg p3:p(V +), reg rank3:cls, reg r22:*, reg r23:V, reg p4:p(V +), reg r25:V, reg r26:*, reg r27:V, reg r28:V, reg p5:p(V +), reg r30:V, reg rank4:cls, reg x4:*, reg x5:V, reg p6:p(V +), reg r32:V, reg rank5:cls, reg x6:*, reg x7:V, reg p7:p(V +), reg r34:V, reg rank6:cls, reg x8:*, reg x9:V, reg p8:p(V +), reg r36:V, reg rank7:cls, reg x10:*, reg x11:V, reg p9:p(V +), reg r38:V, reg rank8:cls, reg x12:*, reg x13:V, reg p10:p(V +), reg r40:V, reg rank9:cls, reg x14:*, reg x15:V, reg p11:p(V +), reg r42:V, reg stopifnot1:cls, reg rma:*, reg rma1:V, reg rmi:*, reg rmi1:V, reg r43:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r46:V, reg r47:V, reg r48:V, reg round:cls, reg r49:V, reg r50:V, reg p12:p(V +), reg r52:V, reg eval:cls, reg formals:cls, reg rank10:*, reg rank11:V, reg p13:p(V +), reg r54:V, reg c3:L, reg r56:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r57:V, reg p14:p(V +), reg r59:V, reg sapply:cls, reg tMeth:*, reg tMeth1:V, reg p15:p(V +), reg r61:cls, reg p16:p(V +), reg r63:V, reg cbind:cls, reg x16:*, reg x17:V, reg p17:p(V +), reg rx2:*, reg rx3:V, reg p18:p(V +), reg r66:V, reg sample:cls, reg r67:V, reg sapply1:cls, reg tMeth2:*, reg tMeth3:V, reg p19:p(V +), reg r69:cls, reg p20:p(V +), reg r71:V, reg stopifnot2:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r72:V, reg r73:V, reg rx4:*, reg rx5:V, reg c4:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r74:V, reg rx8:*, reg rx9:V, reg r75:V, reg all:cls, reg r76:V, reg p21:p(V +), reg r78:V |
    mkenv;
    r = clos inner513354912;
    st rank = r;
    rank = ldf rank;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      st x1 = r2;
      invisible.0();
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(3.0, 1.0, 4.0, 15.0, 92.0);
      goto L0(r3);
    L2():
      r1 = dyn base(3.0, 1.0, 4.0, 15.0, 92.0);
      goto L0(r1);
    };
    r5 = dyn rank(p);
    check L3() else D1();
  D1():
    deopt 6 [r5];
  L3():
    st r1 = r5;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L0(r7):
    st x2 = r7;
    letters = ld letters;
    check L7() else D3();
  L4():
    c1 = ldf c in base;
    r8 = dyn c1(3.0, 1.0, 4.0, 1.0, 5.0, 9.0, 2.0, 6.0, 5.0, 3.0, 5.0);
    check L6() else D2();
  L5():
    r6 = dyn base1(3.0, 1.0, 4.0, 1.0, 5.0, 9.0, 2.0, 6.0, 5.0, 3.0, 5.0);
    goto L0(r6);
  D2():
    deopt 22 [r8];
  D3():
    deopt 24 [letters];
  L6():
    goto L0(r8);
  L7():
    letters1 = force? letters;
    checkMissing(letters1);
    c2 = `is.object`(letters1);
    if c2 then L8() else L9(letters1);
  L1(dx1):
    l = ld x2;
    names__ = ldf `names<-`;
    check L11() else D4();
  L8():
    dr = tryDispatchBuiltin.1("[", letters1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(letters3):
    r9 = `:`(1.0, 11.0);
    __ = ldf `[` in base;
    r10 = dyn __(letters3, r9);
    goto L1(r10);
  D4():
    deopt 32 [dx1, l, dx1];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L11():
    r11 = dyn names__(l, NULL, dx1);
    check L12() else D5();
  D5():
    deopt 34 [dx1, r11];
  L12():
    st x2 = r11;
    rank1 = ldf rank;
    check L13() else D6();
  D6():
    deopt 37 [];
  L13():
    p1 = prom<V +>{
      x2 = ld x2;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r13 = dyn rank1(p1);
    check L14() else D7();
  D7():
    deopt 39 [r13];
  L14():
    st r2 = r13;
    stopifnot = ldf stopifnot;
    check L15() else D8();
  D8():
    deopt 42 [];
  L15():
    p3 = prom<V +>{
      rank2 = ldf rank;
      p2 = prom<V +>{
        r14 = ld r1;
        r15 = force? r14;
        checkMissing(r15);
        return r15;
      };
      r17 = dyn rank2(p2);
      r18 = ld r1;
      r19 = force? r18;
      checkMissing(r19);
      r20 = `==`(r17, r19);
      return r20;
    };
    p5 = prom<V +>{
      rank3 = ldf rank;
      p4 = prom<V +>{
        r22 = ld r2;
        r23 = force? r22;
        checkMissing(r23);
        return r23;
      };
      r25 = dyn rank3(p4);
      r26 = ld r2;
      r27 = force? r26;
      checkMissing(r27);
      r28 = `==`(r25, r27);
      return r28;
    };
    r30 = dyn stopifnot(p3, p5);
    check L16() else D9();
  D9():
    deopt 45 [r30];
  L16():
    rank4 = ldf rank;
    check L17() else D10();
  D10():
    deopt 47 [];
  L17():
    p6 = prom<V +>{
      x4 = ld x2;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r32 = dyn rank4[, `ties.method`](p6, "first");
    check L18() else D11();
  D11():
    deopt 51 [r32];
  L18():
    rank5 = ldf rank;
    check L19() else D12();
  D12():
    deopt 53 [];
  L19():
    p7 = prom<V +>{
      x6 = ld x2;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r34 = dyn rank5[, `ties.method`](p7, "last");
    check L20() else D13();
  D13():
    deopt 57 [r34];
  L20():
    rank6 = ldf rank;
    check L21() else D14();
  D14():
    deopt 59 [];
  L21():
    p8 = prom<V +>{
      x8 = ld x2;
      x9 = force? x8;
      checkMissing(x9);
      return x9;
    };
    r36 = dyn rank6[, `ties.method`](p8, "random");
    check L22() else D15();
  D15():
    deopt 63 [r36];
  L22():
    rank7 = ldf rank;
    check L23() else D16();
  D16():
    deopt 65 [];
  L23():
    p9 = prom<V +>{
      x10 = ld x2;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    r38 = dyn rank7[, `ties.method`](p9, "random");
    check L24() else D17();
  D17():
    deopt 69 [r38];
  L24():
    rank8 = ldf rank;
    check L25() else D18();
  D18():
    deopt 71 [];
  L25():
    p10 = prom<V +>{
      x12 = ld x2;
      x13 = force? x12;
      checkMissing(x13);
      return x13;
    };
    r40 = dyn rank8[, `ties.method`](p10, "max");
    check L26() else D19();
  D19():
    deopt 75 [r40];
  L26():
    st rma = r40;
    rank9 = ldf rank;
    check L27() else D20();
  D20():
    deopt 78 [];
  L27():
    p11 = prom<V +>{
      x14 = ld x2;
      x15 = force? x14;
      checkMissing(x15);
      return x15;
    };
    r42 = dyn rank9[, `ties.method`](p11, "min");
    check L28() else D21();
  D21():
    deopt 82 [r42];
  L28():
    st rmi = r42;
    stopifnot1 = ldf stopifnot;
    check L29() else D22();
  D22():
    deopt 85 [];
  L29():
    p12 = prom<V +>{
      rma = ld rma;
      rma1 = force? rma;
      checkMissing(rma1);
      rmi = ld rmi;
      rmi1 = force? rmi;
      checkMissing(rmi1);
      r43 = `+`(rma1, rmi1);
      sym2 = ldf round;
      base2 = ldf round in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r47, r48):
      r50 = `==`(r47, r48);
      return r50;
    L1():
      round = ldf round in base;
      r49 = dyn round(<lang `+`(r2, r2)>);
      goto L0(r43, r49);
    L2():
      r46 = dyn base2(<lang `+`(r2, r2)>);
      goto L0(r43, r46);
    };
    r52 = dyn stopifnot1(p12);
    check L30() else D23();
  D23():
    deopt 87 [r52];
  L30():
    eval = ldf eval;
    check L31() else D24();
  D24():
    deopt 89 [];
  L31():
    p14 = prom<V +>{
      formals = ldf formals;
      p13 = prom<V +>{
        rank10 = ld rank;
        rank11 = force? rank10;
        checkMissing(rank11);
        return rank11;
      };
      r54 = dyn formals(p13);
      c3 = `is.object`(r54);
      if c3 then L1() else L2(r54);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", r54);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(r56):
      r57 = `$`(r56, <sym ties.method>);
      goto L0(r57);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r59 = dyn eval(p14);
    check L32() else D25();
  D25():
    deopt 91 [r59];
  L32():
    st tMeth = r59;
    sapply = ldf sapply;
    check L33() else D26();
  D26():
    deopt 94 [];
  L33():
    p15 = prom<V +>{
      tMeth = ld tMeth;
      tMeth1 = force? tMeth;
      checkMissing(tMeth1);
      return tMeth1;
    };
    p16 = prom<V +>{
      r61 = clos inner1503011338;
      return r61;
    };
    r63 = dyn sapply(p15, p16);
    check L34() else D27();
  D27():
    deopt 97 [r63];
  L34():
    st rx2 = r63;
    cbind = ldf cbind;
    check L35() else D28();
  D28():
    deopt 100 [];
  L35():
    p17 = prom<V +>{
      x16 = ld x2;
      x17 = force? x16;
      checkMissing(x17);
      return x17;
    };
    p18 = prom<V +>{
      rx2 = ld rx2;
      rx3 = force? rx2;
      checkMissing(rx3);
      return rx3;
    };
    r66 = dyn cbind(p17, p18);
    check L36() else D29();
  D29():
    deopt 103 [r66];
  L36():
    sample = ldf sample;
    check L37() else D30();
  D30():
    deopt 105 [];
  L37():
    r67 = dyn sample(47.0);
    check L38() else D31();
  D31():
    deopt 107 [r67];
  L38():
    st x = r67;
    sapply1 = ldf sapply;
    check L39() else D32();
  D32():
    deopt 110 [];
  L39():
    p19 = prom<V +>{
      tMeth2 = ld tMeth;
      tMeth3 = force? tMeth2;
      checkMissing(tMeth3);
      return tMeth3;
    };
    p20 = prom<V +>{
      r69 = clos inner645108289;
      return r69;
    };
    r71 = dyn sapply1(p19, p20);
    check L40() else D33();
  D33():
    deopt 113 [r71];
  L40():
    st rx = r71;
    stopifnot2 = ldf stopifnot;
    check L41() else D34();
  D34():
    deopt 116 [];
  L41():
    p21 = prom<V +>{
      sym3 = ldf all;
      base3 = ldf all in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r73):
      return r73;
    L2():
      rx4 = ld rx;
      rx5 = force? rx4;
      checkMissing(rx5);
      c4 = `is.object`(rx5);
      if c4 then L4() else L5();
    L3():
      r72 = dyn base3(<lang `==`(`[`(rx, , 1.0), rx)>);
      goto L0(r72);
    L1(dx5):
      rx8 = ld rx;
      rx9 = force? rx8;
      checkMissing(rx9);
      r75 = `==`(dx5, rx9);
      all = ldf all in base;
      r76 = dyn all(r75);
      goto L0(r76);
    L4():
      dr4 = tryDispatchBuiltin.1("[", rx5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5();
    L5():
      __1 = ldf `[` in base;
      r74 = dyn __1(rx5, <missing>, 1.0);
      goto L1(r74);
    L6():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    };
    r78 = dyn stopifnot2(p21);
    check L42() else D35();
  D35():
    deopt 118 [r78];
  L42():
    popenv;
    return r78;
  }
}
fun inner513354912(x, `na.last`, `ties.method`) {
  (reg x:*, reg na_last:*, reg ties_method:*) -+> V { var x:*, var `na.last`:*, reg na_last_isMissing:L, reg na_last_orDefault:*, var `ties.method`:*, reg ties_method_isMissing:L, reg ties_method_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg stopifnot:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg na_last1:*, reg na_last2:V, reg length:cls, reg r6:V, reg r7:V, reg p1:p(V +), reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg x1:*, reg x2:V, reg is_na:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg x3:*, reg x4:V, reg names:cls, reg r15:V, reg match_arg:cls, reg ties_method1:*, reg ties_method2:V, reg p2:p(V +), reg r17:V, reg is_factor:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg r19:V, reg c1:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg x7:*, reg x8:V, reg as_integer:cls, reg r22:V, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nas:*, reg nas1:V, reg r24:V, reg __:cls, reg r25:V, reg ties_method3:*, reg ties_method4:V, reg c3:L, reg c4:L, reg c5:L, reg c6:L, reg c7:L, reg c8:L, reg c9:L, reg c10:L, reg c11:L, reg i_ddd:dots, reg i:V, reg c12:L, reg c13:L, reg c14:L, reg c15:L, reg c16:L, reg c17:L, reg stop:cls, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg x13:*, reg x14:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg x15:*, reg x16:V, reg length1:cls, reg r32:V, reg ties_method5:*, reg ties_method6:V, reg rank:cls, reg r33:V, reg sort_list:cls, reg sort_list1:cls, reg x17:*, reg x18:V, reg p4:p(V +), reg r35:V, reg p5:p(V +), reg r37:V, reg sort_list2:cls, reg rev_default:cls, reg sort_list3:cls, reg x19:*, reg x20:V, reg p6:p(V +), reg r39:V, reg p7:p(V +), reg r41:V, reg p8:p(V +), reg r43:V, reg sort_list4:cls, reg order:cls, reg x21:*, reg x22:V, reg p9:p(V +), reg __1:cls, reg r45:V, reg r46:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg r48:V, reg nas2:*, reg nas3:V, reg r49:V, reg sum:cls, reg r50:V, reg p10:p(V +), reg r52:V, reg p11:p(V +), reg r54:V, reg p12:p(V +), reg r56:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r57:V, reg r58:V, reg na_last3:*, reg na_last4:V, reg is_na1:cls, reg r59:V, reg r60:V, reg c18:L, reg c20:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r61:V, reg c23:L, reg r62:V, reg nas4:*, reg nas5:V, reg any:cls, reg r63:V, reg c24:L, reg c25:V, reg c27:L, reg na_last5:*, reg na_last6:V, reg r64:V, reg NAkeep:*, reg NAkeep1:V, reg c28:L, reg c29:V, reg na_last7:*, reg na_last8:V, reg c31:L, reg c32:V, reg c34:L, reg y:*, reg y1:V, reg l:*, reg c35:L, reg y3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg nas6:*, reg nas7:V, reg r65:V, reg ___:cls, reg r66:V, reg NAkeep2:*, reg NAkeep3:V, reg r67:V, reg c36:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r68:V, reg r69:V, reg y6:*, reg y7:V, reg length2:cls, reg r70:V, reg r71:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r74:V, reg r75:V, reg r76:V, reg yy:*, reg yy1:V, reg length3:cls, reg r77:V, reg r78:V, reg l3:*, reg c37:L, reg r80:V, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r82:V, reg dx5:V, reg nas8:*, reg nas9:V, reg ___1:cls, reg r83:V, reg r84:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r86:V, reg r87:V, reg nas10:*, reg nas11:V, reg sum1:cls, reg r88:V, reg y8:*, reg y9:V, reg len:*, reg len1:V, reg r89:V, reg l6:*, reg c38:L, reg r91:V, reg l8:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg nas12:*, reg nas13:V, reg r94:V, reg ___2:cls, reg r95:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r96:V, reg r97:V, reg len2:*, reg len3:V, reg r98:I, reg l9:*, reg c39:L, reg r100:V, reg l11:*, reg dr8:V, reg dc4:L, reg dx8:V, reg r102:V, reg dx9:V, reg nas14:*, reg nas15:V, reg ___3:cls, reg r103:V, reg yy2:*, reg yy3:V, reg nm:*, reg nm1:V, reg l12:*, reg names__:cls, reg r104:V, reg nm3:*, reg nm4:V, reg c40:L, reg nm6:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg nas16:*, reg nas17:V, reg r105:V, reg __2:cls, reg r106:V, reg l13:*, reg names__1:cls, reg r107:V, reg y10:*, reg y11:V |
    mkenv;
    st x = x;
    na_last_isMissing = missing.0(na_last);
    if na_last_isMissing then L0(TRUE) else L0(na_last);
  L0(na_last_orDefault):
    st `na.last` = na_last_orDefault;
    ties_method_isMissing = missing.0(ties_method);
    if ties_method_isMissing then L1() else L2(ties_method);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("average", "first", "last", "random", "max", "min");
      goto L0(r2);
    L2():
      r = dyn base("average", "first", "last", "random", "max", "min");
      goto L0(r);
    };
    goto L2(p);
  L2(ties_method_orDefault):
    st `ties.method` = ties_method_orDefault;
    stopifnot = ldf stopifnot;
    check L37() else D0();
  D0():
    deopt 1 [];
  L37():
    p1 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      r7 = `==`(r5, 1);
      return r7;
    L1():
      na_last1 = ld `na.last`;
      na_last2 = force? na_last1;
      checkMissing(na_last2);
      length = ldf length in base;
      r6 = dyn length(na_last2);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym na.last>);
      goto L0(r4);
    };
    r9 = dyn stopifnot(p1);
    check L38() else D1();
  D1():
    deopt 3 [r9];
  L38():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  L3(r11):
    st nas = r11;
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L39():
    x1 = ld x;
    check L41() else D2();
  L40():
    r10 = dyn base2(<sym x>);
    goto L3(r10);
  D2():
    deopt 6 [x1];
  L4(r14):
    st nm = r14;
    match_arg = ldf `match.arg`;
    check L47() else D6();
  L41():
    x2 = force? x1;
    checkMissing(x2);
    is_na = ldf `is.na` in base;
    r12 = dyn is_na(x2);
    check L42() else D3();
  L43():
    x3 = ld x;
    check L45() else D4();
  L44():
    r13 = dyn base3(<sym x>);
    goto L4(r13);
  D3():
    deopt 9 [r12];
  D4():
    deopt 13 [x3];
  D6():
    deopt 19 [];
  L42():
    goto L3(r12);
  L45():
    x4 = force? x3;
    checkMissing(x4);
    names = ldf names in base;
    r15 = dyn names(x4);
    check L46() else D5();
  L47():
    p2 = prom<V +>{
      ties_method1 = ld `ties.method`;
      ties_method2 = force? ties_method1;
      checkMissing(ties_method2);
      return ties_method2;
    };
    r17 = dyn match_arg(p2);
    check L48() else D7();
  D5():
    deopt 16 [r15];
  D7():
    deopt 21 [r17];
  L46():
    goto L4(r15);
  L48():
    st `ties.method` = r17;
    is_factor = ldf `is.factor`;
    check L49() else D8();
  D8():
    deopt 24 [];
  L49():
    p3 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r19 = dyn is_factor(p3);
    check L50() else D9();
  D9():
    deopt 26 [r19];
  L50():
    c1 = `as.logical`(r19);
    if c1 then L51() else L5();
  L5():
    goto L7();
  L7():
    x9 = ld x;
    check L57() else D12();
  L51():
    sym4 = ldf `as.integer`;
    base4 = ldf `as.integer` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  D12():
    deopt 36 [x9];
  L6(r21):
    st x = r21;
    goto L7();
  L52():
    x7 = ld x;
    check L54() else D10();
  L53():
    r20 = dyn base4(<sym x>);
    goto L6(r20);
  L57():
    x10 = force? x9;
    checkMissing(x10);
    c2 = `is.object`(x10);
    if c2 then L58() else L59(x10);
  D10():
    deopt 29 [x7];
  L8(dx1):
    st x = dx1;
    ties_method3 = ld `ties.method`;
    check L62() else D14();
  L54():
    x8 = force? x7;
    checkMissing(x8);
    as_integer = ldf `as.integer` in base;
    r22 = dyn as_integer(x8);
    check L55() else D11();
  L58():
    dr = tryDispatchBuiltin.1("[", x10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L60() else L59(dr);
  L59(x12):
    nas = ld nas;
    check L61() else D13();
  D11():
    deopt 32 [r22];
  D13():
    deopt 38 [x12, nas];
  D14():
    deopt 43 [ties_method3];
  L55():
    goto L6(r22);
  L60():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L61():
    nas1 = force? nas;
    checkMissing(nas1);
    r24 = `!`(nas1);
    __ = ldf `[` in base;
    r25 = dyn __(x12, r24);
    goto L8(r25);
  L62():
    ties_method4 = force? ties_method3;
    checkMissing(ties_method4);
    c3 = `is.vector`(ties_method4, "any");
    if c3 then L63() else L64();
  L63():
    c4 = inherits(ties_method4, "factor", FALSE);
    if c4 then L65() else L66();
  L64():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L65():
    c5 = `is.character`(ties_method4);
    if c5 then L67() else L68();
  L66():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L65();
  L9():
    sym5 = ldf `.Internal`;
    base5 = ldf `.Internal` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L83() else L84();
  L10():
    sort_list = ldf `sort.list`;
    check L93() else D21();
  L11():
    sort_list2 = ldf `sort.list`;
    check L96() else D23();
  L12():
    sort_list4 = ldf `sort.list`;
    check L99() else D25();
  L13():
    goto L15(NULL);
  L15(r27):
    st y = r27;
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L102() else L103();
  L67():
    c6 = `==`.6(ties_method4, "average");
    if c6 then L9() else L69();
  L68():
    i_ddd = dots[ties_method4];
    i = `as.integer`(i_ddd);
    c12 = `==`.5(i, 1);
    if c12 then L14() else L75();
  D21():
    deopt 65 [];
  D23():
    deopt 69 [];
  D25():
    deopt 73 [];
  L14():
    stop = ldf stop;
    check L81() else D15();
  L16(r29):
    goto L15(r29);
  L18(r58):
    r60 = `!`(r58);
    c18 = `as.logical`(r60);
    if c18 then L106() else L19(c18);
  L69():
    c7 = `==`.6(ties_method4, "min");
    if c7 then L9() else L70();
  L75():
    c13 = `==`.5(i, 2);
    if c13 then L14() else L76();
  L83():
    x13 = ld x;
    check L85() else D16();
  L84():
    r28 = dyn base5(<lang rank(x, length(x), ties.method)>);
    goto L16(r28);
  L93():
    p5 = prom<V +>{
      sort_list1 = ldf `sort.list`;
      p4 = prom<V +>{
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        return x18;
      };
      r35 = dyn sort_list1(p4);
      return r35;
    };
    r37 = dyn sort_list(p5);
    check L94() else D22();
  L96():
    p8 = prom<V +>{
      rev_default = ldf `rev.default`;
      p7 = prom<V +>{
        sort_list3 = ldf `sort.list`;
        p6 = prom<V +>{
          x19 = ld x;
          x20 = force? x19;
          checkMissing(x20);
          return x20;
        };
        r39 = dyn sort_list3[, decreasing](p6, TRUE);
        return r39;
      };
      r41 = dyn rev_default(p7);
      return r41;
    };
    r43 = dyn sort_list2(p8);
    check L97() else D24();
  L99():
    p12 = prom<V +>{
      order = ldf order;
      p9 = prom<V +>{
        x21 = ld x;
        x22 = force? x21;
        checkMissing(x22);
        return x22;
      };
      p11 = prom<V +>{
        __1 = ldf `::`;
        r45 = dyn __1("stats", "runif");
        checkFun.0(r45);
        r46 = r45 as cls;
        p10 = prom<V +>{
          sym7 = ldf sum;
          base7 = ldf sum in base;
          guard7 = `==`.4(sym7, base7);
          if guard7 then L1() else L2();
        L0(r48):
          return r48;
        L1():
          nas2 = ld nas;
          nas3 = force? nas2;
          checkMissing(nas3);
          r49 = `!`(nas3);
          sum = ldf sum in base;
          r50 = dyn sum(r49);
          goto L0(r50);
        L2():
          r47 = dyn base7(<lang `!`(nas)>);
          goto L0(r47);
        };
        r52 = dyn r46(p10);
        return r52;
      };
      r54 = dyn order(p9, p11);
      return r54;
    };
    r56 = dyn sort_list4(p12);
    check L100() else D26();
  L102():
    na_last3 = ld `na.last`;
    check L104() else D27();
  L103():
    r57 = dyn base8(<sym na.last>);
    goto L18(r57);
  D15():
    deopt 46 [];
  D16():
    deopt 52 [x13];
  D22():
    deopt 67 [r37];
  D24():
    deopt 71 [r43];
  D26():
    deopt 75 [r56];
  D27():
    deopt 80 [na_last3];
  L19(c20):
    c27 = `as.logical`(c20);
    if c27 then L112() else L21();
  L70():
    c8 = `==`.6(ties_method4, "max");
    if c8 then L9() else L71();
  L76():
    c14 = `==`.5(i, 3);
    if c14 then L9() else L77();
  L81():
    dyn stop("empty alternative in numeric switch");
    goto L13();
  L85():
    x14 = force? x13;
    checkMissing(x14);
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L86() else L87();
  L94():
    goto L15(r37);
  L97():
    goto L15(r43);
  L100():
    goto L15(r56);
  L104():
    na_last4 = force? na_last3;
    checkMissing(na_last4);
    is_na1 = ldf `is.na` in base;
    r59 = dyn is_na1(na_last4);
    check L105() else D28();
  L106():
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L107() else L108();
  D28():
    deopt 83 [r59];
  L17(r31):
    ties_method5 = ld `ties.method`;
    check L90() else D19();
  L20(c23, r62):
    c24 = `as.logical`(r62);
    c25 = `&&`(c23, c24);
    goto L19(c25);
  L21():
    nm3 = ld nm;
    check L162() else D53();
  L35():
    y10 = ld y;
    check L169() else D57();
  L71():
    c9 = `==`.6(ties_method4, "first");
    if c9 then L10() else L72();
  L77():
    c15 = `==`.5(i, 4);
    if c15 then L10() else L78();
  L86():
    x15 = ld x;
    check L88() else D17();
  L87():
    r30 = dyn base6(<sym x>);
    goto L17(r30);
  L105():
    goto L18(r59);
  L107():
    nas4 = ld nas;
    check L109() else D29();
  L108():
    r61 = dyn base9(<sym nas>);
    goto L20(c18, r61);
  L112():
    st yy = NA_LGL;
    na_last5 = ld `na.last`;
    check L113() else D31();
  D17():
    deopt 56 [x15];
  D19():
    deopt 60 [ties_method5];
  D29():
    deopt 87 [c18, nas4];
  D31():
    deopt 95 [na_last5];
  D53():
    deopt 173 [nm3];
  D57():
    deopt 184 [y10];
  L72():
    c10 = `==`.6(ties_method4, "last");
    if c10 then L11() else L73();
  L78():
    c16 = `==`.5(i, 5);
    if c16 then L11() else L79();
  L88():
    x16 = force? x15;
    checkMissing(x16);
    length1 = ldf length in base;
    r32 = dyn length1(x16);
    check L89() else D18();
  L90():
    ties_method6 = force? ties_method5;
    checkMissing(ties_method6);
    rank = ldf rank in base;
    r33 = dyn rank(x14, r31, ties_method6);
    check L91() else D20();
  L109():
    nas5 = force? nas4;
    checkMissing(nas5);
    any = ldf any in base;
    r63 = dyn any(nas5);
    check L110() else D30();
  L113():
    na_last6 = force? na_last5;
    checkMissing(na_last6);
    r64 = `==`(na_last6, "keep");
    st NAkeep = r64;
    NAkeep = ld NAkeep;
    check L114() else D32();
  L162():
    nm4 = force? nm3;
    checkMissing(nm4);
    c40 = `is.object`(nm4);
    if c40 then L163() else L164(nm4);
  L169():
    y11 = force? y10;
    checkMissing(y11);
    popenv;
    return y11;
  D18():
    deopt 59 [r32];
  D20():
    deopt 63 [r33];
  D30():
    deopt 90 [c18, r63];
  D32():
    deopt 100 [NAkeep];
  L36(dx11):
    l13 = ld y;
    names__1 = ldf `names<-`;
    check L167() else D55();
  L73():
    c11 = `==`.6(ties_method4, "random");
    if c11 then L12() else L74();
  L79():
    c17 = `==`.5(i, 6);
    if c17 then L12() else L80();
  L89():
    goto L17(r32);
  L91():
    goto L16(r33);
  L110():
    goto L20(c18, r63);
  L114():
    NAkeep1 = force? NAkeep;
    checkMissing(NAkeep1);
    c28 = `as.logical`(NAkeep1);
    if c28 then L22(c28) else L115();
  L163():
    dr10 = tryDispatchBuiltin.1("[", nm4);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L165() else L164(dr10);
  L164(nm6):
    nas16 = ld nas;
    check L166() else D54();
  D54():
    deopt 175 [nm6, nas16];
  D55():
    deopt 180 [dx11, l13, dx11];
  L22(c29):
    c34 = `as.logical`(c29);
    if c34 then L118() else L23();
  L74():
    goto L13();
  L80():
    goto L13();
  L115():
    na_last7 = ld `na.last`;
    check L116() else D33();
  L165():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L36(dx10);
  L166():
    nas17 = force? nas16;
    checkMissing(nas17);
    r105 = `!`(nas17);
    __2 = ldf `[` in base;
    r106 = dyn __2(nm6, r105);
    goto L36(r106);
  L167():
    r107 = dyn names__1(l13, NULL, dx11);
    check L168() else D56();
  D33():
    deopt 102 [c28, na_last7];
  D56():
    deopt 182 [dx11, r107];
  L23():
    sym12 = ldf sum;
    base12 = ldf sum in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L140() else L141();
  L30():
    yy2 = ld yy;
    check L157() else D49();
  L116():
    na_last8 = force? na_last7;
    checkMissing(na_last8);
    c31 = `as.logical`(na_last8);
    c32 = `||`(c28, c31);
    goto L22(c32);
  L118():
    y = ld y;
    check L119() else D34();
  L168():
    st y = r107;
    goto L35();
  D34():
    deopt 105 [y];
  D49():
    deopt 163 [yy2];
  L31(r87):
    st len = r87;
    y8 = ld y;
    check L144() else D44();
  L119():
    y1 = force? y;
    checkMissing(y1);
    l = ld yy;
    c35 = `is.object`(l);
    if c35 then L120() else L121(y1, l);
  L140():
    nas10 = ld nas;
    check L142() else D42();
  L141():
    r86 = dyn base12(<sym nas>);
    goto L31(r86);
  L157():
    yy3 = force? yy2;
    checkMissing(yy3);
    st y = yy3;
    nm = ld nm;
    check L158() else D50();
  D42():
    deopt 139 [nas10];
  D44():
    deopt 144 [y8];
  D50():
    deopt 166 [nm];
  L24(dx3):
    st yy = dx3;
    NAkeep2 = ld NAkeep;
    check L124() else D36();
  L120():
    dr2 = tryDispatchBuiltin.0("[<-", l, y1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L122() else L121(y1, dr2);
  L121(y3, l2):
    nas6 = ld nas;
    check L123() else D35();
  L142():
    nas11 = force? nas10;
    checkMissing(nas11);
    sum1 = ldf sum in base;
    r88 = dyn sum1(nas11);
    check L143() else D43();
  L144():
    y9 = force? y8;
    checkMissing(y9);
    len = ld len;
    check L145() else D45();
  L158():
    nm1 = force? nm;
    checkMissing(nm1);
    l12 = ld y;
    names__ = ldf `names<-`;
    check L159() else D51();
  D35():
    deopt 108 [y3, l2, y1, nas6];
  D36():
    deopt 113 [NAkeep2];
  D43():
    deopt 142 [r88];
  D45():
    deopt 145 [y9, len];
  D51():
    deopt 169 [nm1, l12, nm1];
  L122():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L24(dx2);
  L123():
    nas7 = force? nas6;
    checkMissing(nas7);
    r65 = `!`(nas7);
    ___ = ldf `[<-` in base;
    r66 = dyn ___(l2, y1, r65);
    goto L24(r66);
  L124():
    NAkeep3 = force? NAkeep2;
    checkMissing(NAkeep3);
    r67 = `!`(NAkeep3);
    c36 = `as.logical`(r67);
    if c36 then L125() else L25();
  L143():
    goto L31(r88);
  L145():
    len1 = force? len;
    checkMissing(len1);
    r89 = `+`(y9, len1);
    l6 = ld yy;
    c38 = `is.object`(l6);
    if c38 then L146() else L147(r89, l6);
  L159():
    r104 = dyn names__(l12, NULL, nm1);
    check L160() else D52();
  D52():
    deopt 171 [nm1, r104];
  L25():
    goto L29(NULL);
  L29(r84):
    goto L30();
  L32(dx7):
    st yy = dx7;
    sym13 = ldf seq_len;
    base13 = ldf seq_len in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L150() else L151();
  L125():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L126() else L127();
  L146():
    dr6 = tryDispatchBuiltin.0("[<-", l6, r89);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L148() else L147(r89, dr6);
  L147(r91, l8):
    nas12 = ld nas;
    check L149() else D46();
  L160():
    st y = r104;
    goto L35();
  D46():
    deopt 149 [r91, l8, r89, nas12];
  L26(r69):
    r71 = `+`(r69, 1);
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L130() else L131();
  L33(r97):
    l9 = ld yy;
    c39 = `is.object`(l9);
    if c39 then L153() else L154(r97, l9);
  L126():
    y6 = ld y;
    check L128() else D37();
  L127():
    r68 = dyn base10(<sym y>);
    goto L26(r68);
  L148():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L32(dx6);
  L149():
    nas13 = force? nas12;
    checkMissing(nas13);
    r94 = `!`(nas13);
    ___2 = ldf `[<-` in base;
    r95 = dyn ___2(l8, r89, r94);
    goto L32(r95);
  L150():
    len2 = ld len;
    check L152() else D47();
  L151():
    r96 = dyn base13(<sym len>);
    goto L33(r96);
  D37():
    deopt 118 [y6];
  D47():
    deopt 155 [len2];
  L27(r75, r76):
    r78 = `:`(r75, r76);
    l3 = ld yy;
    c37 = `is.object`(l3);
    if c37 then L134() else L135(r78, l3);
  L34(r102, dx9):
    st yy = dx9;
    goto L30();
  L128():
    y7 = force? y6;
    checkMissing(y7);
    length2 = ldf length in base;
    r70 = dyn length2(y7);
    check L129() else D38();
  L130():
    yy = ld yy;
    check L132() else D39();
  L131():
    r74 = dyn base11(<sym yy>);
    goto L27(r71, r74);
  L152():
    len3 = force? len2;
    checkMissing(len3);
    r98 = seq_len(len3);
    goto L33(r98);
  L153():
    dr8 = tryDispatchBuiltin.0("[<-", l9, r97);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L155() else L154(r97, dr8);
  L154(r100, l11):
    nas14 = ld nas;
    check L156() else D48();
  D38():
    deopt 121 [r70];
  D39():
    deopt 125 [r71, yy];
  D48():
    deopt 159 [r100, l11, r97, nas14];
  L28(r82, dx5):
    st yy = dx5;
    goto L29(r82);
  L129():
    goto L26(r70);
  L132():
    yy1 = force? yy;
    checkMissing(yy1);
    length3 = ldf length in base;
    r77 = dyn length3(yy1);
    check L133() else D40();
  L134():
    dr4 = tryDispatchBuiltin.0("[<-", l3, r78);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L136() else L135(r78, dr4);
  L135(r80, l5):
    nas8 = ld nas;
    check L137() else D41();
  L155():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L34(r97, dx8);
  L156():
    nas15 = force? nas14;
    ___3 = ldf `[<-` in base;
    r103 = dyn ___3(l11, r97, nas15);
    goto L34(r100, r103);
  D40():
    deopt 128 [r71, r77];
  D41():
    deopt 131 [r80, l5, r78, nas8];
  L133():
    goto L27(r71, r77);
  L136():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L28(r78, dx4);
  L137():
    nas9 = force? nas8;
    ___1 = ldf `[<-` in base;
    r83 = dyn ___1(l5, r78, nas9);
    goto L28(r80, r83);
  }
}
fun inner1503011338(M) {
  (reg M:*) -+> V { var M:*, reg rank:cls, reg x2:*, reg x3:V, reg p:p(V +), reg M1:*, reg M2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st M = M;
    rank = ldf rank;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x2 = ld x2;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p1 = prom<V +>{
      M1 = ld M;
      M2 = force? M1;
      checkMissing(M2);
      return M2;
    };
    r2 = dyn rank[, `ties.method`](p, p1);
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner645108289(MM) {
  (reg MM:*) -+> V { var MM:*, reg rank:cls, reg x:*, reg x1:V, reg p:p(V +), reg MM1:*, reg MM2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st MM = MM;
    rank = ldf rank;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p1 = prom<V +>{
      MM1 = ld MM;
      MM2 = force? MM1;
      checkMissing(MM2);
      return MM2;
    };
    r2 = dyn rank[, `ties.method`](p, p1);
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    popenv;
    return r2;
  }
}
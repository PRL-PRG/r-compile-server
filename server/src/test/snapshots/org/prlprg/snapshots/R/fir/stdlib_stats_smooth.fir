fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg smooth:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r9:V, reg smooth1:cls, reg x3R:*, reg x3R1:V, reg p2:p(V +), reg r11:V, reg r12:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg r15:V, reg c1:cls, reg r16:V, reg plot:cls, reg y:*, reg y1:V, reg p3:p(V +), reg r18:V, reg lines:cls, reg sm_3RS:cls, reg y2:*, reg y3:V, reg p4:p(V +), reg r20:V, reg p5:p(V +), reg r22:V, reg lines1:cls, reg smooth2:cls, reg y4:*, reg y5:V, reg p6:p(V +), reg r24:V, reg p7:p(V +), reg r26:V, reg lines2:cls, reg smooth3:cls, reg y6:*, reg y7:V, reg p8:p(V +), reg r28:V, reg p9:p(V +), reg r30:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg c2:cls, reg r33:V, reg plot1:cls, reg x3:*, reg x4:V, reg p10:p(V +), reg r35:V, reg matlines:cls, reg cbind:cls, reg smooth4:cls, reg x5:*, reg x6:V, reg p11:p(V +), reg r37:V, reg p12:p(V +), reg smooth5:cls, reg x7:*, reg x8:V, reg p13:p(V +), reg r40:V, reg p14:p(V +), reg smooth6:cls, reg x9:*, reg x10:V, reg p15:p(V +), reg r43:V, reg p16:p(V +), reg smooth7:cls, reg x11:*, reg x12:V, reg p17:p(V +), reg r46:V, reg p18:p(V +), reg r48:V, reg p19:p(V +), reg r50:V, reg l:*, reg c3:L, reg r52:R, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r59:V, reg r60:R, reg l5:*, reg r61:R, reg r62:V, reg presidents:*, reg presidents1:V, reg is_na:cls, reg r63:V, reg ___:cls, reg r64:V, reg summary:cls, reg smooth8:cls, reg presidents2:*, reg presidents3:V, reg p20:p(V +), reg r66:V, reg p21:p(V +), reg r68:V, reg summary1:cls, reg smooth9:cls, reg presidents4:*, reg presidents5:V, reg p22:p(V +), reg r70:V, reg p23:p(V +), reg r72:V, reg summary2:cls, reg smooth10:cls, reg presidents6:*, reg presidents7:V, reg p24:p(V +), reg r74:V, reg p25:p(V +), reg r76:V, reg all_equal:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r77:V, reg r78:V, reg sm2:*, reg sm3:V, reg c4:cls, reg r79:V, reg p26:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r81:V, reg r82:V, reg smooth11:cls, reg smooth12:cls, reg sm4:*, reg sm5:V, reg p27:p(V +), reg r84:V, reg p28:p(V +), reg r86:V, reg c5:cls, reg r87:V, reg p29:p(V +), reg r89:V, reg all_equal1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r90:V, reg r91:V, reg sm6:*, reg sm7:V, reg c6:cls, reg r92:V, reg p30:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r94:V, reg r95:V, reg smooth13:cls, reg smooth14:cls, reg sm8:*, reg sm9:V, reg p31:p(V +), reg r97:V, reg p32:p(V +), reg r99:V, reg c7:cls, reg r100:V, reg p33:p(V +), reg r102:V, reg plot2:cls, reg presidents8:*, reg presidents9:V, reg p34:p(V +), reg r104:V, reg lines3:cls, reg sm10:*, reg sm11:V, reg p35:p(V +), reg r106:V, reg lines4:cls, reg sm12:*, reg sm13:V, reg p36:p(V +), reg r108:V |
    mkenv;
    r = clos inner3954926463;
    st smooth = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L6():
    require = ldf require;
    check L8() else D0();
  L7():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  L1(r6):
    st x1 = r6;
    smooth = ldf smooth;
    check L13() else D3();
  L8():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L9() else D1();
  L10():
    c = ldf c in base;
    r7 = dyn c(4.0, 1.0, 3.0, 6.0, 6.0, 4.0, 1.0, 6.0, 2.0, 4.0, 2.0);
    check L12() else D2();
  L11():
    r5 = dyn base1(4.0, 1.0, 3.0, 6.0, 6.0, 4.0, 1.0, 6.0, 2.0, 4.0, 2.0);
    goto L1(r5);
  D1():
    deopt 7 [r4];
  D2():
    deopt 22 [r7];
  D3():
    deopt 25 [];
  L9():
    goto L0();
  L12():
    goto L1(r7);
  L13():
    p1 = prom<V +>{
      x1 = ld x1;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r9 = dyn smooth(p1, "3R");
    check L14() else D4();
  D4():
    deopt 28 [r9];
  L14():
    st x3R = r9;
    smooth1 = ldf smooth;
    check L15() else D5();
  D5():
    deopt 31 [];
  L15():
    p2 = prom<V +>{
      x3R = ld x3R;
      x3R1 = force? x3R;
      checkMissing(x3R1);
      return x3R1;
    };
    r11 = dyn smooth1[, kind](p2, "S");
    check L16() else D6();
  D6():
    deopt 35 [r11];
  L16():
    r12 = clos inner2044426018;
    st `sm.3RS` = r12;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L2(r14):
    st y = r14;
    plot = ldf plot;
    check L20() else D8();
  L17():
    r15 = `:`(19.0, 1.0);
    c1 = ldf c in base;
    r16 = dyn c1(1.0, 1.0, r15);
    check L19() else D7();
  L18():
    r13 = dyn base2(1.0, 1.0, <lang `:`(19.0, 1.0)>);
    goto L2(r13);
  D7():
    deopt 48 [r16];
  D8():
    deopt 51 [];
  L19():
    goto L2(r16);
  L20():
    p3 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r18 = dyn plot[, main, `col.main`](p3, "misbehaviour of \"3RSR\"", 3.0);
    check L21() else D9();
  D9():
    deopt 57 [r18];
  L21():
    lines = ldf lines;
    check L22() else D10();
  D10():
    deopt 59 [];
  L22():
    p5 = prom<V +>{
      sm_3RS = ldf `sm.3RS`;
      p4 = prom<V +>{
        y2 = ld y;
        y3 = force? y2;
        checkMissing(y3);
        return y3;
      };
      r20 = dyn sm_3RS(p4);
      return r20;
    };
    r22 = dyn lines(p5);
    check L23() else D11();
  D11():
    deopt 61 [r22];
  L23():
    lines1 = ldf lines;
    check L24() else D12();
  D12():
    deopt 63 [];
  L24():
    p7 = prom<V +>{
      smooth2 = ldf smooth;
      p6 = prom<V +>{
        y4 = ld y;
        y5 = force? y4;
        checkMissing(y5);
        return y5;
      };
      r24 = dyn smooth2(p6);
      return r24;
    };
    r26 = dyn lines1(p7);
    check L25() else D13();
  D13():
    deopt 65 [r26];
  L25():
    lines2 = ldf lines;
    check L26() else D14();
  D14():
    deopt 67 [];
  L26():
    p9 = prom<V +>{
      smooth3 = ldf smooth;
      p8 = prom<V +>{
        y6 = ld y;
        y7 = force? y6;
        checkMissing(y7);
        return y7;
      };
      r28 = dyn smooth3(p8, "3RSR");
      return r28;
    };
    r30 = dyn lines2[, col, lwd](p9, 3.0, 2.0);
    check L27() else D15();
  D15():
    deopt 73 [r30];
  L27():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L3(r32):
    st x = r32;
    plot1 = ldf plot;
    check L31() else D17();
  L28():
    c2 = ldf c in base;
    r33 = dyn c2(<int 8, 9, 10>, 10.0, 0.0, 0.0, 9.0, 9.0);
    check L30() else D16();
  L29():
    r31 = dyn base3(<lang `:`(8.0, 10.0)>, 10.0, 0.0, 0.0, 9.0, 9.0);
    goto L3(r31);
  D16():
    deopt 84 [r33];
  D17():
    deopt 87 [];
  L30():
    goto L3(r33);
  L31():
    p10 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r35 = dyn plot1[, main](p10, "breakdown of  3R  and  S  and hence  3RSS");
    check L32() else D18();
  D18():
    deopt 91 [r35];
  L32():
    matlines = ldf matlines;
    check L33() else D19();
  D19():
    deopt 93 [];
  L33():
    p19 = prom<V +>{
      cbind = ldf cbind;
      p12 = prom<V +>{
        smooth4 = ldf smooth;
        p11 = prom<V +>{
          x5 = ld x;
          x6 = force? x5;
          checkMissing(x6);
          return x6;
        };
        r37 = dyn smooth4(p11, "3R");
        return r37;
      };
      p14 = prom<V +>{
        smooth5 = ldf smooth;
        p13 = prom<V +>{
          x7 = ld x;
          x8 = force? x7;
          checkMissing(x8);
          return x8;
        };
        r40 = dyn smooth5(p13, "S");
        return r40;
      };
      p16 = prom<V +>{
        smooth6 = ldf smooth;
        p15 = prom<V +>{
          x9 = ld x;
          x10 = force? x9;
          checkMissing(x10);
          return x10;
        };
        r43 = dyn smooth6(p15, "3RSS");
        return r43;
      };
      p18 = prom<V +>{
        smooth7 = ldf smooth;
        p17 = prom<V +>{
          x11 = ld x;
          x12 = force? x11;
          checkMissing(x12);
          return x12;
        };
        r46 = dyn smooth7(p17);
        return r46;
      };
      r48 = dyn cbind(p12, p14, p16, p18);
      return r48;
    };
    r50 = dyn matlines(p19);
    check L34() else D20();
  D20():
    deopt 95 [r50];
  L34():
    l = ld presidents;
    c3 = `is.object`(l);
    if c3 then L35() else L36(0.0, l);
  L4(dx1):
    st presidents = dx1;
    summary = ldf summary;
    check L42() else D23();
  L35():
    dr = tryDispatchBuiltin.0("[<-", l, 0.0);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(0.0, dr);
  L36(r52, l2):
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  D23():
    deopt 108 [];
  L5(r60, l5, r61, r62):
    ___ = ldf `[<-` in base;
    r64 = dyn ___(l5, r61, r62);
    goto L4(r64);
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L38():
    presidents = ld presidents;
    check L40() else D21();
  L39():
    r59 = dyn base4(<sym presidents>);
    goto L5(r52, l2, 0.0, r59);
  L42():
    p21 = prom<V +>{
      smooth8 = ldf smooth;
      p20 = prom<V +>{
        presidents2 = ld presidents;
        presidents3 = force? presidents2;
        checkMissing(presidents3);
        return presidents3;
      };
      r66 = dyn smooth8(p20, "3R");
      st sm3 = r66;
      invisible.0();
      return r66;
    };
    r68 = dyn summary(p21);
    check L43() else D24();
  D21():
    deopt 101 [r52, l2, 0.0, presidents];
  D24():
    deopt 110 [r68];
  L40():
    presidents1 = force? presidents;
    checkMissing(presidents1);
    is_na = ldf `is.na` in base;
    r63 = dyn is_na(presidents1);
    check L41() else D22();
  L43():
    summary1 = ldf summary;
    check L44() else D25();
  D22():
    deopt 104 [r52, l2, 0.0, r63];
  D25():
    deopt 112 [];
  L41():
    goto L5(r52, l2, 0.0, r63);
  L44():
    p23 = prom<V +>{
      smooth9 = ldf smooth;
      p22 = prom<V +>{
        presidents4 = ld presidents;
        presidents5 = force? presidents4;
        checkMissing(presidents5);
        return presidents5;
      };
      r70 = dyn smooth9(p22, "3RSS");
      st sm2 = r70;
      invisible.0();
      return r70;
    };
    r72 = dyn summary1(p23);
    check L45() else D26();
  D26():
    deopt 114 [r72];
  L45():
    summary2 = ldf summary;
    check L46() else D27();
  D27():
    deopt 116 [];
  L46():
    p25 = prom<V +>{
      smooth10 = ldf smooth;
      p24 = prom<V +>{
        presidents6 = ld presidents;
        presidents7 = force? presidents6;
        checkMissing(presidents7);
        return presidents7;
      };
      r74 = dyn smooth10(p24);
      st sm = r74;
      invisible.0();
      return r74;
    };
    r76 = dyn summary2(p25);
    check L47() else D28();
  D28():
    deopt 118 [r76];
  L47():
    all_equal = ldf `all.equal`;
    check L48() else D29();
  D29():
    deopt 120 [];
  L48():
    p26 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r78):
      return r78;
    L1():
      sm2 = ld sm2;
      sm3 = force? sm2;
      checkMissing(sm3);
      c4 = ldf c in base;
      r79 = dyn c4(sm3);
      goto L0(r79);
    L2():
      r77 = dyn base5(<sym sm2>);
      goto L0(r77);
    };
    p29 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r82):
      return r82;
    L1():
      smooth11 = ldf smooth;
      p28 = prom<V +>{
        smooth12 = ldf smooth;
        p27 = prom<V +>{
          sm4 = ld sm3;
          sm5 = force? sm4;
          checkMissing(sm5);
          return sm5;
        };
        r84 = dyn smooth12(p27, "S");
        return r84;
      };
      r86 = dyn smooth11(p28, "S");
      c5 = ldf c in base;
      r87 = dyn c5(r86);
      goto L0(r87);
    L2():
      r81 = dyn base6(<lang smooth(smooth(sm3, "S"), "S")>);
      goto L0(r81);
    };
    r89 = dyn all_equal(p26, p29);
    check L49() else D30();
  D30():
    deopt 123 [r89];
  L49():
    all_equal1 = ldf `all.equal`;
    check L50() else D31();
  D31():
    deopt 125 [];
  L50():
    p30 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r91):
      return r91;
    L1():
      sm6 = ld sm;
      sm7 = force? sm6;
      checkMissing(sm7);
      c6 = ldf c in base;
      r92 = dyn c6(sm7);
      goto L0(r92);
    L2():
      r90 = dyn base7(<sym sm>);
      goto L0(r90);
    };
    p33 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r95):
      return r95;
    L1():
      smooth13 = ldf smooth;
      p32 = prom<V +>{
        smooth14 = ldf smooth;
        p31 = prom<V +>{
          sm8 = ld sm3;
          sm9 = force? sm8;
          checkMissing(sm9);
          return sm9;
        };
        r97 = dyn smooth14(p31, "S");
        return r97;
      };
      r99 = dyn smooth13(p32, "3R");
      c7 = ldf c in base;
      r100 = dyn c7(r99);
      goto L0(r100);
    L2():
      r94 = dyn base8(<lang smooth(smooth(sm3, "S"), "3R")>);
      goto L0(r94);
    };
    r102 = dyn all_equal1(p30, p33);
    check L51() else D32();
  D32():
    deopt 128 [r102];
  L51():
    plot2 = ldf plot;
    check L52() else D33();
  D33():
    deopt 130 [];
  L52():
    p34 = prom<V +>{
      presidents8 = ld presidents;
      presidents9 = force? presidents8;
      checkMissing(presidents9);
      return presidents9;
    };
    r104 = dyn plot2[, main](p34, "smooth(presidents0, *) :  3R and default 3RS3R");
    check L53() else D34();
  D34():
    deopt 134 [r104];
  L53():
    lines3 = ldf lines;
    check L54() else D35();
  D35():
    deopt 136 [];
  L54():
    p35 = prom<V +>{
      sm10 = ld sm3;
      sm11 = force? sm10;
      checkMissing(sm11);
      return sm11;
    };
    r106 = dyn lines3[, col, lwd](p35, 3.0, 1.5);
    check L55() else D36();
  D36():
    deopt 142 [r106];
  L55():
    lines4 = ldf lines;
    check L56() else D37();
  D37():
    deopt 144 [];
  L56():
    p36 = prom<V +>{
      sm12 = ld sm;
      sm13 = force? sm12;
      checkMissing(sm13);
      return sm13;
    };
    r108 = dyn lines4[, col, lwd](p36, 2.0, 1.25);
    check L57() else D38();
  D38():
    deopt 150 [r108];
  L57():
    popenv;
    return r108;
  }
}
fun inner3954926463(x, kind, twiceit, endrule, `do.ends`) {
  (reg x:*, reg kind:*, reg twiceit:*, reg endrule:*, reg do_ends:*) -+> V { var x:*, var kind:*, reg kind_isMissing:L, reg kind_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var twiceit:*, reg twiceit_isMissing:L, reg twiceit_orDefault:*, var endrule:*, reg endrule_isMissing:L, reg endrule_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg p1:p(V +), var `do.ends`:*, reg do_ends_isMissing:L, reg do_ends_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x1:*, reg x2:V, reg is_numeric:cls, reg r10:V, reg r11:V, reg c2:L, reg stop:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg x3:*, reg x4:V, reg anyNA:cls, reg r16:V, reg c3:L, reg stop1:cls, reg r17:V, reg match_arg:cls, reg endrule1:*, reg endrule2:V, reg p2:p(V +), reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg c4:cls, reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg pmatch:cls, reg endrule3:*, reg endrule4:V, reg p3:p(V +), reg rules:*, reg rules1:V, reg p4:p(V +), reg r28:V, reg is_na:cls, reg r29:V, reg c5:L, reg stop2:cls, reg r30:V, reg match_arg1:cls, reg kind1:*, reg kind2:V, reg p5:p(V +), reg r33:V, reg startsWith:cls, reg kind3:*, reg kind4:V, reg p6:p(V +), reg r35:V, reg c6:L, reg c8:V, reg do_ends1:*, reg do_ends2:V, reg r36:V, reg c9:L, reg c10:V, reg c12:L, reg iend:*, reg iend1:V, reg r37:V, reg kind5:*, reg kind6:V, reg r39:V, reg c13:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg do_ends3:*, reg do_ends4:V, reg as_logical:cls, reg r42:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg kind7:*, reg kind8:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r45:V, reg r46:V, reg c14:cls, reg r47:V, reg match:cls, reg r48:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg C_Rsm:*, reg C_Rsm1:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r51:V, reg C_Rsm4:V, reg r52:V, reg x5:*, reg x6:V, reg as_double:cls, reg r53:V, reg type:*, reg type1:V, reg iend2:*, reg iend3:V, reg vargs:dots, reg r54:V, reg twiceit1:*, reg twiceit2:V, reg c15:L, reg smooth:cls, reg x7:*, reg x8:V, reg smo:*, reg smo1:V, reg c16:L, reg x10:V, reg smo3:V, reg dr:V, reg dc:L, reg dx:V, reg x12:V, reg dx1:V, reg r55:V, reg r56:V, reg p7:p(V +), reg kind9:*, reg kind10:V, reg p8:p(V +), reg endrule5:*, reg endrule6:V, reg p9:p(V +), reg do_ends5:*, reg do_ends6:V, reg p10:p(V +), reg r61:V, reg smo4:*, reg smo5:V, reg c17:L, reg smo7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r62:V, reg r63:*, reg r64:V, reg r65:V, reg l:*, reg c18:L, reg r67:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r70:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r71:V, reg r72:V, reg smo8:*, reg smo9:V, reg c19:L, reg smo11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r73:V, reg c20:V, reg r74:V, reg c21:L, reg smo12:*, reg smo13:V, reg c22:L, reg smo15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r75:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r76:V, reg dx12:V, reg r77:V, reg r78:*, reg r79:V, reg attr:cls, reg r80:V, reg r81:V, reg l3:*, reg c23:L, reg r83:V, reg l5:*, reg dr10:V, reg dc5:L, reg dx13:V, reg r85:V, reg dx14:V, reg r86:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r88:V, reg r89:V, reg smo16:*, reg smo17:V, reg c24:L, reg smo19:V, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg r90:V, reg c25:V, reg r91:V, reg c26:L, reg smo20:*, reg smo21:V, reg c27:L, reg smo23:V, reg dr14:V, reg dc7:L, reg dx17:V, reg dx18:V, reg r92:V, reg c28:L, reg c29:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r93:V, reg c33:L, reg r94:V, reg r95:*, reg r96:V, reg attr1:cls, reg r97:V, reg c34:L, reg c35:V, reg l6:*, reg c37:L, reg c39:V, reg l8:*, reg dr16:V, reg dc8:L, reg dx19:V, reg c41:V, reg dx20:V, reg r98:V, reg c42:V, reg is_ts:cls, reg x13:*, reg x14:V, reg p11:p(V +), reg r100:V, reg c44:L, reg ts:cls, reg smo24:*, reg smo25:V, reg c45:L, reg smo27:V, reg dr18:V, reg dc9:L, reg dx21:V, reg dx22:V, reg r101:V, reg p12:p(V +), reg start:cls, reg x15:*, reg x16:V, reg p13:p(V +), reg r104:V, reg p14:p(V +), reg frequency:cls, reg x17:*, reg x18:V, reg p15:p(V +), reg r107:V, reg p16:p(V +), reg r109:V, reg l9:*, reg c46:L, reg r111:V, reg l11:*, reg dr20:V, reg dc10:L, reg dx23:V, reg r113:V, reg dx24:V, reg r114:V, reg structure:cls, reg smo28:*, reg smo29:V, reg c47:L, reg smo31:V, reg dr22:V, reg dc11:L, reg dx25:V, reg dx26:V, reg r116:V, reg p17:p(V +), reg kind11:*, reg kind12:V, reg p18:p(V +), reg twiceit3:*, reg twiceit4:V, reg p19:p(V +), reg smo32:*, reg smo33:V, reg c48:L, reg smo35:V, reg dr24:V, reg dc12:L, reg dx27:V, reg dx28:V, reg r120:V, reg p20:p(V +), reg smo36:*, reg smo37:V, reg c49:L, reg smo39:V, reg dr26:V, reg dc13:L, reg dx29:V, reg dx30:V, reg r122:V, reg p21:p(V +), reg startsWith1:cls, reg kind13:*, reg kind14:V, reg p22:p(V +), reg r125:V, reg c50:L, reg rules2:*, reg rules3:V, reg c51:L, reg rules5:V, reg dr28:V, reg dc14:L, reg dx31:V, reg dx32:V, reg iend4:*, reg iend5:V, reg __:cls, reg r126:V, reg p23:p(V +), reg match_call:cls, reg r128:V, reg p24:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r130:V, reg r131:V, reg is_ts1:cls, reg x19:*, reg x20:V, reg p25:p(V +), reg r133:V, reg c52:L, reg r134:V, reg c53:cls, reg r135:V, reg p26:p(V +), reg r137:V |
    mkenv;
    st x = x;
    kind_isMissing = missing.0(kind);
    if kind_isMissing then L0() else L1(kind);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("3RS3R", "3RSS", "3RSR", "3R", "3", "S");
      goto L0(r2);
    L2():
      r = dyn base("3RS3R", "3RSS", "3RSR", "3R", "3", "S");
      goto L0(r);
    };
    goto L1(p);
  L1(kind_orDefault):
    st kind = kind_orDefault;
    twiceit_isMissing = missing.0(twiceit);
    if twiceit_isMissing then L2(FALSE) else L2(twiceit);
  L2(twiceit_orDefault):
    st twiceit = twiceit_orDefault;
    endrule_isMissing = missing.0(endrule);
    if endrule_isMissing then L3() else L4(endrule);
  L3():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      c1 = ldf c in base;
      r6 = dyn c1("Tukey", "copy");
      goto L0(r6);
    L2():
      r4 = dyn base1("Tukey", "copy");
      goto L0(r4);
    };
    goto L4(p1);
  L4(endrule_orDefault):
    st endrule = endrule_orDefault;
    do_ends_isMissing = missing.0(do_ends);
    if do_ends_isMissing then L5(FALSE) else L5(do_ends);
  L5(do_ends_orDefault):
    st `do.ends` = do_ends_orDefault;
    sym2 = ldf `is.numeric`;
    base2 = ldf `is.numeric` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L6(r9):
    r11 = `!`(r9);
    c2 = `as.logical`(r11);
    if c2 then L42() else L7();
  L38():
    x1 = ld x;
    check L40() else D0();
  L39():
    r8 = dyn base2(<sym x>);
    goto L6(r8);
  D0():
    deopt 2 [x1];
  L7():
    goto L8();
  L8():
    sym3 = ldf anyNA;
    base3 = ldf anyNA in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L40():
    x2 = force? x1;
    checkMissing(x2);
    is_numeric = ldf `is.numeric` in base;
    r10 = dyn is_numeric(x2);
    check L41() else D1();
  L42():
    stop = ldf stop;
    check L43() else D2();
  D1():
    deopt 5 [r10];
  D2():
    deopt 8 [];
  L9(r15):
    c3 = `as.logical`(r15);
    if c3 then L50() else L10();
  L41():
    goto L6(r10);
  L43():
    r12 = dyn stop("attempt to smooth non-numeric values");
    check L44() else D3();
  L46():
    x3 = ld x;
    check L48() else D4();
  L47():
    r14 = dyn base3(<sym x>);
    goto L9(r14);
  D3():
    deopt 10 [r12];
  D4():
    deopt 15 [x3];
  L10():
    goto L11();
  L11():
    match_arg = ldf `match.arg`;
    check L54() else D8();
  L44():
    goto L8();
  L48():
    x4 = force? x3;
    checkMissing(x4);
    anyNA = ldf anyNA in base;
    r16 = dyn anyNA(x4);
    check L49() else D5();
  L50():
    stop1 = ldf stop;
    check L51() else D6();
  D5():
    deopt 18 [r16];
  D6():
    deopt 20 [];
  D8():
    deopt 26 [];
  L49():
    goto L9(r16);
  L51():
    r17 = dyn stop1("attempt to smooth NA values");
    check L52() else D7();
  L54():
    p2 = prom<V +>{
      endrule1 = ld endrule;
      endrule2 = force? endrule1;
      checkMissing(endrule2);
      return endrule2;
    };
    r20 = dyn match_arg(p2);
    check L55() else D9();
  D7():
    deopt 22 [r17];
  D9():
    deopt 28 [r20];
  L52():
    goto L11();
  L55():
    st endrule = r20;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L12(r22):
    st rules = r22;
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L59() else L60();
  L56():
    c4 = ldf c in base;
    r23 = dyn c4("copy", "Tukey");
    check L58() else D10();
  L57():
    r21 = dyn base4("copy", "Tukey");
    goto L12(r21);
  D10():
    deopt 35 [r23];
  L13(r25):
    c5 = `as.logical`(r25);
    if c5 then L64() else L14();
  L58():
    goto L12(r23);
  L59():
    pmatch = ldf pmatch;
    check L61() else D11();
  L60():
    r24 = dyn base5(<lang `<-`(iend, pmatch(endrule, rules))>);
    goto L13(r24);
  D11():
    deopt 40 [];
  L14():
    goto L15();
  L15():
    match_arg1 = ldf `match.arg`;
    check L68() else D16();
  L61():
    p3 = prom<V +>{
      endrule3 = ld endrule;
      endrule4 = force? endrule3;
      checkMissing(endrule4);
      return endrule4;
    };
    p4 = prom<V +>{
      rules = ld rules;
      rules1 = force? rules;
      checkMissing(rules1);
      return rules1;
    };
    r28 = dyn pmatch(p3, p4);
    check L62() else D12();
  L64():
    stop2 = ldf stop;
    check L65() else D14();
  D12():
    deopt 43 [r28];
  D14():
    deopt 48 [];
  D16():
    deopt 54 [];
  L62():
    st iend = r28;
    is_na = ldf `is.na` in base;
    r29 = dyn is_na(r28);
    check L63() else D13();
  L65():
    r30 = dyn stop2("invalid 'endrule' argument");
    check L66() else D15();
  L68():
    p5 = prom<V +>{
      kind1 = ld kind;
      kind2 = force? kind1;
      checkMissing(kind2);
      return kind2;
    };
    r33 = dyn match_arg1(p5);
    check L69() else D17();
  D13():
    deopt 46 [r29];
  D15():
    deopt 50 [r30];
  D17():
    deopt 56 [r33];
  L63():
    goto L13(r29);
  L66():
    goto L15();
  L69():
    st kind = r33;
    startsWith = ldf startsWith;
    check L70() else D18();
  D18():
    deopt 59 [];
  L70():
    p6 = prom<V +>{
      kind3 = ld kind;
      kind4 = force? kind3;
      checkMissing(kind4);
      return kind4;
    };
    r35 = dyn startsWith(p6, "3RS");
    check L71() else D19();
  D19():
    deopt 62 [r35];
  L71():
    c6 = `as.logical`(r35);
    if c6 then L72() else L16(c6);
  L16(c8):
    c12 = `as.logical`(c8);
    if c12 then L75() else L17();
  L72():
    do_ends1 = ld `do.ends`;
    check L73() else D20();
  D20():
    deopt 63 [c6, do_ends1];
  L17():
    kind5 = ld kind;
    check L78() else D22();
  L18():
    sym7 = ldf match;
    base7 = ldf match in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L85() else L86();
  L73():
    do_ends2 = force? do_ends1;
    checkMissing(do_ends2);
    r36 = `!`(do_ends2);
    c9 = `as.logical`(r36);
    c10 = `&&`(c6, c9);
    goto L16(c10);
  L75():
    iend = ld iend;
    check L76() else D21();
  D21():
    deopt 67 [iend];
  D22():
    deopt 71 [kind5];
  L21(r44):
    st type = r44;
    sym9 = ldf `.Call`;
    base9 = ldf `.Call` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L92() else L93();
  L76():
    iend1 = force? iend;
    checkMissing(iend1);
    r37 = `-`(<missing>, iend1);
    st iend = r37;
    goto L18();
  L78():
    kind6 = force? kind5;
    checkMissing(kind6);
    r39 = `==`(kind6, "S");
    c13 = `as.logical`(r39);
    if c13 then L79() else L19();
  L85():
    kind7 = ld kind;
    check L87() else D25();
  L86():
    r43 = dyn base7(<sym kind>, <lang c("3RS3R", "3RSS", "3RSR", "3R", "3", "S")>);
    goto L21(r43);
  D25():
    deopt 86 [kind7];
  L19():
    goto L18();
  L23(r50):
    st smo = r50;
    twiceit1 = ld twiceit;
    check L101() else D33();
  L79():
    sym6 = ldf `as.logical`;
    base6 = ldf `as.logical` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L80() else L81();
  L87():
    kind8 = force? kind7;
    checkMissing(kind8);
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L88() else L89();
  L92():
    C_Rsm = ld C_Rsm;
    check L94() else D28();
  L93():
    r49 = dyn base9(<sym C_Rsm>, <lang as.double(x)>, <sym type>, <sym iend>);
    goto L23(r49);
  D28():
    deopt 104 [C_Rsm];
  D33():
    deopt 115 [twiceit1];
  L20(r41):
    st iend = r41;
    goto L18();
  L22(r46):
    match = ldf match in base;
    r48 = dyn match(kind8, r46, NA_INT, NULL);
    check L91() else D27();
  L80():
    do_ends3 = ld `do.ends`;
    check L82() else D23();
  L81():
    r40 = dyn base6(<sym do.ends>);
    goto L20(r40);
  L88():
    c14 = ldf c in base;
    r47 = dyn c14("3RS3R", "3RSS", "3RSR", "3R", "3", "S");
    check L90() else D26();
  L89():
    r45 = dyn base8("3RS3R", "3RSS", "3RSR", "3R", "3", "S");
    goto L22(r45);
  L94():
    C_Rsm1 = force? C_Rsm;
    checkMissing(C_Rsm1);
    sym10 = ldf `as.double`;
    base10 = ldf `as.double` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L95() else L96();
  L101():
    twiceit2 = force? twiceit1;
    checkMissing(twiceit2);
    c15 = `as.logical`(twiceit2);
    if c15 then L102() else L25();
  D23():
    deopt 77 [do_ends3];
  D26():
    deopt 97 [r47];
  D27():
    deopt 101 [r48];
  L24(C_Rsm4, r52):
    type = ld type;
    check L99() else D31();
  L25():
    goto L35();
  L35():
    is_ts = ldf `is.ts`;
    check L162() else D46();
  L82():
    do_ends4 = force? do_ends3;
    checkMissing(do_ends4);
    as_logical = ldf `as.logical` in base;
    r42 = dyn as_logical(do_ends4);
    check L83() else D24();
  L90():
    goto L22(r47);
  L91():
    goto L21(r48);
  L95():
    x5 = ld x;
    check L97() else D29();
  L96():
    r51 = dyn base10(<sym x>);
    goto L24(C_Rsm1, r51);
  L102():
    smooth = ldf smooth;
    check L103() else D34();
  D24():
    deopt 80 [r42];
  D29():
    deopt 107 [C_Rsm1, x5];
  D31():
    deopt 110 [C_Rsm4, r52, type];
  D34():
    deopt 118 [];
  D46():
    deopt 184 [];
  L83():
    goto L20(r42);
  L97():
    x6 = force? x5;
    checkMissing(x6);
    as_double = ldf `as.double` in base;
    r53 = dyn as_double(x6);
    check L98() else D30();
  L99():
    type1 = force? type;
    checkMissing(type1);
    iend2 = ld iend;
    check L100() else D32();
  L103():
    p7 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      smo = ld smo;
      smo1 = force? smo;
      checkMissing(smo1);
      c16 = `is.object`(smo1);
      if c16 then L1() else L2(x8, smo1);
    L0(x12, dx1):
      r56 = `-`(x12, dx1);
      return r56;
    L1():
      dr = tryDispatchBuiltin.1("$", smo1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(x8, dr);
    L2(x10, smo3):
      r55 = `$`(smo3, <sym y>);
      goto L0(x10, r55);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(x8, dx);
    };
    p8 = prom<V +>{
      kind9 = ld kind;
      kind10 = force? kind9;
      checkMissing(kind10);
      return kind10;
    };
    p9 = prom<V +>{
      endrule5 = ld endrule;
      endrule6 = force? endrule5;
      checkMissing(endrule6);
      return endrule6;
    };
    p10 = prom<V +>{
      do_ends5 = ld `do.ends`;
      do_ends6 = force? do_ends5;
      checkMissing(do_ends6);
      return do_ends6;
    };
    r61 = dyn smooth[, kind, twiceit, endrule, `do.ends`](p7, p8, FALSE, p9, p10);
    check L104() else D35();
  L162():
    p11 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r100 = dyn is_ts(p11);
    check L163() else D47();
  D30():
    deopt 110 [C_Rsm1, r53];
  D32():
    deopt 111 [C_Rsm4, r52, type1, iend2];
  D35():
    deopt 128 [r61];
  D47():
    deopt 186 [r100];
  L98():
    goto L24(C_Rsm1, r53);
  L100():
    iend3 = force? iend2;
    checkMissing(iend3);
    vargs = dots[r52, type1, iend3];
    r54 = `.Call`(C_Rsm4, vargs, <missing>);
    goto L23(r54);
  L104():
    st r = r61;
    smo4 = ld smo;
    check L105() else D36();
  L163():
    c44 = `as.logical`(r100);
    if c44 then L164() else L36();
  D36():
    deopt 130 [smo4];
  L36():
    goto L37();
  L37():
    structure = ldf structure;
    check L172() else D50();
  L105():
    smo5 = force? smo4;
    checkMissing(smo5);
    c17 = `is.object`(smo5);
    if c17 then L107() else L108(smo5);
  L164():
    ts = ldf ts;
    check L165() else D48();
  D48():
    deopt 188 [];
  D50():
    deopt 201 [];
  L106(dx3):
    r63 = ld r;
    check L110() else D37();
  L107():
    dr2 = tryDispatchBuiltin.1("$", smo5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L109() else L108(dr2);
  L108(smo7):
    r62 = `$`(smo7, <sym y>);
    goto L106(r62);
  L165():
    p12 = prom<V +>{
      smo24 = ld smo;
      smo25 = force? smo24;
      checkMissing(smo25);
      c45 = `is.object`(smo25);
      if c45 then L1() else L2(smo25);
    L0(dx22):
      return dx22;
    L1():
      dr18 = tryDispatchBuiltin.1("$", smo25);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(smo27):
      r101 = `$`(smo27, <sym y>);
      goto L0(r101);
    L3():
      dx21 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx21);
    };
    p14 = prom<V +>{
      start = ldf start;
      p13 = prom<V +>{
        x15 = ld x;
        x16 = force? x15;
        checkMissing(x16);
        return x16;
      };
      r104 = dyn start(p13);
      return r104;
    };
    p16 = prom<V +>{
      frequency = ldf frequency;
      p15 = prom<V +>{
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        return x18;
      };
      r107 = dyn frequency(p15);
      return r107;
    };
    r109 = dyn ts[, start, frequency](p12, p14, p16);
    check L166() else D49();
  L172():
    p17 = prom<V +>{
      smo28 = ld smo;
      smo29 = force? smo28;
      checkMissing(smo29);
      c47 = `is.object`(smo29);
      if c47 then L1() else L2(smo29);
    L0(dx26):
      return dx26;
    L1():
      dr22 = tryDispatchBuiltin.1("$", smo29);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(smo31):
      r116 = `$`(smo31, <sym y>);
      goto L0(r116);
    L3():
      dx25 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx25);
    };
    p18 = prom<V +>{
      kind11 = ld kind;
      kind12 = force? kind11;
      checkMissing(kind12);
      return kind12;
    };
    p19 = prom<V +>{
      twiceit3 = ld twiceit;
      twiceit4 = force? twiceit3;
      checkMissing(twiceit4);
      return twiceit4;
    };
    p20 = prom<V +>{
      smo32 = ld smo;
      smo33 = force? smo32;
      checkMissing(smo33);
      c48 = `is.object`(smo33);
      if c48 then L1() else L2(smo33);
    L0(dx28):
      return dx28;
    L1():
      dr24 = tryDispatchBuiltin.1("$", smo33);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(smo35):
      r120 = `$`(smo35, <sym iter>);
      goto L0(r120);
    L3():
      dx27 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx27);
    };
    p21 = prom<V +>{
      smo36 = ld smo;
      smo37 = force? smo36;
      checkMissing(smo37);
      c49 = `is.object`(smo37);
      if c49 then L1() else L2(smo37);
    L0(dx30):
      return dx30;
    L1():
      dr26 = tryDispatchBuiltin.1("$", smo37);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(smo39):
      r122 = `$`(smo39, <sym changed>);
      goto L0(r122);
    L3():
      dx29 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx29);
    };
    p23 = prom<V +>{
      startsWith1 = ldf startsWith;
      p22 = prom<V +>{
        kind13 = ld kind;
        kind14 = force? kind13;
        checkMissing(kind14);
        return kind14;
      };
      r125 = dyn startsWith1(p22, "3");
      c50 = `as.logical`(r125);
      if c50 then L2() else L0();
    L0():
      invisible.0();
      return NULL;
    L2():
      rules2 = ld rules;
      rules3 = force? rules2;
      checkMissing(rules3);
      c51 = `is.object`(rules3);
      if c51 then L3() else L4(rules3);
    L1(dx32):
      return dx32;
    L3():
      dr28 = tryDispatchBuiltin.1("[", rules3);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L5() else L4(dr28);
    L4(rules5):
      iend4 = ld iend;
      iend5 = force? iend4;
      __ = ldf `[` in base;
      r126 = dyn __(rules5, iend5);
      goto L1(r126);
    L5():
      dx31 = getTryDispatchBuiltinValue(dr28);
      goto L1(dx31);
    };
    p24 = prom<V +>{
      match_call = ldf `match.call`;
      r128 = dyn match_call();
      return r128;
    };
    p26 = prom<V +>{
      sym15 = ldf c;
      base15 = ldf c in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L3() else L4();
    L0(r131):
      return r131;
    L3():
      is_ts1 = ldf `is.ts`;
      p25 = prom<V +>{
        x19 = ld x;
        x20 = force? x19;
        checkMissing(x20);
        return x20;
      };
      r133 = dyn is_ts1(p25);
      c52 = `as.logical`(r133);
      if c52 then L5() else L1();
    L4():
      r130 = dyn base15("tukeysmooth", <lang if(is.ts(x), "ts")>);
      goto L0(r130);
    L1():
      goto L2(NULL);
    L2(r134):
      c53 = ldf c in base;
      r135 = dyn c53("tukeysmooth", r134);
      goto L0(r135);
    L5():
      goto L2("ts");
    };
    r137 = dyn structure[, kind, twiced, iter, changed, endrule, call, class](p17, p18, p19, p20, p21, p23, p24, p26);
    check L173() else D51();
  D37():
    deopt 132 [dx3, r63];
  D49():
    deopt 194 [r109];
  D51():
    deopt 217 [r137];
  L109():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L106(dx2);
  L110():
    r64 = force? r63;
    checkMissing(r64);
    r65 = `+`(dx3, r64);
    l = ld smo;
    c18 = `is.object`(l);
    if c18 then L112() else L113(r65, l);
  L166():
    l9 = ld smo;
    c46 = `is.object`(l9);
    if c46 then L168() else L169(r109, l9);
  L173():
    popenv;
    return r137;
  L111(dx5):
    st smo = dx5;
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L115() else L116();
  L112():
    dr4 = tryDispatchBuiltin.0("$<-", l, r65);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L114() else L113(r65, dr4);
  L113(r67, l2):
    r70 = `$<-`(l2, <sym y>, r65);
    goto L111(r70);
  L167(r113, dx24):
    st smo = dx24;
    goto L37();
  L168():
    dr20 = tryDispatchBuiltin.0("$<-", l9, r109);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L170() else L169(r109, dr20);
  L169(r111, l11):
    r114 = `$<-`(l11, <sym y>, r109);
    goto L167(r111, r114);
  L26(r72):
    r74 = `!`(r72);
    c21 = `as.logical`(r74);
    if c21 then L122() else L27();
  L114():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L111(dx4);
  L115():
    smo8 = ld smo;
    check L117() else D38();
  L116():
    r71 = dyn base11(<lang `$`(smo, iter)>);
    goto L26(r71);
  L170():
    dx23 = getTryDispatchBuiltinValue(dr20);
    goto L167(r109, dx23);
  D38():
    deopt 139 [smo8];
  L27():
    goto L29();
  L29():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L137() else L138();
  L117():
    smo9 = force? smo8;
    checkMissing(smo9);
    c19 = `is.object`(smo9);
    if c19 then L119() else L120(smo9);
  L122():
    smo12 = ld smo;
    check L123() else D39();
  D39():
    deopt 144 [smo12];
  L30(r89):
    r91 = `!`(r89);
    c26 = `as.logical`(r91);
    if c26 then L144() else L31();
  L118(dx7):
    c20 = `==`(dx7, NULL);
    goto L26(c20);
  L119():
    dr6 = tryDispatchBuiltin.1("$", smo9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L121() else L120(dr6);
  L120(smo11):
    r73 = `$`(smo11, <sym iter>);
    goto L118(r73);
  L123():
    smo13 = force? smo12;
    checkMissing(smo13);
    c22 = `is.object`(smo13);
    if c22 then L125() else L126(smo13);
  L137():
    smo16 = ld smo;
    check L139() else D42();
  L138():
    r88 = dyn base13(<lang `$`(smo, changed)>);
    goto L30(r88);
  D42():
    deopt 160 [smo16];
  L31():
    goto L34(NULL);
  L34(c42):
    goto L35();
  L121():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L118(dx6);
  L124(dx9):
    sym12 = ldf attr;
    base12 = ldf attr in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L128() else L129();
  L125():
    dr8 = tryDispatchBuiltin.1("$", smo13);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L127() else L126(dr8);
  L126(smo15):
    r75 = `$`(smo15, <sym iter>);
    goto L124(r75);
  L139():
    smo17 = force? smo16;
    checkMissing(smo17);
    c24 = `is.object`(smo17);
    if c24 then L141() else L142(smo17);
  L144():
    smo20 = ld smo;
    check L145() else D43();
  D43():
    deopt 165 [smo20];
  L28(dx12, r77):
    r81 = `+`(dx12, r77);
    l3 = ld smo;
    c23 = `is.object`(l3);
    if c23 then L133() else L134(r81, l3);
  L127():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L124(dx8);
  L128():
    r78 = ld r;
    check L130() else D40();
  L129():
    r76 = dyn base12(<sym r>, "iter");
    goto L28(dx9, r76);
  L140(dx16):
    c25 = `==`(dx16, NULL);
    goto L30(c25);
  L141():
    dr12 = tryDispatchBuiltin.1("$", smo17);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L143() else L142(dr12);
  L142(smo19):
    r90 = `$`(smo19, <sym changed>);
    goto L140(r90);
  L145():
    smo21 = force? smo20;
    checkMissing(smo21);
    c27 = `is.object`(smo21);
    if c27 then L147() else L148(smo21);
  D40():
    deopt 148 [dx9, r78];
  L130():
    r79 = force? r78;
    checkMissing(r79);
    attr = ldf attr in base;
    r80 = dyn attr(r79, "iter");
    check L131() else D41();
  L132(r85, dx14):
    st smo = dx14;
    goto L29();
  L133():
    dr10 = tryDispatchBuiltin.0("$<-", l3, r81);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L135() else L134(r81, dr10);
  L134(r83, l5):
    r86 = `$<-`(l5, <sym iter>, r81);
    goto L132(r83, r86);
  L143():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L140(dx15);
  L146(dx18):
    c28 = `as.logical`(dx18);
    if c28 then L32(c28) else L150();
  L147():
    dr14 = tryDispatchBuiltin.1("$", smo21);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L149() else L148(dr14);
  L148(smo23):
    r92 = `$`(smo23, <sym changed>);
    goto L146(r92);
  D41():
    deopt 152 [dx9, r80];
  L32(c29):
    l6 = ld smo;
    c37 = `is.object`(l6);
    if c37 then L157() else L158(c29, l6);
  L131():
    goto L28(dx9, r80);
  L135():
    dx13 = getTryDispatchBuiltinValue(dr10);
    goto L132(r81, dx13);
  L149():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L146(dx17);
  L150():
    sym14 = ldf attr;
    base14 = ldf attr in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L151() else L152();
  L33(c33, r94):
    c34 = `as.logical`(r94);
    c35 = `||`(c33, c34);
    goto L32(c35);
  L151():
    r95 = ld r;
    check L153() else D44();
  L152():
    r93 = dyn base14(<sym r>, "changed");
    goto L33(c28, r93);
  L156(c41, dx20):
    st smo = dx20;
    goto L34(c41);
  L157():
    dr16 = tryDispatchBuiltin.0("$<-", l6, c29);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L159() else L158(c29, dr16);
  L158(c39, l8):
    r98 = `$<-`(l8, <sym changed>, c29);
    goto L156(c39, r98);
  D44():
    deopt 170 [c28, r95];
  L153():
    r96 = force? r95;
    checkMissing(r96);
    attr1 = ldf attr in base;
    r97 = dyn attr1(r96, "changed");
    check L154() else D45();
  L159():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L156(c29, dx19);
  D45():
    deopt 174 [c28, r97];
  L154():
    goto L33(c28, r97);
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg smooth:cls, reg smooth1:cls, reg x1:*, reg x2:V, reg p:p(V +), reg ddd1:dots?, reg r1:V, reg p1:p(V +), reg ddd2:dots?, reg r3:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    smooth = ldf smooth;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      smooth1 = ldf smooth;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      ddd1 = ld `...`;
      r1 = dyn smooth1[, , `...`](p, "3R", ddd1);
      return r1;
    };
    ddd2 = ld `...`;
    r3 = dyn smooth[, , `...`](p1, "S", ddd2);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}
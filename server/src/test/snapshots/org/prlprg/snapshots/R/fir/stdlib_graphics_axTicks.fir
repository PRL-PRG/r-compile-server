fun main() {
  () -+> V { reg r:cls, reg plot:cls, reg p:p(V +), reg p1:p(V +), reg r3:V, reg axTicks:cls, reg r4:V, reg axTicks1:cls, reg r5:V, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg axTicks2:cls, reg r8:V, reg axTicks3:cls, reg r9:V, reg identical:cls, reg r10:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg axTicks4:cls, reg r14:V, reg axTicks5:cls, reg r15:V, reg identical1:cls, reg r16:V, reg p3:p(V +), reg r18:V, reg par:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg c:cls, reg r21:V, reg p4:p(V +), reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:R, reg r28:V, reg c1:cls, reg r29:V, reg r30:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg plot1:cls, reg x1:*, reg x2:V, reg p5:p(V +), reg r32:V, reg cat:cls, reg formatC:cls, reg par1:cls, reg r33:V, reg p6:p(V +), reg r35:V, reg p7:p(V +), reg axTicks6:cls, reg r37:V, reg p8:p(V +), reg r39:V, reg rug:cls, reg T:*, reg T1:V, reg p9:p(V +), reg adjustcolor:cls, reg r41:V, reg p10:p(V +), reg r43:V, reg par2:cls, reg op:*, reg op1:V, reg p11:p(V +), reg r45:V, reg r46:V, reg r47:V, reg r48:V, reg plot2:cls, reg x3:*, reg x4:V, reg p12:p(V +), reg r50:V, reg p13:p(V +), reg r52:V, reg axTicks7:cls, reg r53:V, reg axTicks8:cls, reg r54:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r55:V, reg r56:V, reg c3:cls, reg r57:V, reg r58:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r59:V, reg r60:V, reg ylims:*, reg ylims1:V, reg log10:cls, reg r61:V, reg axTicks9:cls, reg usr_i:*, reg usr_i1:V, reg p14:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r63:V, reg r64:V, reg get_axp:cls, reg usr_i2:*, reg usr_i3:V, reg p15:p(V +), reg r66:V, reg c4:cls, reg r67:V, reg p16:p(V +), reg r69:V, reg extendrange:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r70:V, reg r71:V, reg ylims2:*, reg ylims3:V, reg log11:cls, reg r72:V, reg p17:p(V +), reg r74:V, reg axTicks10:cls, reg usr_r:*, reg usr_r1:V, reg p18:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r76:V, reg r77:V, reg get_axp1:cls, reg usr_r2:*, reg usr_r3:V, reg p19:p(V +), reg r79:V, reg c5:cls, reg r80:V, reg p20:p(V +), reg r82:V, reg plot3:cls, reg p21:p(V +), reg ylims4:*, reg ylims5:V, reg p22:p(V +), reg r85:V, reg stopifnot1:cls, reg all_equal:cls, reg aT_i:*, reg aT_i1:V, reg p23:p(V +), reg axTicks11:cls, reg r87:V, reg p24:p(V +), reg r89:V, reg p25:p(V +), reg r91:V, reg plot4:cls, reg p26:p(V +), reg ylims6:*, reg ylims7:V, reg p27:p(V +), reg r94:V, reg stopifnot2:cls, reg all_equal1:cls, reg aT_r:*, reg aT_r1:V, reg p28:p(V +), reg axTicks12:cls, reg r96:V, reg p29:p(V +), reg r98:V, reg p30:p(V +), reg r100:V |
    mkenv;
    r = clos inner492180132;
    st axTicks = r;
    plot = ldf plot;
    check L5() else D0();
  D0():
    deopt 4 [];
  L5():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7>;
    };
    p1 = prom<V +>{
      return <real 210.0, 220.0, 230.0, 240.0, 250.0, 260.0, 270.0>;
    };
    r3 = dyn plot(p, p1);
    check L6() else D1();
  D1():
    deopt 7 [r3];
  L6():
    axTicks = ldf axTicks;
    check L7() else D2();
  D2():
    deopt 9 [];
  L7():
    r4 = dyn axTicks(1.0);
    check L8() else D3();
  D3():
    deopt 11 [r4];
  L8():
    axTicks1 = ldf axTicks;
    check L9() else D4();
  D4():
    deopt 13 [];
  L9():
    r5 = dyn axTicks1(2.0);
    check L10() else D5();
  D5():
    deopt 15 [r5];
  L10():
    stopifnot = ldf stopifnot;
    check L11() else D6();
  D6():
    deopt 17 [];
  L11():
    p2 = prom<V +>{
      sym = ldf identical;
      base = ldf identical in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r7):
      return r7;
    L1():
      axTicks2 = ldf axTicks;
      r8 = dyn axTicks2(1.0);
      axTicks3 = ldf axTicks;
      r9 = dyn axTicks3(3.0);
      identical = ldf identical in base;
      r10 = dyn identical(r8, r9, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r10);
    L2():
      r6 = dyn base(<lang axTicks(1.0)>, <lang axTicks(3.0)>);
      goto L0(r6);
    };
    p3 = prom<V +>{
      sym1 = ldf identical;
      base1 = ldf identical in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      axTicks4 = ldf axTicks;
      r14 = dyn axTicks4(2.0);
      axTicks5 = ldf axTicks;
      r15 = dyn axTicks5(4.0);
      identical1 = ldf identical in base;
      r16 = dyn identical1(r14, r15, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r16);
    L2():
      r12 = dyn base1(<lang axTicks(2.0)>, <lang axTicks(4.0)>);
      goto L0(r12);
    };
    r18 = dyn stopifnot(p2, p3);
    check L12() else D7();
  D7():
    deopt 20 [r18];
  L12():
    par = ldf par;
    check L13() else D8();
  D8():
    deopt 22 [];
  L13():
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      c = ldf c in base;
      r21 = dyn c(3.0, 1.0);
      goto L0(r21);
    L2():
      r19 = dyn base2(3.0, 1.0);
      goto L0(r19);
    };
    r23 = dyn par[mfrow](p4);
    check L14() else D9();
  D9():
    deopt 25 [r23];
  L14():
    st op = r23;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L15() else L16();
  L0(r27, r28):
    r30 = `*`(r27, r28);
    s = toForSeq(r30);
    l = length(s);
    i = 0;
    goto L1(i);
  L15():
    c1 = ldf c in base;
    r29 = dyn c1(1.0, 2.0, 8.0);
    check L17() else D10();
  L16():
    r26 = dyn base3(1.0, 2.0, 8.0);
    goto L0(9999.0, r26);
  D10():
    deopt 34 [9999.0, r29];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L18() else L2();
  L17():
    goto L0(9999.0, r29);
  L2():
    x = `[[`(s, i2, NULL, TRUE);
    st x = x;
    plot1 = ldf plot;
    check L19() else D11();
  L18():
    par2 = ldf par;
    check L25() else D17();
  D11():
    deopt 37 [i2];
  D17():
    deopt 62 [];
  L19():
    p5 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r32 = dyn plot1[, , log](p5, 9.0, "x");
    check L20() else D12();
  L25():
    p11 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r45 = dyn par2(p11);
    check L26() else D18();
  D12():
    deopt 42 [i2, r32];
  D18():
    deopt 64 [r45];
  L20():
    cat = ldf cat;
    check L21() else D13();
  L26():
    r46 = `:`(-3.0, 10.0);
    r47 = `^`(10.0, r46);
    r48 = `*`(9.9, r47);
    st x = r48;
    plot2 = ldf plot;
    check L27() else D19();
  D13():
    deopt 44 [i2];
  D19():
    deopt 75 [];
  L21():
    p7 = prom<V +>{
      formatC = ldf formatC;
      p6 = prom<V +>{
        par1 = ldf par;
        r33 = dyn par1("xaxp");
        return r33;
      };
      r35 = dyn formatC[, width](p6, 5.0);
      return r35;
    };
    p8 = prom<V +>{
      axTicks6 = ldf axTicks;
      r37 = dyn axTicks6(1.0);
      st T = r37;
      invisible.0();
      return r37;
    };
    r39 = dyn cat(p7, ";", p8, "\n");
    check L22() else D14();
  L27():
    p12 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p13 = prom<V +>{
      r50 = `:`(1.0, 14.0);
      return r50;
    };
    r52 = dyn plot2[, , log](p12, p13, "x");
    check L28() else D20();
  D14():
    deopt 49 [i2, r39];
  D20():
    deopt 80 [r52];
  L22():
    rug = ldf rug;
    check L23() else D15();
  L28():
    axTicks7 = ldf axTicks;
    check L29() else D21();
  D15():
    deopt 51 [i2];
  D21():
    deopt 82 [];
  L23():
    p9 = prom<V +>{
      T = ld T;
      T1 = force? T;
      checkMissing(T1);
      return T1;
    };
    p10 = prom<V +>{
      adjustcolor = ldf adjustcolor;
      r41 = dyn adjustcolor("red", 0.5);
      return r41;
    };
    r43 = dyn rug[, col, lwd](p9, p10, 4.0);
    check L24() else D16();
  L29():
    r53 = dyn axTicks7(1.0);
    check L30() else D22();
  D16():
    deopt 57 [i2, r43];
  D22():
    deopt 84 [r53];
  L24():
    goto L1(i2);
  L30():
    axTicks8 = ldf axTicks;
    check L31() else D23();
  D23():
    deopt 86 [];
  L31():
    r54 = dyn axTicks8[, nintLog](1.0, +Infinity);
    check L32() else D24();
  D24():
    deopt 90 [r54];
  L32():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L33() else L34();
  L3(r56):
    st ylims = r56;
    r58 = clos inner354062069;
    st get_axp = r58;
    sym5 = ldf log10;
    base5 = ldf log10 in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L36() else L37();
  L33():
    c3 = ldf c in base;
    r57 = dyn c3(0.2, 88.0);
    check L35() else D25();
  L34():
    r55 = dyn base4(0.2, 88.0);
    goto L3(r55);
  D25():
    deopt 96 [r57];
  L4(r60):
    st `usr.i` = r60;
    axTicks9 = ldf axTicks;
    check L40() else D28();
  L35():
    goto L3(r57);
  L36():
    ylims = ld ylims;
    check L38() else D26();
  L37():
    r59 = dyn base5(<sym ylims>);
    goto L4(r59);
  D26():
    deopt 103 [ylims];
  D28():
    deopt 109 [];
  L38():
    ylims1 = force? ylims;
    checkMissing(ylims1);
    log10 = ldf log10 in base;
    r61 = dyn log10(ylims1);
    check L39() else D27();
  L40():
    p14 = prom<V +>{
      usr_i = ld `usr.i`;
      usr_i1 = force? usr_i;
      checkMissing(usr_i1);
      return usr_i1;
    };
    p16 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r64):
      return r64;
    L1():
      get_axp = ldf get_axp;
      p15 = prom<V +>{
        usr_i2 = ld `usr.i`;
        usr_i3 = force? usr_i2;
        checkMissing(usr_i3);
        return usr_i3;
      };
      r66 = dyn get_axp(p15);
      c4 = ldf c in base;
      r67 = dyn c4(r66, 3.0);
      goto L0(r67);
    L2():
      r63 = dyn base6[, n](<lang get_axp(usr.i)>, 3.0);
      goto L0(r63);
    };
    r69 = dyn axTicks9[side, usr, axp, log, nintLog](2.0, p14, p16, TRUE, 5.0);
    check L41() else D29();
  D27():
    deopt 106 [r61];
  D29():
    deopt 120 [r69];
  L39():
    goto L4(r61);
  L41():
    st `aT.i` = r69;
    extendrange = ldf extendrange;
    check L42() else D30();
  D30():
    deopt 123 [];
  L42():
    p17 = prom<V +>{
      sym7 = ldf log10;
      base7 = ldf log10 in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r71):
      return r71;
    L1():
      ylims2 = ld ylims;
      ylims3 = force? ylims2;
      checkMissing(ylims3);
      log11 = ldf log10 in base;
      r72 = dyn log11(ylims3);
      goto L0(r72);
    L2():
      r70 = dyn base7(<sym ylims>);
      goto L0(r70);
    };
    r74 = dyn extendrange[r, f](p17, 0.04);
    check L43() else D31();
  D31():
    deopt 128 [r74];
  L43():
    st `usr.r` = r74;
    axTicks10 = ldf axTicks;
    check L44() else D32();
  D32():
    deopt 131 [];
  L44():
    p18 = prom<V +>{
      usr_r = ld `usr.r`;
      usr_r1 = force? usr_r;
      checkMissing(usr_r1);
      return usr_r1;
    };
    p20 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r77):
      return r77;
    L1():
      get_axp1 = ldf get_axp;
      p19 = prom<V +>{
        usr_r2 = ld `usr.r`;
        usr_r3 = force? usr_r2;
        checkMissing(usr_r3);
        return usr_r3;
      };
      r79 = dyn get_axp1(p19);
      c5 = ldf c in base;
      r80 = dyn c5(r79, 3.0);
      goto L0(r80);
    L2():
      r76 = dyn base8(<lang get_axp(usr.r)>, 3.0);
      goto L0(r76);
    };
    r82 = dyn axTicks10[side, usr, axp, log, nintLog](2.0, p18, p20, TRUE, 5.0);
    check L45() else D33();
  D33():
    deopt 142 [r82];
  L45():
    st `aT.r` = r82;
    plot3 = ldf plot;
    check L46() else D34();
  D34():
    deopt 145 [];
  L46():
    p21 = prom<V +>{
      return <int 0, 1>;
    };
    p22 = prom<V +>{
      ylims4 = ld ylims;
      ylims5 = force? ylims4;
      checkMissing(ylims5);
      return ylims5;
    };
    r85 = dyn plot3[, , log, yaxs](p21, p22, "y", "i");
    check L47() else D35();
  D35():
    deopt 152 [r85];
  L47():
    stopifnot1 = ldf stopifnot;
    check L48() else D36();
  D36():
    deopt 154 [];
  L48():
    p25 = prom<V +>{
      all_equal = ldf `all.equal`;
      p23 = prom<V +>{
        aT_i = ld `aT.i`;
        aT_i1 = force? aT_i;
        checkMissing(aT_i1);
        return aT_i1;
      };
      p24 = prom<V +>{
        axTicks11 = ldf axTicks;
        r87 = dyn axTicks11[side](2.0);
        return r87;
      };
      r89 = dyn all_equal(p23, p24);
      return r89;
    };
    r91 = dyn stopifnot1(p25);
    check L49() else D37();
  D37():
    deopt 156 [r91];
  L49():
    plot4 = ldf plot;
    check L50() else D38();
  D38():
    deopt 158 [];
  L50():
    p26 = prom<V +>{
      return <int 0, 1>;
    };
    p27 = prom<V +>{
      ylims6 = ld ylims;
      ylims7 = force? ylims6;
      checkMissing(ylims7);
      return ylims7;
    };
    r94 = dyn plot4[, , log, yaxs](p26, p27, "y", "r");
    check L51() else D39();
  D39():
    deopt 165 [r94];
  L51():
    stopifnot2 = ldf stopifnot;
    check L52() else D40();
  D40():
    deopt 167 [];
  L52():
    p30 = prom<V +>{
      all_equal1 = ldf `all.equal`;
      p28 = prom<V +>{
        aT_r = ld `aT.r`;
        aT_r1 = force? aT_r;
        checkMissing(aT_r1);
        return aT_r1;
      };
      p29 = prom<V +>{
        axTicks12 = ldf axTicks;
        r96 = dyn axTicks12[side](2.0);
        return r96;
      };
      r98 = dyn all_equal1(p28, p29);
      return r98;
    };
    r100 = dyn stopifnot2(p30);
    check L53() else D41();
  D41():
    deopt 169 [r100];
  L53():
    popenv;
    return r100;
  }
}
fun inner492180132(side, axp, usr, log, nintLog) {
  (reg side:*, reg axp:*, reg usr:*, reg log:*, reg nintLog:*) -+> V { var side:*, var axp:*, reg axp_isMissing:L, reg axp_orDefault:*, var usr:*, reg usr_isMissing:L, reg usr_orDefault:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, var nintLog:*, reg nintLog_isMissing:L, reg nintLog_orDefault:*, reg _in_:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg side1:*, reg side2:V, reg as_integer:cls, reg r2:V, reg p:p(V +), reg p1:p(V +), reg r5:V, reg r6:V, reg c:L, reg stop:cls, reg r7:V, reg side3:*, reg side4:V, reg __:cls, reg r9:V, reg r10:V, reg r11:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg axp1:*, reg axp2:V, reg c1:V, reg c2:L, reg par:cls, reg XY:cls, reg r14:V, reg p2:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg axp3:*, reg axp4:V, reg is_numeric:cls, reg r20:V, reg r21:V, reg c3:L, reg c4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg c8:L, reg r23:V, reg axp5:*, reg axp6:V, reg length:cls, reg r24:V, reg r25:V, reg c9:L, reg c10:V, reg c12:L, reg stop1:cls, reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg log1:*, reg log2:V, reg c13:V, reg c14:L, reg par1:cls, reg XY1:cls, reg r29:V, reg p3:p(V +), reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg log3:*, reg log4:V, reg c15:L, reg r35:V, reg c16:L, reg c17:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg c21:L, reg r37:V, reg log5:*, reg log6:V, reg anyNA:cls, reg r38:V, reg c22:L, reg c23:V, reg c25:L, reg stop2:cls, reg r39:V, reg log7:*, reg log8:V, reg c26:L, reg c28:V, reg axp7:*, reg axp8:V, reg c29:L, reg c31:L, reg axp10:V, reg dr:V, reg dc:L, reg dx:V, reg c33:L, reg dx1:V, reg __1:cls, reg r40:V, reg r41:V, reg c34:L, reg c35:V, reg c37:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg axp11:*, reg axp12:V, reg c38:L, reg axp14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __2:cls, reg r46:V, reg as_integer1:cls, reg r47:V, reg r48:V, reg any:cls, reg r49:V, reg r50:V, reg c39:L, reg stop3:cls, reg r51:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r53:V, reg r54:V, reg usr1:*, reg usr2:V, reg c40:V, reg c41:L, reg par2:cls, reg r55:V, reg c42:L, reg r57:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg is_x:*, reg is_x1:V, reg c43:L, reg r60:V, reg r61:v(I), reg __3:cls, reg r62:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r63:V, reg r64:V, reg usr3:*, reg usr4:V, reg is_numeric1:cls, reg r65:V, reg r66:V, reg c44:L, reg c45:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r67:V, reg c49:L, reg r68:V, reg usr5:*, reg usr6:V, reg length1:cls, reg r69:V, reg r70:V, reg c50:L, reg c51:V, reg c53:L, reg stop4:cls, reg r71:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r72:V, reg r73:V, reg nintLog1:*, reg nintLog2:V, reg c54:V, reg c55:L, reg par3:cls, reg r74:V, reg c56:L, reg r76:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg is_x2:*, reg is_x3:V, reg r77:V, reg __4:cls, reg r78:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r79:V, reg r80:V, reg nintLog3:*, reg nintLog4:V, reg is_finite:cls, reg r81:V, reg c57:L, reg axisTicks:cls, reg usr7:*, reg usr8:V, reg p4:p(V +), reg log9:*, reg log10:V, reg p5:p(V +), reg axp15:*, reg axp16:V, reg p6:p(V +), reg nintLog5:*, reg nintLog6:V, reg p7:p(V +), reg r86:V, reg is_unsorted:cls, reg usr9:*, reg usr10:V, reg p8:p(V +), reg r88:V, reg c58:L, reg usr11:*, reg usr12:V, reg c59:L, reg usr14:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r89:V, reg axp17:*, reg axp18:V, reg c60:L, reg axp20:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __6:cls, reg r90:V, reg axp21:*, reg axp22:V, reg c61:L, reg axp24:V, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg __7:cls, reg r91:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r92:V, reg r93:V, reg round:cls, reg r94:V, reg ii:*, reg ii1:V, reg c62:L, reg r96:R, reg ii3:V, reg dr14:V, reg dc7:L, reg dx17:V, reg r98:R, reg dx18:V, reg __8:cls, reg r99:V, reg iC:*, reg iC1:V, reg r100:V, reg r101:V, reg ii4:*, reg ii5:V, reg c63:L, reg r104:R, reg r105:V, reg ii7:V, reg dr16:V, reg dc8:L, reg dx19:V, reg r108:R, reg r109:V, reg dx20:V, reg __9:cls, reg r110:V, reg r111:V, reg r112:V, reg iC2:*, reg iC3:V, reg c64:L, reg c65:L, reg c66:L, reg i_ddd:dots, reg i:V, reg c67:L, reg c68:L, reg c69:L, reg r113:V, reg x10:*, reg x11:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r114:V, reg r115:V, reg outer:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r116:V, reg r117:V, reg c70:cls, reg r118:V, reg p9:p(V +), reg x12:*, reg x13:V, reg p10:p(V +), reg r121:V, reg c71:cls, reg r122:V, reg c72:L, reg r124:V, reg dr18:V, reg dc9:L, reg dx21:V, reg dx22:V, reg __10:cls, reg r125:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r126:V, reg r127:V, reg outer1:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r128:V, reg r129:V, reg c73:cls, reg r130:V, reg p11:p(V +), reg x14:*, reg x15:V, reg p12:p(V +), reg r133:V, reg c74:cls, reg r134:V, reg c75:L, reg r136:V, reg dr20:V, reg dc10:L, reg dx23:V, reg dx24:V, reg __11:cls, reg r137:V, reg needSort:*, reg needSort1:V, reg c76:L, reg rev:cls, reg r138:*, reg r139:V, reg p13:p(V +), reg r141:V, reg r143:*, reg r144:V, reg c77:L, reg r146:V, reg dr22:V, reg dc11:L, reg dx25:V, reg dx26:V, reg usr15:*, reg usr16:V, reg c78:L, reg r148:V, reg usr18:V, reg dr24:V, reg dc12:L, reg dx27:V, reg r150:V, reg dx28:V, reg __12:cls, reg r151:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r154:V, reg r155:V, reg dx31:V, reg r156:V, reg r157:*, reg r158:V, reg log11:cls, reg r159:V, reg r160:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r165:V, reg r166:V, reg r167:V, reg r168:V, reg r169:*, reg r170:V, reg log12:cls, reg r171:V, reg usr19:*, reg usr20:V, reg c79:L, reg r175:V, reg r176:V, reg r177:V, reg usr22:V, reg dr26:V, reg dc13:L, reg dx32:V, reg r181:V, reg r182:V, reg r183:V, reg dx33:V, reg __13:cls, reg r184:V, reg r185:V, reg r186:V, reg __14:cls, reg r187:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r188:V, reg r189:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r190:V, reg r191:V, reg axp25:*, reg axp26:V, reg c80:L, reg axp28:V, reg dr28:V, reg dc14:L, reg dx34:V, reg dx35:V, reg __15:cls, reg r192:V, reg abs:cls, reg r193:V, reg r194:V, reg as_integer2:cls, reg r195:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r196:V, reg r197:V, reg axp29:*, reg axp30:V, reg c81:L, reg axp32:V, reg dr30:V, reg dc15:L, reg dx36:V, reg dx37:V, reg __16:cls, reg r198:V, reg axp33:*, reg axp34:V, reg c82:L, reg axp36:V, reg dr32:V, reg dc16:L, reg dx38:V, reg dx39:V, reg __17:cls, reg r199:V, reg n:*, reg n1:V, reg r200:V, reg seq_int:cls, reg r201:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r202:V, reg r203:V, reg n2:*, reg n3:V, reg max:cls, reg r204:V, reg n_:*, reg n_1:V, reg r205:V, reg l:*, reg c83:L, reg r207:R, reg l2:*, reg dr34:V, reg dc17:L, reg dx40:V, reg dx41:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r214:V, reg r215:R, reg l5:*, reg r216:R, reg r217:V, reg r218:*, reg r219:V, reg abs1:cls, reg r220:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r227:V, reg r228:R, reg l8:*, reg r229:R, reg r230:V, reg r231:V, reg axp37:*, reg axp38:V, reg c84:L, reg r235:R, reg l10:*, reg r236:R, reg r237:V, reg axp40:V, reg dr36:V, reg dc18:L, reg dx42:V, reg r241:R, reg l12:*, reg r242:R, reg r243:V, reg dx43:V, reg __18:cls, reg r244:V, reg N:*, reg N1:V, reg r245:V, reg axp41:*, reg axp42:V, reg c85:L, reg r250:R, reg l14:*, reg r251:R, reg r252:V, reg r253:V, reg axp44:V, reg dr38:V, reg dc19:L, reg dx44:V, reg r258:R, reg l16:*, reg r259:R, reg r260:V, reg r261:V, reg dx45:V, reg __19:cls, reg r262:V, reg N2:*, reg N3:V, reg r263:V, reg r264:V, reg abs2:cls, reg r265:V, reg r266:V, reg ___:cls, reg r267:V, reg r268:*, reg r269:V |
    mkenv;
    st side = side;
    axp_isMissing = missing.0(axp);
    if axp_isMissing then L0(NULL) else L0(axp);
  L0(axp_orDefault):
    st axp = axp_orDefault;
    usr_isMissing = missing.0(usr);
    if usr_isMissing then L1(NULL) else L1(usr);
  L1(usr_orDefault):
    st usr = usr_orDefault;
    log_isMissing = missing.0(log);
    if log_isMissing then L2(NULL) else L2(log);
  L2(log_orDefault):
    st log = log_orDefault;
    nintLog_isMissing = missing.0(nintLog);
    if nintLog_isMissing then L3(NULL) else L3(nintLog);
  L3(nintLog_orDefault):
    st nintLog = nintLog_orDefault;
    _in_ = ldf `%in%`;
    check L80() else D0();
  D0():
    deopt 1 [];
  L80():
    p = prom<V +>{
      sym = ldf `as.integer`;
      base = ldf `as.integer` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      st side = r1;
      visible.0();
      return r1;
    L1():
      side1 = ld side;
      side2 = force? side1;
      checkMissing(side2);
      as_integer = ldf `as.integer` in base;
      r2 = dyn as_integer(side2);
      goto L0(r2);
    L2():
      r = dyn base(<sym side>);
      goto L0(r);
    };
    p1 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    r5 = dyn _in_(p, p1);
    check L81() else D1();
  D1():
    deopt 4 [r5];
  L81():
    r6 = `!`(r5);
    c = `as.logical`(r6);
    if c then L82() else L4();
  L4():
    goto L5();
  L5():
    side3 = ld side;
    check L86() else D4();
  L82():
    stop = ldf stop;
    check L83() else D2();
  D2():
    deopt 7 [];
  D4():
    deopt 13 [side3];
  L83():
    r7 = dyn stop("'side' must be in {1:4}");
    check L84() else D3();
  L86():
    side4 = force? side3;
    checkMissing(side4);
    __ = ldf `%%` in base;
    r9 = dyn __(side4, 2.0);
    check L87() else D5();
  D3():
    deopt 9 [r7];
  D5():
    deopt 17 [r9];
  L84():
    goto L5();
  L87():
    r10 = `==`(r9, 1.0);
    st `is.x` = r10;
    r11 = clos `inner-2118155194`;
    st XY = r11;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L88() else L89();
  L6(r13):
    c2 = `as.logical`(r13);
    if c2 then L91() else L7();
  L88():
    axp1 = ld axp;
    check L90() else D6();
  L89():
    r12 = dyn base1(<sym axp>);
    goto L6(r12);
  D6():
    deopt 25 [axp1];
  L7():
    sym2 = ldf `is.numeric`;
    base2 = ldf `is.numeric` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L95() else L96();
  L8():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L109() else L110();
  L90():
    axp2 = force? axp1;
    checkMissing(axp2);
    c1 = `==`(axp2, NULL);
    goto L6(c1);
  L91():
    par = ldf par;
    check L92() else D7();
  D7():
    deopt 29 [];
  L9(r19):
    r21 = `!`(r19);
    c3 = `as.logical`(r21);
    if c3 then L10(c3) else L99();
  L13(r28):
    c14 = `as.logical`(r28);
    if c14 then L112() else L14();
  L92():
    p2 = prom<V +>{
      XY = ldf XY;
      r14 = dyn XY("axp");
      return r14;
    };
    r16 = dyn par(p2);
    check L93() else D8();
  L95():
    axp3 = ld axp;
    check L97() else D9();
  L96():
    r18 = dyn base2(<sym axp>);
    goto L9(r18);
  L109():
    log1 = ld log;
    check L111() else D15();
  L110():
    r27 = dyn base4(<sym log>);
    goto L13(r27);
  D8():
    deopt 31 [r16];
  D9():
    deopt 35 [axp3];
  D15():
    deopt 56 [log1];
  L10(c4):
    c12 = `as.logical`(c4);
    if c12 then L105() else L12();
  L14():
    sym5 = ldf `is.logical`;
    base5 = ldf `is.logical` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L116() else L117();
  L15():
    log7 = ld log;
    check L129() else D23();
  L93():
    st axp = r16;
    goto L8();
  L97():
    axp4 = force? axp3;
    checkMissing(axp4);
    is_numeric = ldf `is.numeric` in base;
    r20 = dyn is_numeric(axp4);
    check L98() else D10();
  L99():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L100() else L101();
  L111():
    log2 = force? log1;
    checkMissing(log2);
    c13 = `==`(log2, NULL);
    goto L13(c13);
  L112():
    par1 = ldf par;
    check L113() else D16();
  D10():
    deopt 38 [r20];
  D16():
    deopt 60 [];
  D23():
    deopt 82 [log7];
  L11(c8, r23):
    r25 = `!=`(r23, 3.0);
    c9 = `as.logical`(r25);
    c10 = `||`(c8, c9);
    goto L10(c10);
  L12():
    goto L8();
  L16(r34):
    r35 = `!`(r34);
    c16 = `as.logical`(r35);
    if c16 then L17(c16) else L119();
  L98():
    goto L9(r20);
  L100():
    axp5 = ld axp;
    check L102() else D11();
  L101():
    r22 = dyn base3(<sym axp>);
    goto L11(c3, r22);
  L105():
    stop1 = ldf stop;
    check L106() else D13();
  L113():
    p3 = prom<V +>{
      XY1 = ldf XY;
      r29 = dyn XY1("log");
      return r29;
    };
    r31 = dyn par1(p3);
    check L114() else D17();
  L116():
    log3 = ld log;
    check L118() else D18();
  L117():
    r33 = dyn base5(<sym log>);
    goto L16(r33);
  L129():
    log8 = force? log7;
    checkMissing(log8);
    c26 = `as.logical`(log8);
    if c26 then L130() else L20(c26);
  D11():
    deopt 42 [c3, axp5];
  D13():
    deopt 50 [];
  D17():
    deopt 62 [r31];
  D18():
    deopt 65 [log3];
  L17(c17):
    c25 = `as.logical`(c17);
    if c25 then L125() else L19();
  L20(c28):
    c37 = `as.logical`(c28);
    if c37 then L136() else L22();
  L102():
    axp6 = force? axp5;
    checkMissing(axp6);
    length = ldf length in base;
    r24 = dyn length(axp6);
    check L103() else D12();
  L106():
    r26 = dyn stop1("invalid 'axp'");
    check L107() else D14();
  L114():
    st log = r31;
    goto L15();
  L118():
    log4 = force? log3;
    checkMissing(log4);
    c15 = `is.logical`(log4);
    goto L16(c15);
  L119():
    sym6 = ldf anyNA;
    base6 = ldf anyNA in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L120() else L121();
  L130():
    axp7 = ld axp;
    check L131() else D24();
  D12():
    deopt 45 [c3, r24];
  D14():
    deopt 52 [r26];
  D24():
    deopt 84 [c26, axp7];
  L18(c21, r37):
    c22 = `as.logical`(r37);
    c23 = `||`(c21, c22);
    goto L17(c23);
  L19():
    goto L15();
  L22():
    sym21 = ldf `as.integer`;
    base21 = ldf `as.integer` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L281() else L282();
  L103():
    goto L11(c3, r24);
  L107():
    goto L8();
  L120():
    log5 = ld log;
    check L122() else D19();
  L121():
    r36 = dyn base6(<sym log>);
    goto L18(c16, r36);
  L125():
    stop2 = ldf stop;
    check L126() else D21();
  L131():
    axp8 = force? axp7;
    checkMissing(axp8);
    c29 = `is.object`(axp8);
    if c29 then L132() else L133(c26, axp8);
  L136():
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L137() else L138();
  D19():
    deopt 71 [c16, log5];
  D21():
    deopt 77 [];
  L21(c33, dx1):
    r41 = `>`(dx1, 0.0);
    c34 = `as.logical`(r41);
    c35 = `&&`(c33, c34);
    goto L20(c35);
  L23(r43):
    r50 = `!`(r43);
    c39 = `as.logical`(r50);
    if c39 then L147() else L26();
  L68(r189):
    st n = r189;
    sym23 = ldf `seq.int`;
    base23 = ldf `seq.int` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L291() else L292();
  L122():
    log6 = force? log5;
    checkMissing(log6);
    anyNA = ldf anyNA in base;
    r38 = dyn anyNA(log6);
    check L123() else D20();
  L126():
    r39 = dyn stop2("invalid 'log'");
    check L127() else D22();
  L132():
    dr = tryDispatchBuiltin.1("[", axp8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L134() else L133(c26, dr);
  L133(c31, axp10):
    __1 = ldf `[` in base;
    r40 = dyn __1(axp10, 3);
    goto L21(c31, r40);
  L137():
    sym8 = ldf `as.integer`;
    base8 = ldf `as.integer` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L139() else L140();
  L138():
    r42 = dyn base7(<lang `==`(`(`(`<-`(iC, as.integer(`[`(axp, 3)))), `:`(1, 3))>);
    goto L23(r42);
  L281():
    sym22 = ldf abs;
    base22 = ldf abs in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L283() else L284();
  L282():
    r188 = dyn base21(<lang `+`(abs(`[`(axp, 3)), 0.25)>);
    goto L68(r188);
  D20():
    deopt 74 [c16, r38];
  D22():
    deopt 79 [r39];
  L24(r45):
    st iC = r45;
    r48 = `==`(r45, <int 1, 2, 3>);
    any = ldf any in base;
    r49 = dyn any(r48);
    check L146() else D27();
  L26():
    goto L27();
  L27():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L151() else L152();
  L69(r191):
    r194 = `+`(r191, 0.25);
    as_integer2 = ldf `as.integer` in base;
    r195 = dyn as_integer2(r194);
    check L290() else D76();
  L71(r197):
    st r = r197;
    sym24 = ldf max;
    base24 = ldf max in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L303() else L304();
  L123():
    goto L18(c16, r38);
  L127():
    goto L15();
  L134():
    dx = getTryDispatchBuiltinValue(dr);
    goto L21(c26, dx);
  L139():
    axp11 = ld axp;
    check L141() else D25();
  L140():
    r44 = dyn base8(<lang `[`(axp, 3)>);
    goto L24(r44);
  L147():
    stop3 = ldf stop;
    check L148() else D28();
  L283():
    axp25 = ld axp;
    check L285() else D74();
  L284():
    r190 = dyn base22(<lang `[`(axp, 3)>);
    goto L69(r190);
  L291():
    axp29 = ld axp;
    check L293() else D77();
  L292():
    r196 = dyn base23[, , `length.out`](<lang `[`(axp, 1)>, <lang `[`(axp, 2)>, <lang `+`(n, 1)>);
    goto L71(r196);
  D25():
    deopt 96 [axp11];
  D27():
    deopt 107 [r49];
  D28():
    deopt 110 [];
  D74():
    deopt 299 [axp25];
  D76():
    deopt 309 [r195];
  D77():
    deopt 313 [axp29];
  L28(r54):
    c41 = `as.logical`(r54);
    if c41 then L154() else L29();
  L74(r203):
    st `n.` = r203;
    n_ = ld `n.`;
    check L307() else D83();
  L141():
    axp12 = force? axp11;
    checkMissing(axp12);
    c38 = `is.object`(axp12);
    if c38 then L142() else L143(axp12);
  L146():
    goto L23(r49);
  L148():
    r51 = dyn stop3("invalid positive 'axp[3]'");
    check L149() else D29();
  L151():
    usr1 = ld usr;
    check L153() else D30();
  L152():
    r53 = dyn base9(<sym usr>);
    goto L28(r53);
  L285():
    axp26 = force? axp25;
    checkMissing(axp26);
    c80 = `is.object`(axp26);
    if c80 then L286() else L287(axp26);
  L290():
    goto L68(r195);
  L293():
    axp30 = force? axp29;
    checkMissing(axp30);
    c81 = `is.object`(axp30);
    if c81 then L294() else L295(axp30);
  L303():
    n2 = ld n;
    check L305() else D81();
  L304():
    r202 = dyn base24(1, <sym n>);
    goto L74(r202);
  D29():
    deopt 112 [r51];
  D30():
    deopt 116 [usr1];
  D81():
    deopt 334 [n2];
  D83():
    deopt 340 [100.0, n_];
  L25(dx3):
    as_integer1 = ldf `as.integer` in base;
    r47 = dyn as_integer1(dx3);
    check L145() else D26();
  L29():
    sym10 = ldf `is.numeric`;
    base10 = ldf `is.numeric` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L164() else L165();
  L33():
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L178() else L179();
  L70(dx35):
    abs = ldf abs in base;
    r193 = dyn abs(dx35);
    check L289() else D75();
  L72(dx37):
    axp33 = ld axp;
    check L297() else D78();
  L142():
    dr2 = tryDispatchBuiltin.1("[", axp12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L144() else L143(dr2);
  L143(axp14):
    __2 = ldf `[` in base;
    r46 = dyn __2(axp14, 3);
    goto L25(r46);
  L149():
    goto L27();
  L153():
    usr2 = force? usr1;
    checkMissing(usr2);
    c40 = `==`(usr2, NULL);
    goto L28(c40);
  L154():
    par2 = ldf par;
    check L155() else D31();
  L286():
    dr28 = tryDispatchBuiltin.1("[", axp26);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L288() else L287(dr28);
  L287(axp28):
    __15 = ldf `[` in base;
    r192 = dyn __15(axp28, 3);
    goto L70(r192);
  L294():
    dr30 = tryDispatchBuiltin.1("[", axp30);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L296() else L295(dr30);
  L295(axp32):
    __16 = ldf `[` in base;
    r198 = dyn __16(axp32, 1);
    goto L72(r198);
  L305():
    n3 = force? n2;
    checkMissing(n3);
    max = ldf max in base;
    r204 = dyn max(1, n3);
    check L306() else D82();
  L307():
    n_1 = force? n_;
    checkMissing(n_1);
    r205 = `*`(100.0, n_1);
    st N = r205;
    l = ld r;
    c83 = `is.object`(l);
    if c83 then L308() else L309(0.0, l);
  D26():
    deopt 102 [r47];
  D31():
    deopt 120 [];
  D75():
    deopt 305 [r193];
  D78():
    deopt 318 [axp33];
  D82():
    deopt 337 [r204];
  L34(r64):
    r66 = `!`(r64);
    c44 = `as.logical`(r66);
    if c44 then L35(c44) else L168();
  L38(r73):
    c55 = `as.logical`(r73);
    if c55 then L181() else L39();
  L75(dx41):
    st r = dx41;
    r268 = ld r;
    check L328() else D91();
  L144():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L25(dx2);
  L145():
    goto L24(r47);
  L155():
    r55 = dyn par2("usr");
    check L156() else D32();
  L164():
    usr3 = ld usr;
    check L166() else D34();
  L165():
    r63 = dyn base10(<sym usr>);
    goto L34(r63);
  L178():
    nintLog1 = ld nintLog;
    check L180() else D40();
  L179():
    r72 = dyn base12(<sym nintLog>);
    goto L38(r72);
  L288():
    dx34 = getTryDispatchBuiltinValue(dr28);
    goto L70(dx34);
  L289():
    goto L69(r193);
  L296():
    dx36 = getTryDispatchBuiltinValue(dr30);
    goto L72(dx36);
  L297():
    axp34 = force? axp33;
    checkMissing(axp34);
    c82 = `is.object`(axp34);
    if c82 then L298() else L299(axp34);
  L306():
    goto L74(r204);
  L308():
    dr34 = tryDispatchBuiltin.0("[<-", l, 0.0);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L310() else L309(0.0, dr34);
  L309(r207, l2):
    sym25 = ldf abs;
    base25 = ldf abs in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L311() else L312();
  D32():
    deopt 122 [r55];
  D34():
    deopt 133 [usr3];
  D40():
    deopt 154 [nintLog1];
  D91():
    deopt 373 [r268];
  L35(c45):
    c53 = `as.logical`(c45);
    if c53 then L174() else L37();
  L39():
    goto L41();
  L41():
    sym13 = ldf `is.finite`;
    base13 = ldf `is.finite` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L189() else L190();
  L73(dx39):
    n = ld n;
    check L301() else D79();
  L76(r215, l5, r216, r217):
    sym26 = ldf abs;
    base26 = ldf abs in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L315() else L316();
  L156():
    c42 = `is.object`(r55);
    if c42 then L157() else L158(r55);
  L166():
    usr4 = force? usr3;
    checkMissing(usr4);
    is_numeric1 = ldf `is.numeric` in base;
    r65 = dyn is_numeric1(usr4);
    check L167() else D35();
  L168():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L169() else L170();
  L180():
    nintLog2 = force? nintLog1;
    checkMissing(nintLog2);
    c54 = `==`(nintLog2, NULL);
    goto L38(c54);
  L181():
    par3 = ldf par;
    check L182() else D41();
  L298():
    dr32 = tryDispatchBuiltin.1("[", axp34);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L300() else L299(dr32);
  L299(axp36):
    __17 = ldf `[` in base;
    r199 = dyn __17(axp36, 2);
    goto L73(r199);
  L310():
    dx40 = getTryDispatchBuiltinValue(dr34);
    goto L75(dx40);
  L311():
    r218 = ld r;
    check L313() else D84();
  L312():
    r214 = dyn base25(<sym r>);
    goto L76(r207, l2, 0.0, r214);
  L328():
    r269 = force? r268;
    checkMissing(r269);
    popenv;
    return r269;
  D35():
    deopt 136 [r65];
  D41():
    deopt 158 [];
  D79():
    deopt 323 [n];
  D84():
    deopt 349 [r207, l2, 0.0, r218];
  L30(dx5):
    st usr = dx5;
    goto L33();
  L36(c49, r68):
    r70 = `!=`(r68, 2.0);
    c50 = `as.logical`(r70);
    c51 = `||`(c49, c50);
    goto L35(c51);
  L37():
    goto L33();
  L42(r80):
    c57 = `as.logical`(r80);
    if c57 then L193() else L43();
  L77(r228, l8, r229, r230, r231):
    r266 = `<`(r230, r231);
    ___ = ldf `[<-` in base;
    r267 = dyn ___(l8, r229, r266);
    goto L75(r267);
  L157():
    dr4 = tryDispatchBuiltin.1("[", r55);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L159() else L158(dr4);
  L158(r57):
    is_x = ld `is.x`;
    check L160() else D33();
  L167():
    goto L34(r65);
  L169():
    usr5 = ld usr;
    check L171() else D36();
  L170():
    r67 = dyn base11(<sym usr>);
    goto L36(c44, r67);
  L174():
    stop4 = ldf stop;
    check L175() else D38();
  L182():
    r74 = dyn par3("lab");
    check L183() else D42();
  L189():
    nintLog3 = ld nintLog;
    check L191() else D44();
  L190():
    r79 = dyn base13(<sym nintLog>);
    goto L42(r79);
  L300():
    dx38 = getTryDispatchBuiltinValue(dr32);
    goto L73(dx38);
  L301():
    n1 = force? n;
    checkMissing(n1);
    r200 = `+`(n1, 1);
    seq_int = ldf `seq.int` in base;
    r201 = dyn seq_int(dx37, dx39, r200);
    check L302() else D80();
  L313():
    r219 = force? r218;
    checkMissing(r219);
    abs1 = ldf abs in base;
    r220 = dyn abs1(r219);
    check L314() else D85();
  L315():
    axp37 = ld axp;
    check L317() else D86();
  L316():
    r227 = dyn base26(<lang `-`(`/`(`[`(axp, 2), N), `/`(`[`(axp, 1), N))>);
    goto L77(r215, l5, r216, r217, r227);
  D33():
    deopt 123 [r57, is_x];
  D36():
    deopt 140 [c44, usr5];
  D38():
    deopt 148 [];
  D42():
    deopt 160 [r74];
  D44():
    deopt 171 [nintLog3];
  D80():
    deopt 329 [r201];
  D85():
    deopt 352 [r207, l2, 0.0, r220];
  D86():
    deopt 354 [r215, l5, r216, r217, axp37];
  L43():
    is_unsorted = ldf `is.unsorted`;
    check L197() else D48();
  L159():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L30(dx4);
  L160():
    is_x1 = force? is_x;
    checkMissing(is_x1);
    c43 = `as.logical`(is_x1);
    if c43 then L161() else L31();
  L171():
    usr6 = force? usr5;
    checkMissing(usr6);
    length1 = ldf length in base;
    r69 = dyn length1(usr6);
    check L172() else D37();
  L175():
    r71 = dyn stop4("invalid 'usr'");
    check L176() else D39();
  L183():
    c56 = `is.object`(r74);
    if c56 then L184() else L185(r74);
  L191():
    nintLog4 = force? nintLog3;
    checkMissing(nintLog4);
    is_finite = ldf `is.finite` in base;
    r81 = dyn is_finite(nintLog4);
    check L192() else D45();
  L193():
    axisTicks = ldf axisTicks;
    check L194() else D46();
  L302():
    goto L71(r201);
  L314():
    goto L76(r207, l2, 0.0, r220);
  L317():
    axp38 = force? axp37;
    checkMissing(axp38);
    c84 = `is.object`(axp38);
    if c84 then L318() else L319(r215, l5, r216, r217, axp38);
  D37():
    deopt 143 [c44, r69];
  D39():
    deopt 150 [r71];
  D45():
    deopt 174 [r81];
  D46():
    deopt 176 [];
  D48():
    deopt 186 [];
  L31():
    goto L32(r57, <int 3, 4>);
  L32(r60, r61):
    __3 = ldf `[` in base;
    r62 = dyn __3(r60, r61);
    goto L30(r62);
  L40(dx8):
    st nintLog = dx8;
    goto L41();
  L78(r241, l12, r242, r243, dx43):
    N = ld N;
    check L321() else D87();
  L161():
    goto L32(r57, <int 1, 2>);
  L172():
    goto L36(c44, r69);
  L176():
    goto L33();
  L184():
    dr6 = tryDispatchBuiltin.1("[", r74);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L186() else L185(dr6);
  L185(r76):
    is_x2 = ld `is.x`;
    check L187() else D43();
  L192():
    goto L42(r81);
  L194():
    p4 = prom<V +>{
      usr7 = ld usr;
      usr8 = force? usr7;
      checkMissing(usr8);
      return usr8;
    };
    p5 = prom<V +>{
      log9 = ld log;
      log10 = force? log9;
      checkMissing(log10);
      return log10;
    };
    p6 = prom<V +>{
      axp15 = ld axp;
      axp16 = force? axp15;
      checkMissing(axp16);
      return axp16;
    };
    p7 = prom<V +>{
      nintLog5 = ld nintLog;
      nintLog6 = force? nintLog5;
      checkMissing(nintLog6);
      return nintLog6;
    };
    r86 = dyn axisTicks[, log, axp, nint](p4, p5, p6, p7);
    check L195() else D47();
  L197():
    p8 = prom<V +>{
      usr9 = ld usr;
      usr10 = force? usr9;
      checkMissing(usr10);
      return usr10;
    };
    r88 = dyn is_unsorted(p8);
    check L198() else D49();
  L318():
    dr36 = tryDispatchBuiltin.1("[", axp38);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L320() else L319(r215, l5, r216, r217, dr36);
  L319(r235, l10, r236, r237, axp40):
    __18 = ldf `[` in base;
    r244 = dyn __18(axp40, 2);
    goto L78(r235, l10, r236, r237, r244);
  D43():
    deopt 162 [r76, 2, is_x2];
  D47():
    deopt 184 [r86];
  D49():
    deopt 188 [r88];
  D87():
    deopt 358 [r241, l12, r242, r243, dx43, N];
  L186():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L40(dx7);
  L187():
    is_x3 = force? is_x2;
    checkMissing(is_x3);
    r77 = `-`(2, is_x3);
    __4 = ldf `[` in base;
    r78 = dyn __4(r76, r77);
    goto L40(r78);
  L195():
    popenv;
    return r86;
  L198():
    st needSort = r88;
    c58 = `as.logical`(r88);
    if c58 then L199() else L44();
  L320():
    dx42 = getTryDispatchBuiltinValue(dr36);
    goto L78(r215, l5, r216, r217, dx42);
  L321():
    N1 = force? N;
    checkMissing(N1);
    r245 = `/`(dx43, N1);
    axp41 = ld axp;
    check L322() else D88();
  D88():
    deopt 360 [r241, l12, r242, r243, r245, axp41];
  L44():
    axp21 = ld axp;
    check L209() else D52();
  L47():
    sym14 = ldf round;
    base14 = ldf round in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L213() else L214();
  L199():
    usr11 = ld usr;
    check L200() else D50();
  L322():
    axp42 = force? axp41;
    checkMissing(axp42);
    c85 = `is.object`(axp42);
    if c85 then L323() else L324(r241, l12, r242, r243, r245, axp42);
  D50():
    deopt 190 [usr11];
  D52():
    deopt 202 [axp21];
  L49(r93):
    st ii = r93;
    ii = ld ii;
    check L215() else D53();
  L79(r258, l16, r259, r260, r261, dx45):
    N2 = ld N;
    check L326() else D89();
  L200():
    usr12 = force? usr11;
    checkMissing(usr12);
    c59 = `is.object`(usr12);
    if c59 then L201() else L202(usr12);
  L209():
    axp22 = force? axp21;
    checkMissing(axp22);
    c61 = `is.object`(axp22);
    if c61 then L210() else L211(axp22);
  L213():
    round = ldf round in base;
    r94 = dyn round(<lang log10(axp)>);
    goto L49(r94);
  L214():
    r92 = dyn base14(<lang log10(axp)>);
    goto L49(r92);
  L323():
    dr38 = tryDispatchBuiltin.1("[", axp42);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L325() else L324(r241, l12, r242, r243, r245, dr38);
  L324(r250, l14, r251, r252, r253, axp44):
    __19 = ldf `[` in base;
    r262 = dyn __19(axp44, 1);
    goto L79(r250, l14, r251, r252, r253, r262);
  D53():
    deopt 213 [10.0, ii];
  D89():
    deopt 364 [r258, l16, r259, r260, r261, dx45, N2];
  L45(dx11):
    st usr = dx11;
    axp17 = ld axp;
    check L204() else D51();
  L48(dx16):
    st axp = dx16;
    goto L47();
  L201():
    dr8 = tryDispatchBuiltin.1("[", usr12);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L203() else L202(dr8);
  L202(usr14):
    __5 = ldf `[` in base;
    r89 = dyn __5(usr14, <int 2, 1>);
    goto L45(r89);
  L210():
    dr12 = tryDispatchBuiltin.1("[", axp22);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L212() else L211(dr12);
  L211(axp24):
    __7 = ldf `[` in base;
    r91 = dyn __7(axp24, <int 1, 2>);
    goto L48(r91);
  L215():
    ii1 = force? ii;
    checkMissing(ii1);
    c62 = `is.object`(ii1);
    if c62 then L216() else L217(10.0, ii1);
  L325():
    dx44 = getTryDispatchBuiltinValue(dr38);
    goto L79(r241, l12, r242, r243, r245, dx44);
  L326():
    N3 = force? N2;
    checkMissing(N3);
    r263 = `/`(dx45, N3);
    r264 = `-`(r261, r263);
    abs2 = ldf abs in base;
    r265 = dyn abs2(r264);
    check L327() else D90();
  D51():
    deopt 196 [axp17];
  D90():
    deopt 369 [r258, l16, r259, r260, r265];
  L50(r98, dx18):
    iC = ld iC;
    check L219() else D54();
  L203():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L45(dx10);
  L204():
    axp18 = force? axp17;
    checkMissing(axp18);
    c60 = `is.object`(axp18);
    if c60 then L205() else L206(axp18);
  L212():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L48(dx15);
  L216():
    dr14 = tryDispatchBuiltin.1("[", ii1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L218() else L217(10.0, dr14);
  L217(r96, ii3):
    __8 = ldf `[` in base;
    r99 = dyn __8(ii3, 1);
    goto L50(r96, r99);
  L327():
    goto L77(r258, l16, r259, r260, r265);
  D54():
    deopt 217 [r98, dx18, iC];
  L46(dx13):
    st axp = dx13;
    goto L47();
  L205():
    dr10 = tryDispatchBuiltin.1("[", axp18);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L207() else L206(dr10);
  L206(axp20):
    __6 = ldf `[` in base;
    r90 = dyn __6(axp20, <int 2, 1>);
    goto L46(r90);
  L218():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L50(10.0, dx17);
  L219():
    iC1 = force? iC;
    checkMissing(iC1);
    r100 = `>=`(iC1, 2);
    r101 = `-`(dx18, r100);
    ii4 = ld ii;
    check L220() else D55();
  D55():
    deopt 221 [r98, r101, ii4];
  L207():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L46(dx12);
  L220():
    ii5 = force? ii4;
    checkMissing(ii5);
    c63 = `is.object`(ii5);
    if c63 then L221() else L222(r98, r101, ii5);
  L51(r108, r109, dx20):
    r111 = `:`(r109, dx20);
    r112 = `^`(r108, r111);
    st x10 = r112;
    iC2 = ld iC;
    check L224() else D56();
  L221():
    dr16 = tryDispatchBuiltin.1("[", ii5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L223() else L222(r98, r101, dr16);
  L222(r104, r105, ii7):
    __9 = ldf `[` in base;
    r110 = dyn __9(ii7, 2);
    goto L51(r104, r105, r110);
  D56():
    deopt 229 [iC2];
  L223():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L51(r98, r101, dx19);
  L224():
    iC3 = force? iC2;
    checkMissing(iC3);
    c64 = `is.vector`(iC3, "any");
    if c64 then L225() else L226();
  L225():
    c65 = inherits(iC3, "factor", FALSE);
    if c65 then L227() else L228();
  L226():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L227():
    c66 = `is.character`(iC3);
    if c66 then L229() else L230();
  L228():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L227();
  L229():
    stop(<dot "numeric EXPR required for 'switch' without named alternatives">, TRUE, NULL);
    unreachable;
  L230():
    i_ddd = dots[iC3];
    i = `as.integer`(i_ddd);
    c67 = `==`.5(i, 1);
    if c67 then L52() else L231();
  L52():
    x10 = ld x10;
    check L235() else D57();
  L56(r113):
    st r = r113;
    needSort = ld needSort;
    check L255() else D64();
  L231():
    c68 = `==`.5(i, 2);
    if c68 then L53() else L232();
  D57():
    deopt 233 [x10];
  D64():
    deopt 261 [needSort];
  L53():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L237() else L238();
  L232():
    c69 = `==`.5(i, 3);
    if c69 then L54() else L233();
  L235():
    x11 = force? x10;
    checkMissing(x11);
    goto L56(x11);
  L255():
    needSort1 = force? needSort;
    checkMissing(needSort1);
    c76 = `as.logical`(needSort1);
    if c76 then L256() else L61();
  L54():
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L246() else L247();
  L57(r115):
    c72 = `is.object`(r115);
    if c72 then L242() else L243(r115);
  L61():
    goto L62();
  L62():
    r143 = ld r;
    check L260() else D67();
  L233():
    goto L56(NULL);
  L237():
    outer = ldf outer;
    check L239() else D58();
  L238():
    r114 = dyn base15(<lang outer(c(1.0, 5.0), x10)>);
    goto L57(r114);
  L256():
    rev = ldf rev;
    check L257() else D65();
  D58():
    deopt 238 [];
  D65():
    deopt 264 [];
  D67():
    deopt 270 [r143];
  L58(dx22):
    goto L56(dx22);
  L59(r127):
    c75 = `is.object`(r127);
    if c75 then L251() else L252(r127);
  L239():
    p9 = prom<V +>{
      sym16 = ldf c;
      base16 = ldf c in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r117):
      return r117;
    L1():
      c70 = ldf c in base;
      r118 = dyn c70(1.0, 5.0);
      goto L0(r118);
    L2():
      r116 = dyn base16(1.0, 5.0);
      goto L0(r116);
    };
    p10 = prom<V +>{
      x12 = ld x10;
      x13 = force? x12;
      checkMissing(x13);
      return x13;
    };
    r121 = dyn outer(p9, p10);
    check L240() else D59();
  L242():
    dr18 = tryDispatchBuiltin.1("[", r115);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L244() else L243(dr18);
  L243(r124):
    __10 = ldf `[` in base;
    r125 = dyn __10(r124, -1);
    goto L58(r125);
  L246():
    outer1 = ldf outer;
    check L248() else D61();
  L247():
    r126 = dyn base17(<lang outer(c(1.0, 2.0, 5.0), x10)>);
    goto L59(r126);
  L257():
    p13 = prom<V +>{
      r138 = ld r;
      r139 = force? r138;
      checkMissing(r139);
      return r139;
    };
    r141 = dyn rev(p13);
    check L258() else D66();
  L260():
    r144 = force? r143;
    checkMissing(r144);
    c77 = `is.object`(r144);
    if c77 then L261() else L262(r144);
  D59():
    deopt 241 [r121];
  D61():
    deopt 250 [];
  D66():
    deopt 266 [r141];
  L60(dx24):
    goto L56(dx24);
  L63(dx26):
    popenv;
    return dx26;
  L240():
    c71 = ldf c in base;
    r122 = dyn c71(r121);
    check L241() else D60();
  L244():
    dx21 = getTryDispatchBuiltinValue(dr18);
    goto L58(dx21);
  L248():
    p11 = prom<V +>{
      sym18 = ldf c;
      base18 = ldf c in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r129):
      return r129;
    L1():
      c73 = ldf c in base;
      r130 = dyn c73(1.0, 2.0, 5.0);
      goto L0(r130);
    L2():
      r128 = dyn base18(1.0, 2.0, 5.0);
      goto L0(r128);
    };
    p12 = prom<V +>{
      x14 = ld x10;
      x15 = force? x14;
      checkMissing(x15);
      return x15;
    };
    r133 = dyn outer1(p11, p12);
    check L249() else D62();
  L251():
    dr20 = tryDispatchBuiltin.1("[", r127);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L253() else L252(dr20);
  L252(r136):
    __11 = ldf `[` in base;
    r137 = dyn __11(r136, -1);
    goto L60(r137);
  L258():
    st r = r141;
    goto L62();
  L261():
    dr22 = tryDispatchBuiltin.1("[", r144);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L263() else L262(dr22);
  L262(r146):
    usr15 = ld usr;
    check L264() else D68();
  D60():
    deopt 243 [r122];
  D62():
    deopt 253 [r133];
  D68():
    deopt 272 [r146, usr15];
  L241():
    goto L57(r122);
  L249():
    c74 = ldf c in base;
    r134 = dyn c74(r133);
    check L250() else D63();
  L253():
    dx23 = getTryDispatchBuiltinValue(dr20);
    goto L60(dx23);
  L263():
    dx25 = getTryDispatchBuiltinValue(dr22);
    goto L63(dx25);
  L264():
    usr16 = force? usr15;
    checkMissing(usr16);
    c78 = `is.object`(usr16);
    if c78 then L265() else L266(r146, usr16);
  D63():
    deopt 255 [r134];
  L64(r150, dx28):
    sym19 = ldf log10;
    base19 = ldf log10 in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L268() else L269();
  L250():
    goto L59(r134);
  L265():
    dr24 = tryDispatchBuiltin.1("[", usr16);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L267() else L266(r146, dr24);
  L266(r148, usr18):
    __12 = ldf `[` in base;
    r151 = dyn __12(usr18, 1);
    goto L64(r148, r151);
  L65(r155, dx31, r156):
    r160 = `<=`(dx31, r156);
    sym20 = ldf log10;
    base20 = ldf log10 in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L272() else L273();
  L267():
    dx27 = getTryDispatchBuiltinValue(dr24);
    goto L64(r146, dx27);
  L268():
    r157 = ld r;
    check L270() else D69();
  L269():
    r154 = dyn base19(<sym r>);
    goto L65(r150, dx28, r154);
  D69():
    deopt 278 [r150, dx28, r157];
  L66(r166, r167, r168):
    usr19 = ld usr;
    check L276() else D73();
  L270():
    r158 = force? r157;
    checkMissing(r158);
    log11 = ldf log10 in base;
    r159 = dyn log11(r158);
    check L271() else D70();
  L272():
    r169 = ld r;
    check L274() else D71();
  L273():
    r165 = dyn base20(<sym r>);
    goto L66(r155, r160, r165);
  D70():
    deopt 281 [r150, dx28, r159];
  D71():
    deopt 284 [r155, r160, r169];
  D73():
    deopt 287 [r166, r167, r168, usr19];
  L271():
    goto L65(r150, dx28, r159);
  L274():
    r170 = force? r169;
    checkMissing(r170);
    log12 = ldf log10 in base;
    r171 = dyn log12(r170);
    check L275() else D72();
  L276():
    usr20 = force? usr19;
    checkMissing(usr20);
    c79 = `is.object`(usr20);
    if c79 then L277() else L278(r166, r167, r168, usr20);
  D72():
    deopt 287 [r155, r160, r171];
  L67(r181, r182, r183, dx33):
    r185 = `<=`(r183, dx33);
    r186 = `&&`(r182, r185);
    __14 = ldf `[` in base;
    r187 = dyn __14(r181, r186);
    goto L63(r187);
  L275():
    goto L66(r155, r160, r171);
  L277():
    dr26 = tryDispatchBuiltin.1("[", usr20);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L279() else L278(r166, r167, r168, dr26);
  L278(r175, r176, r177, usr22):
    __13 = ldf `[` in base;
    r184 = dyn __13(usr22, 2);
    goto L67(r175, r176, r177, r184);
  L279():
    dx32 = getTryDispatchBuiltinValue(dr26);
    goto L67(r166, r167, r168, dx32);
  }
}
fun `inner-2118155194`(ch) {
  (reg ch:*) -+> V { var ch:*, reg paste0:cls, reg is_x:*, reg is_x1:V, reg c:L, reg p:p(V +), reg ch1:*, reg ch2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st ch = ch;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      is_x = ld `is.x`;
      is_x1 = force? is_x;
      checkMissing(is_x1);
      c = `as.logical`(is_x1);
      if c then L1() else L0();
    L0():
      return "y";
    L1():
      return "x";
    };
    p1 = prom<V +>{
      ch1 = ld ch;
      ch2 = force? ch1;
      checkMissing(ch2);
      return ch2;
    };
    r2 = dyn paste0(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:R, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:R, reg r9:V, reg x1:*, reg x2:V, reg c:L, reg r11:R, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg r13:R, reg dx1:V, reg __:cls, reg r14:V, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:R, reg r20:V, reg x5:*, reg x6:V, reg c1:L, reg r22:R, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r24:R, reg dx3:V, reg __1:cls, reg r25:V, reg r26:V, reg c2:cls, reg r27:V, reg r28:V |
    mkenv;
    st x = x;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r3, r4):
    r28 = `^`(r3, r4);
    popenv;
    return r28;
  L5():
    sym1 = ldf ceiling;
    base1 = ldf ceiling in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6():
    r2 = dyn base(<lang ceiling(`[`(x, 1.0))>, <lang floor(`[`(x, 2.0))>);
    goto L0(10.0, r2);
  L1(r8, r9):
    sym2 = ldf floor;
    base2 = ldf floor in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r7 = dyn base1(<lang `[`(x, 1.0)>);
    goto L1(10.0, r7);
  D0():
    deopt 4 [10.0, x1];
  L3(r19, r20):
    c2 = ldf c in base;
    r27 = dyn c2(r9, r20);
    check L19() else D2();
  L9():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L10() else L11(10.0, x2);
  L13():
    x5 = ld x;
    check L15() else D1();
  L14():
    r18 = dyn base2(<lang `[`(x, 2.0)>);
    goto L3(r8, r18);
  D1():
    deopt 11 [r8, x5];
  D2():
    deopt 18 [r19, r27];
  L2(r13, dx1):
    r15 = ceiling(dx1);
    goto L1(r13, r15);
  L10():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(10.0, dr);
  L11(r11, x4):
    __ = ldf `[` in base;
    r14 = dyn __(x4, 1.0);
    goto L2(r11, r14);
  L15():
    x6 = force? x5;
    checkMissing(x6);
    c1 = `is.object`(x6);
    if c1 then L16() else L17(r8, x6);
  L19():
    goto L0(r19, r27);
  L4(r24, dx3):
    r26 = floor(dx3);
    goto L3(r24, r26);
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(10.0, dx);
  L16():
    dr2 = tryDispatchBuiltin.1("[", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L18() else L17(r8, dr2);
  L17(r22, x8):
    __1 = ldf `[` in base;
    r25 = dyn __1(x8, 2.0);
    goto L4(r22, r25);
  L18():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(r8, dx2);
  }
}
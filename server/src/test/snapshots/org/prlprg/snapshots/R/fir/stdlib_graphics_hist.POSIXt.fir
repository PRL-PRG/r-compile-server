fun main() {
  () -+> V { reg r:cls, reg hist:cls, reg _leap_seconds:*, reg _leap_seconds1:V, reg p:p(V +), reg r2:V, reg seq:cls, reg ISOdate:cls, reg r3:V, reg p1:p(V +), reg ISOdate1:cls, reg r5:V, reg p2:p(V +), reg r7:V, reg hist1:cls, reg _leap_seconds2:*, reg _leap_seconds3:V, reg p3:p(V +), reg brks:*, reg brks1:V, reg p4:p(V +), reg r10:V, reg rug:cls, reg _leap_seconds4:*, reg _leap_seconds5:V, reg p5:p(V +), reg r12:V, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg rep:cls, reg r19:V, reg c:cls, reg r20:V, reg hist2:cls, reg brks2:*, reg brks3:V, reg p6:p(V +), reg brks4:*, reg brks5:V, reg p7:p(V +), reg r23:V, reg c1:L, reg r25:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r26:V, reg identical:cls, reg r27:V, reg p8:p(V +), reg r29:V, reg __:cls, reg r30:V, reg r31:cls, reg hist3:cls, reg brks6:*, reg brks7:V, reg p9:p(V +), reg brks8:*, reg brks9:V, reg p10:p(V +), reg r34:V, reg p11:p(V +), reg r36:V, reg try:cls, reg hist4:cls, reg brks10:*, reg brks11:V, reg c2:L, reg brks13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r37:V, reg r38:V, reg p12:p(V +), reg brks14:*, reg brks15:V, reg p13:p(V +), reg r41:V, reg p14:p(V +), reg r43:V, reg hist5:cls, reg brks16:*, reg brks17:V, reg c3:L, reg brks19:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r44:V, reg r45:V, reg p15:p(V +), reg brks20:*, reg brks21:V, reg p16:p(V +), reg r48:V, reg stopifnot1:cls, reg hb:*, reg hb1:V, reg c4:L, reg hb3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r49:V, reg r50:V, reg p17:p(V +), reg r52:V, reg as_Date:cls, reg r53:V, reg __3:cls, reg r54:V, reg r55:cls, reg r56:V, reg r57:V, reg r58:V, reg hist6:cls, reg random_dates:*, reg random_dates1:V, reg p18:p(V +), reg r60:V |
    mkenv;
    r = clos `inner-1871404654`;
    st `hist.POSIXt` = r;
    hist = ldf hist;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      _leap_seconds = ld `.leap.seconds`;
      _leap_seconds1 = force? _leap_seconds;
      checkMissing(_leap_seconds1);
      return _leap_seconds1;
    };
    r2 = dyn hist[, , freq](p, "years", TRUE);
    check L1() else D1();
  D1():
    deopt 9 [r2];
  L1():
    seq = ldf seq;
    check L2() else D2();
  D2():
    deopt 11 [];
  L2():
    p1 = prom<V +>{
      ISOdate = ldf ISOdate;
      r3 = dyn ISOdate(1970.0, 1.0, 1.0);
      return r3;
    };
    p2 = prom<V +>{
      ISOdate1 = ldf ISOdate;
      r5 = dyn ISOdate1(2030.0, 1.0, 1.0);
      return r5;
    };
    r7 = dyn seq(p1, p2, "5 years");
    check L3() else D3();
  D3():
    deopt 15 [r7];
  L3():
    st brks = r7;
    hist1 = ldf hist;
    check L4() else D4();
  D4():
    deopt 18 [];
  L4():
    p3 = prom<V +>{
      _leap_seconds2 = ld `.leap.seconds`;
      _leap_seconds3 = force? _leap_seconds2;
      checkMissing(_leap_seconds3);
      return _leap_seconds3;
    };
    p4 = prom<V +>{
      brks = ld brks;
      brks1 = force? brks;
      checkMissing(brks1);
      return brks1;
    };
    r10 = dyn hist1(p3, p4);
    check L5() else D5();
  D5():
    deopt 21 [r10];
  L5():
    rug = ldf rug;
    check L6() else D6();
  D6():
    deopt 23 [];
  L6():
    p5 = prom<V +>{
      _leap_seconds4 = ld `.leap.seconds`;
      _leap_seconds5 = force? _leap_seconds4;
      checkMissing(_leap_seconds5);
      return _leap_seconds5;
    };
    r12 = dyn rug[, lwd](p5, 2.0);
    check L7() else D7();
  D7():
    deopt 27 [r12];
  L7():
    stopifnot = ldf stopifnot;
    check L8() else D8();
  D8():
    deopt 29 [];
  L8():
    p8 = prom<V +>{
      sym = ldf identical;
      base = ldf identical in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0(r14):
      return r14;
    L3():
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L5() else L6();
    L4():
      r13 = dyn base(<lang c(2, rep(1, 11.0))>, <lang `$`(hist(brks, brks, plot=FALSE, include.lowest=TRUE), counts)>);
      goto L0(r13);
    L1(r16):
      hist2 = ldf hist;
      p6 = prom<V +>{
        brks2 = ld brks;
        brks3 = force? brks2;
        checkMissing(brks3);
        return brks3;
      };
      p7 = prom<V +>{
        brks4 = ld brks;
        brks5 = force? brks4;
        checkMissing(brks5);
        return brks5;
      };
      r23 = dyn hist2[, , plot, `include.lowest`](p6, p7, FALSE, TRUE);
      c1 = `is.object`(r23);
      if c1 then L10() else L11(r23);
    L5():
      sym2 = ldf rep;
      base2 = ldf rep in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L7() else L8();
    L6():
      r15 = dyn base1(2, <lang rep(1, 11.0)>);
      goto L1(r15);
    L2(r18):
      c = ldf c in base;
      r20 = dyn c(2, r18);
      goto L1(r20);
    L7():
      rep = ldf rep in base;
      r19 = dyn rep(1, 11.0);
      goto L2(r19);
    L8():
      r17 = dyn base2(1, 11.0);
      goto L2(r17);
    L9(dx1):
      identical = ldf identical in base;
      r27 = dyn identical(r16, dx1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r27);
    L10():
      dr = tryDispatchBuiltin.1("$", r23);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L12() else L11(dr);
    L11(r25):
      r26 = `$`(r25, <sym counts>);
      goto L9(r26);
    L12():
      dx = getTryDispatchBuiltinValue(dr);
      goto L9(dx);
    };
    r29 = dyn stopifnot(p8);
    check L9() else D9();
  D9():
    deopt 31 [r29];
  L9():
    __ = ldf `::`;
    check L10() else D10();
  D10():
    deopt 33 [];
  L10():
    r30 = dyn __("tools", "assertError");
    check L11() else D11();
  D11():
    deopt 36 [r30];
  L11():
    checkFun.0(r30);
    r31 = r30 as cls;
    p11 = prom<V +>{
      hist3 = ldf hist;
      p9 = prom<V +>{
        brks6 = ld brks;
        brks7 = force? brks6;
        checkMissing(brks7);
        return brks7;
      };
      p10 = prom<V +>{
        brks8 = ld brks;
        brks9 = force? brks8;
        checkMissing(brks9);
        return brks9;
      };
      r34 = dyn hist3[, , plot, `include.lowest`](p9, p10, FALSE, FALSE);
      return r34;
    };
    r36 = dyn r31[verbose, ](TRUE, p11);
    check L12() else D12();
  D12():
    deopt 41 [r36];
  L12():
    try = ldf try;
    check L13() else D13();
  D13():
    deopt 43 [];
  L13():
    p14 = prom<V +>{
      hist4 = ldf hist;
      p12 = prom<V +>{
        brks10 = ld brks;
        brks11 = force? brks10;
        checkMissing(brks11);
        c2 = `is.object`(brks11);
        if c2 then L1() else L2(brks11);
      L0(dx3):
        r38 = `+`(dx3, 1.0);
        return r38;
      L1():
        dr2 = tryDispatchBuiltin.1("[", brks11);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(brks13):
        __1 = ldf `[` in base;
        r37 = dyn __1(brks13, -13.0);
        goto L0(r37);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p13 = prom<V +>{
        brks14 = ld brks;
        brks15 = force? brks14;
        checkMissing(brks15);
        return brks15;
      };
      r41 = dyn hist4[, , `include.lowest`](p12, p13, FALSE);
      return r41;
    };
    r43 = dyn try(p14);
    check L14() else D14();
  D14():
    deopt 45 [r43];
  L14():
    hist5 = ldf hist;
    check L15() else D15();
  D15():
    deopt 47 [];
  L15():
    p15 = prom<V +>{
      brks16 = ld brks;
      brks17 = force? brks16;
      checkMissing(brks17);
      c3 = `is.object`(brks17);
      if c3 then L1() else L2(brks17);
    L0(dx5):
      r45 = `+`(dx5, 1.0);
      return r45;
    L1():
      dr4 = tryDispatchBuiltin.1("[", brks17);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(brks19):
      __2 = ldf `[` in base;
      r44 = dyn __2(brks19, -13.0);
      goto L0(r44);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p16 = prom<V +>{
      brks20 = ld brks;
      brks21 = force? brks20;
      checkMissing(brks21);
      return brks21;
    };
    r48 = dyn hist5[, , `include.lowest`, fuzz](p15, p16, FALSE, 1.0E-10);
    check L16() else D16();
  D16():
    deopt 54 [r48];
  L16():
    st hb = r48;
    stopifnot1 = ldf stopifnot;
    check L17() else D17();
  D17():
    deopt 57 [];
  L17():
    p17 = prom<V +>{
      hb = ld hb;
      hb1 = force? hb;
      checkMissing(hb1);
      c4 = `is.object`(hb1);
      if c4 then L1() else L2(hb1);
    L0(dx7):
      r50 = `==`(dx7, 1.0);
      return r50;
    L1():
      dr6 = tryDispatchBuiltin.1("$", hb1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(hb3):
      r49 = `$`(hb3, <sym counts>);
      goto L0(r49);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r52 = dyn stopifnot1(p17);
    check L18() else D18();
  D18():
    deopt 59 [r52];
  L18():
    as_Date = ldf `as.Date`;
    check L19() else D19();
  D19():
    deopt 61 [];
  L19():
    r53 = dyn as_Date("2001/1/1");
    check L20() else D20();
  D20():
    deopt 63 [r53];
  L20():
    __3 = ldf `::`;
    check L21() else D21();
  D21():
    deopt 65 [r53, 70.0];
  L21():
    r54 = dyn __3("stats", "runif");
    check L22() else D22();
  D22():
    deopt 68 [r53, 70.0, r54];
  L22():
    checkFun.0(r54);
    r55 = r54 as cls;
    r56 = dyn r55(100.0);
    check L23() else D23();
  D23():
    deopt 71 [r53, 70.0, r56];
  L23():
    r57 = `*`(70.0, r56);
    r58 = `+`(r53, r57);
    st `random.dates` = r58;
    hist6 = ldf hist;
    check L24() else D24();
  D24():
    deopt 76 [];
  L24():
    p18 = prom<V +>{
      random_dates = ld `random.dates`;
      random_dates1 = force? random_dates;
      checkMissing(random_dates1);
      return random_dates1;
    };
    r60 = dyn hist6[, , format](p18, "weeks", "%d %b");
    check L25() else D25();
  D25():
    deopt 81 [r60];
  L25():
    popenv;
    return r60;
  }
}
fun `inner-1871404654`(x, breaks, `...`, xlab, plot, freq, `start.on.monday`, format, right) {
  (reg x:*, reg breaks:*, reg ddd:dots, reg xlab:*, reg plot:*, reg freq:*, reg start_on_monday:*, reg format:*, reg right:*) -+> V { var x:*, var breaks:*, var `...`:dots?, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), var plot:*, reg plot_isMissing:L, reg plot_orDefault:*, var freq:*, reg freq_isMissing:L, reg freq_orDefault:*, var `start.on.monday`:*, reg start_on_monday_isMissing:L, reg start_on_monday_orDefault:*, var format:*, var right:*, reg right_isMissing:L, reg right_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x1:*, reg x2:V, reg inherits:cls, reg r8:V, reg r9:V, reg c:L, reg stop:cls, reg r10:V, reg force:cls, reg xlab1:*, reg xlab2:V, reg p2:p(V +), reg r13:V, reg as_POSIXct:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg missing:cls, reg r18:V, reg c1:L, reg stop1:cls, reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg breaks1:*, reg breaks2:V, reg inherits1:cls, reg r23:V, reg c2:L, reg as_POSIXct1:cls, reg breaks3:*, reg breaks4:V, reg p4:p(V +), reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg diff:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg breaks5:*, reg breaks6:V, reg unclass:cls, reg r32:V, reg p5:p(V +), reg r34:V, reg abs:cls, reg r35:V, reg min:cls, reg r36:V, reg d:*, reg d1:V, reg r37:V, reg c3:L, reg d2:*, reg d3:V, reg r39:V, reg c4:L, reg d4:*, reg d5:V, reg r41:V, reg c5:L, reg d6:*, reg d7:V, reg r43:V, reg c6:L, reg d8:*, reg d9:V, reg r45:V, reg c7:L, reg d10:*, reg d11:V, reg r47:V, reg c8:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg r51:V, reg breaks7:*, reg breaks8:V, reg is_numeric:cls, reg r52:V, reg c9:L, reg c11:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r53:V, reg c14:L, reg r54:V, reg breaks9:*, reg breaks10:V, reg length:cls, reg r55:V, reg r56:V, reg c15:L, reg c16:V, reg num_br:*, reg num_br1:V, reg c18:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r57:V, reg r58:V, reg breaks11:*, reg breaks12:V, reg c19:L, reg c20:L, reg c22:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r59:V, reg c25:L, reg r60:V, reg breaks13:*, reg breaks14:V, reg length1:cls, reg r61:V, reg r62:V, reg c26:L, reg c27:V, reg c29:L, reg pmatch:cls, reg breaks15:*, reg breaks16:V, reg p6:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r64:V, reg r65:V, reg c30:cls, reg r66:V, reg p7:p(V +), reg r68:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r69:V, reg r70:V, reg valid:*, reg valid1:V, reg is_na:cls, reg r71:V, reg c31:L, reg stop2:cls, reg r72:V, reg as_POSIXlt:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r74:V, reg r75:V, reg x5:*, reg x6:V, reg min1:cls, reg r76:V, reg p8:p(V +), reg r78:V, reg valid2:*, reg valid3:V, reg r79:V, reg c32:L, reg l:*, reg c33:L, reg r81:R, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r84:V, reg valid4:*, reg valid5:V, reg r86:V, reg c34:L, reg l3:*, reg c35:L, reg r88:I, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r91:V, reg valid6:*, reg valid7:V, reg r93:V, reg c36:L, reg l6:*, reg c37:L, reg r95:I, reg l8:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r98:V, reg valid8:*, reg valid9:V, reg r100:V, reg c38:L, reg l9:*, reg c39:L, reg r102:I, reg l11:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r104:I, reg dx7:V, reg r105:V, reg valid10:*, reg valid11:V, reg r107:V, reg c40:L, reg start:*, reg start1:V, reg c41:L, reg start3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r108:V, reg start4:*, reg start5:V, reg c42:L, reg dx11:V, reg start7:V, reg dr10:V, reg dc5:L, reg dx13:V, reg dx14:V, reg dx15:V, reg r109:V, reg r110:V, reg l12:*, reg c43:L, reg r112:V, reg l14:*, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg r115:V, reg start_on_monday1:*, reg start_on_monday2:V, reg c44:L, reg start8:*, reg start9:V, reg c45:L, reg start11:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg r116:V, reg start12:*, reg start13:V, reg c46:L, reg dx21:V, reg start15:V, reg dr16:V, reg dc8:L, reg dx23:V, reg dx24:V, reg dx25:V, reg r117:V, reg r118:V, reg c47:L, reg dx28:V, reg r119:I, reg r120:V, reg l15:*, reg c48:L, reg r122:V, reg l17:*, reg dr18:V, reg dc9:L, reg dx29:V, reg r124:V, reg dx30:V, reg r125:V, reg valid12:*, reg valid13:V, reg r128:V, reg c49:L, reg l18:*, reg c50:L, reg r130:I, reg l20:*, reg dr20:V, reg dc10:L, reg dx31:V, reg dx32:V, reg r133:V, reg as_POSIXlt1:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r134:V, reg r135:V, reg x7:*, reg x8:V, reg max:cls, reg r136:V, reg p9:p(V +), reg r138:V, reg as_POSIXlt2:cls, reg end:*, reg end1:V, reg r139:V, reg p10:p(V +), reg r141:V, reg l21:*, reg c51:L, reg r143:I, reg l23:*, reg dr22:V, reg dc11:L, reg dx33:V, reg dx34:V, reg r146:V, reg l24:*, reg c52:L, reg r148:I, reg l26:*, reg dr24:V, reg dc12:L, reg dx35:V, reg dx36:V, reg r151:V, reg seq:cls, reg start16:*, reg start17:V, reg p11:p(V +), reg end2:*, reg end3:V, reg p12:p(V +), reg r154:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r155:V, reg r156:V, reg breaks17:*, reg breaks18:V, reg c53:L, reg breaks20:V, reg dr26:V, reg dc13:L, reg dx37:V, reg dx38:V, reg __:cls, reg r157:V, reg r158:I, reg right1:*, reg right2:V, reg c54:L, reg breaks21:*, reg breaks22:V, reg c55:L, reg breaks24:V, reg dr28:V, reg dc14:L, reg dx39:V, reg dx40:V, reg ind:*, reg ind1:V, reg __1:cls, reg r159:V, reg r160:V, reg l27:*, reg c56:L, reg r162:V, reg l29:*, reg dr30:V, reg dc15:L, reg dx41:V, reg r164:V, reg dx42:V, reg ind2:*, reg ind3:V, reg ___:cls, reg r165:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r167:V, reg r168:V, reg missing1:cls, reg r169:V, reg c57:L, reg r170:V, reg r171:V, reg valid14:*, reg valid15:V, reg r172:V, reg c58:L, reg l30:*, reg c59:L, reg r174:I, reg l32:*, reg dr32:V, reg dc16:L, reg dx43:V, reg dx44:V, reg r177:V, reg l33:*, reg c60:L, reg r179:I, reg l35:*, reg dr34:V, reg dc17:L, reg dx45:V, reg dx46:V, reg r182:V, reg as_POSIXlt3:cls, reg sym17:cls, reg base17:cls, reg guard17:L, reg r183:V, reg r184:V, reg x9:*, reg x10:V, reg max1:cls, reg r185:V, reg p13:p(V +), reg r187:V, reg as_POSIXlt4:cls, reg end4:*, reg end5:V, reg r188:V, reg p14:p(V +), reg r190:V, reg l36:*, reg c61:L, reg r192:I, reg l38:*, reg dr36:V, reg dc18:L, reg dx47:V, reg dx48:V, reg r195:V, reg l39:*, reg c62:L, reg r197:I, reg l41:*, reg dr38:V, reg dc19:L, reg dx49:V, reg dx50:V, reg r200:V, reg l42:*, reg c63:L, reg r202:I, reg l44:*, reg dr40:V, reg dc20:L, reg dx51:V, reg dx52:V, reg r205:V, reg seq1:cls, reg start18:*, reg start19:V, reg p15:p(V +), reg end6:*, reg end7:V, reg p16:p(V +), reg r208:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r209:V, reg r210:V, reg breaks25:*, reg breaks26:V, reg c64:L, reg breaks28:V, reg dr42:V, reg dc21:L, reg dx53:V, reg dx54:V, reg __2:cls, reg r211:V, reg r212:I, reg right3:*, reg right4:V, reg c65:L, reg breaks29:*, reg breaks30:V, reg c66:L, reg breaks32:V, reg dr44:V, reg dc22:L, reg dx55:V, reg dx56:V, reg ind4:*, reg ind5:V, reg __3:cls, reg r213:V, reg r214:V, reg l45:*, reg c67:L, reg r216:V, reg l47:*, reg dr46:V, reg dc23:L, reg dx57:V, reg r218:V, reg dx58:V, reg ind6:*, reg ind7:V, reg ___1:cls, reg r219:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r221:V, reg r222:V, reg missing2:cls, reg r223:V, reg c68:L, reg r224:V, reg valid16:*, reg valid17:V, reg r225:V, reg c69:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r226:V, reg r227:V, reg rep:cls, reg r228:V, reg qtr:*, reg qtr1:V, reg c70:L, reg qtr3:V, reg dr48:V, reg dc24:L, reg dx59:V, reg dx60:V, reg start20:*, reg start21:V, reg c71:L, reg qtr5:V, reg start23:V, reg dr50:V, reg dc25:L, reg dx61:V, reg qtr7:V, reg dx62:V, reg r229:V, reg r230:V, reg __4:cls, reg r231:V, reg l48:*, reg c72:L, reg dx64:V, reg l50:*, reg dr52:V, reg dc26:L, reg dx66:V, reg dx68:V, reg r232:V, reg l51:*, reg c73:L, reg r234:I, reg l53:*, reg dr54:V, reg dc27:L, reg dx69:V, reg dx70:V, reg r237:V, reg as_POSIXlt5:cls, reg sym21:cls, reg base21:cls, reg guard21:L, reg r238:V, reg r239:V, reg x11:*, reg x12:V, reg max2:cls, reg r240:V, reg p17:p(V +), reg r242:V, reg as_POSIXlt6:cls, reg end8:*, reg end9:V, reg r243:V, reg p18:p(V +), reg r245:V, reg qtr8:*, reg qtr9:V, reg c74:L, reg qtr11:V, reg dr56:V, reg dc28:L, reg dx71:V, reg dx72:V, reg end10:*, reg end11:V, reg c75:L, reg qtr13:V, reg end13:V, reg dr58:V, reg dc29:L, reg dx73:V, reg qtr15:V, reg dx74:V, reg r246:V, reg r247:V, reg __5:cls, reg r248:V, reg l54:*, reg c76:L, reg dx76:V, reg l56:*, reg dr60:V, reg dc30:L, reg dx78:V, reg dx80:V, reg r249:V, reg l57:*, reg c77:L, reg r251:I, reg l59:*, reg dr62:V, reg dc31:L, reg dx81:V, reg dx82:V, reg r254:V, reg l60:*, reg c78:L, reg r256:I, reg l62:*, reg dr64:V, reg dc32:L, reg dx83:V, reg dx84:V, reg r259:V, reg seq2:cls, reg start24:*, reg start25:V, reg p19:p(V +), reg end14:*, reg end15:V, reg p20:p(V +), reg r262:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r263:V, reg r264:V, reg breaks33:*, reg breaks34:V, reg c79:L, reg breaks36:V, reg dr66:V, reg dc33:L, reg dx85:V, reg dx86:V, reg __6:cls, reg r265:V, reg r266:I, reg right5:*, reg right6:V, reg c80:L, reg breaks37:*, reg breaks38:V, reg c81:L, reg breaks40:V, reg dr68:V, reg dc34:L, reg dx87:V, reg dx88:V, reg ind8:*, reg ind9:V, reg __7:cls, reg r267:V, reg r268:V, reg l63:*, reg c82:L, reg r270:V, reg l65:*, reg dr70:V, reg dc35:L, reg dx89:V, reg r272:V, reg dx90:V, reg ind10:*, reg ind11:V, reg ___2:cls, reg r273:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r275:V, reg r276:V, reg missing3:cls, reg r277:V, reg c83:L, reg r278:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r279:V, reg r280:V, reg x13:*, reg x14:V, reg max3:cls, reg r281:V, reg seq3:cls, reg start26:*, reg start27:V, reg p21:p(V +), reg maxx:*, reg maxx1:V, reg incr:*, reg incr1:V, reg r283:V, reg p22:p(V +), reg breaks41:*, reg breaks42:V, reg p23:p(V +), reg r286:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r287:V, reg r288:V, reg breaks43:*, reg breaks44:V, reg length2:cls, reg r289:V, reg r290:V, reg c84:L, reg breaks45:*, reg breaks46:V, reg c85:L, reg breaks48:V, reg dr72:V, reg dc36:L, reg dx91:V, reg dx92:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r291:V, reg breaks51:V, reg r292:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r295:V, reg breaks54:V, reg r296:I, reg r297:V, reg which:cls, reg breaks55:*, reg breaks56:V, reg maxx2:*, reg maxx3:V, reg r298:V, reg p24:p(V +), reg r300:V, reg max4:cls, reg r301:V, reg r302:V, reg r303:I, reg __8:cls, reg r304:V, reg stop3:cls, reg r305:V, reg hist_default:cls, reg sym28:cls, reg base28:cls, reg guard28:L, reg r306:V, reg r307:V, reg x15:*, reg x16:V, reg unclass1:cls, reg r308:V, reg p25:p(V +), reg sym29:cls, reg base29:cls, reg guard29:L, reg r310:V, reg r311:V, reg breaks57:*, reg breaks58:V, reg unclass2:cls, reg r312:V, reg p26:p(V +), reg right7:*, reg right8:V, reg p27:p(V +), reg ddd1:dots?, reg r315:V, reg l66:*, reg c86:L, reg r317:L, reg l68:*, reg dr74:V, reg dc37:L, reg dx93:V, reg dx94:V, reg r320:V, reg xlab3:*, reg xlab4:V, reg l69:*, reg c87:L, reg xlab6:V, reg l71:*, reg dr76:V, reg dc38:L, reg dx95:V, reg dx96:V, reg r321:V, reg plot1:*, reg plot2:V, reg c88:L, reg r322:cls, reg myplot:cls, reg res:*, reg res1:V, reg p28:p(V +), reg xlab9:*, reg xlab10:V, reg p29:p(V +), reg freq1:*, reg freq2:V, reg p30:p(V +), reg format1:*, reg format2:V, reg p31:p(V +), reg breaks59:*, reg breaks60:V, reg p32:p(V +), reg ddd2:dots?, reg r328:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r330:V, reg r331:V, reg res2:*, reg res3:V, reg invisible:cls, reg r332:V |
    mkenv;
    st x = x;
    st breaks = breaks;
    st `...` = ddd;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L0() else L1(xlab);
  L0():
    p1 = prom<V +>{
      deparse1 = ldf deparse1;
      p = prom<V +>{
        sym = ldf substitute;
        base = ldf substitute in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        substitute = ldf substitute in base;
        r2 = dyn substitute(<sym x>);
        goto L0(r2);
      L2():
        r = dyn base(<sym x>);
        goto L0(r);
      };
      r4 = dyn deparse1(p);
      return r4;
    };
    goto L1(p1);
  L1(xlab_orDefault):
    st xlab = xlab_orDefault;
    plot_isMissing = missing.0(plot);
    if plot_isMissing then L2(TRUE) else L2(plot);
  L2(plot_orDefault):
    st plot = plot_orDefault;
    freq_isMissing = missing.0(freq);
    if freq_isMissing then L3(FALSE) else L3(freq);
  L3(freq_orDefault):
    st freq = freq_orDefault;
    start_on_monday_isMissing = missing.0(start_on_monday);
    if start_on_monday_isMissing then L4(TRUE) else L4(start_on_monday);
  L4(start_on_monday_orDefault):
    st `start.on.monday` = start_on_monday_orDefault;
    st format = format;
    right_isMissing = missing.0(right);
    if right_isMissing then L5(TRUE) else L5(right);
  L5(right_orDefault):
    st right = right_orDefault;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L97() else L98();
  L6(r7):
    r9 = `!`(r7);
    c = `as.logical`(r9);
    if c then L101() else L7();
  L97():
    x1 = ld x;
    check L99() else D0();
  L98():
    r6 = dyn base1(<sym x>, "POSIXt");
    goto L6(r6);
  D0():
    deopt 2 [x1];
  L7():
    goto L8();
  L8():
    force = ldf force;
    check L105() else D4();
  L99():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r8 = dyn inherits(x2, "POSIXt", FALSE);
    check L100() else D1();
  L101():
    stop = ldf stop;
    check L102() else D2();
  D1():
    deopt 7 [r8];
  D2():
    deopt 10 [];
  D4():
    deopt 16 [];
  L100():
    goto L6(r8);
  L102():
    r10 = dyn stop("wrong method");
    check L103() else D3();
  L105():
    p2 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    r13 = dyn force(p2);
    check L106() else D5();
  D3():
    deopt 12 [r10];
  D5():
    deopt 18 [r13];
  L103():
    goto L8();
  L106():
    as_POSIXct = ldf `as.POSIXct`;
    check L107() else D6();
  D6():
    deopt 20 [];
  L107():
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r15 = dyn as_POSIXct(p3);
    check L108() else D7();
  D7():
    deopt 22 [r15];
  L108():
    st x = r15;
    st incr = 1.0;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L109() else L110();
  L9(r17):
    c1 = `as.logical`(r17);
    if c1 then L111() else L10();
  L109():
    missing = ldf missing in base;
    r18 = dyn missing(<sym breaks>);
    goto L9(r18);
  L110():
    r16 = dyn base2(<sym breaks>);
    goto L9(r16);
  L10():
    goto L11();
  L11():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L115() else L116();
  L111():
    stop1 = ldf stop;
    check L112() else D8();
  D8():
    deopt 31 [];
  L12(r22):
    c2 = `as.logical`(r22);
    if c2 then L119() else L13();
  L112():
    r19 = dyn stop1("Must specify 'breaks' in hist(<POSIXt>)");
    check L113() else D9();
  L115():
    breaks1 = ld breaks;
    check L117() else D10();
  L116():
    r21 = dyn base3(<sym breaks>, "POSIXt");
    goto L12(r21);
  D9():
    deopt 33 [r19];
  D10():
    deopt 38 [breaks1];
  L13():
    sym7 = ldf `is.numeric`;
    base7 = ldf `is.numeric` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L149() else L150();
  L28():
    hist_default = ldf `hist.default`;
    check L439() else D102();
  L113():
    goto L11();
  L117():
    breaks2 = force? breaks1;
    checkMissing(breaks2);
    inherits1 = ldf inherits in base;
    r23 = dyn inherits1(breaks2, "POSIXt", FALSE);
    check L118() else D11();
  L119():
    as_POSIXct1 = ldf `as.POSIXct`;
    check L120() else D12();
  D11():
    deopt 43 [r23];
  D12():
    deopt 45 [];
  D102():
    deopt 555 [];
  L29(r51):
    c9 = `as.logical`(r51);
    if c9 then L153() else L30(c9);
  L118():
    goto L12(r23);
  L120():
    p4 = prom<V +>{
      breaks3 = ld breaks;
      breaks4 = force? breaks3;
      checkMissing(breaks4);
      return breaks4;
    };
    r25 = dyn as_POSIXct1(p4);
    check L121() else D13();
  L149():
    breaks7 = ld breaks;
    check L151() else D24();
  L150():
    r50 = dyn base7(<sym breaks>);
    goto L29(r50);
  L439():
    p25 = prom<V +>{
      sym28 = ldf unclass;
      base28 = ldf unclass in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L1() else L2();
    L0(r307):
      return r307;
    L1():
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      unclass1 = ldf unclass in base;
      r308 = dyn unclass1(x16);
      goto L0(r308);
    L2():
      r306 = dyn base28(<sym x>);
      goto L0(r306);
    };
    p26 = prom<V +>{
      sym29 = ldf unclass;
      base29 = ldf unclass in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L1() else L2();
    L0(r311):
      return r311;
    L1():
      breaks57 = ld breaks;
      breaks58 = force? breaks57;
      checkMissing(breaks58);
      unclass2 = ldf unclass in base;
      r312 = dyn unclass2(breaks58);
      goto L0(r312);
    L2():
      r310 = dyn base29(<sym breaks>);
      goto L0(r310);
    };
    p27 = prom<V +>{
      right7 = ld right;
      right8 = force? right7;
      checkMissing(right8);
      return right8;
    };
    ddd1 = ld `...`;
    r315 = dyn hist_default[, , plot, `warn.unused`, right, `...`](p25, p26, FALSE, FALSE, p27, ddd1);
    check L440() else D103();
  D13():
    deopt 47 [r25];
  D24():
    deopt 121 [breaks7];
  D103():
    deopt 565 [r315];
  L30(c11):
    st `num.br` = c11;
    num_br = ld `num.br`;
    check L159() else D28();
  L121():
    st breaks = r25;
    sym4 = ldf min;
    base4 = ldf min in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L122() else L123();
  L151():
    breaks8 = force? breaks7;
    checkMissing(breaks8);
    is_numeric = ldf `is.numeric` in base;
    r52 = dyn is_numeric(breaks8);
    check L152() else D25();
  L153():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L154() else L155();
  L440():
    st res = r315;
    l66 = ld res;
    c86 = `is.object`(l66);
    if c86 then L442() else L443(TRUE, l66);
  D25():
    deopt 124 [r52];
  D28():
    deopt 135 [num_br];
  L14(r27):
    st d = r27;
    d = ld d;
    check L130() else D18();
  L31(c14, r54):
    r56 = `==`(r54, 1);
    c15 = `as.logical`(r56);
    c16 = `&&`(c14, c15);
    goto L30(c16);
  L122():
    sym5 = ldf abs;
    base5 = ldf abs in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L124() else L125();
  L123():
    r26 = dyn base4(<lang abs(diff(unclass(breaks)))>);
    goto L14(r26);
  L152():
    goto L29(r52);
  L154():
    breaks9 = ld breaks;
    check L156() else D26();
  L155():
    r53 = dyn base8(<sym breaks>);
    goto L31(c9, r53);
  L159():
    num_br1 = force? num_br;
    checkMissing(num_br1);
    c18 = `as.logical`(num_br1);
    if c18 then L160() else L32();
  L441(dx94):
    st res = dx94;
    xlab3 = ld xlab;
    check L445() else D104();
  L442():
    dr74 = tryDispatchBuiltin.0("$<-", l66, TRUE);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L444() else L443(TRUE, dr74);
  L443(r317, l68):
    r320 = `$<-`(l68, <sym equidist>, TRUE);
    goto L441(r320);
  D18():
    deopt 62 [d];
  D26():
    deopt 127 [c9, breaks9];
  D104():
    deopt 572 [xlab3];
  L15(r29):
    min = ldf min in base;
    r36 = dyn min(r29);
    check L129() else D17();
  L32():
    sym9 = ldf `is.character`;
    base9 = ldf `is.character` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L162() else L163();
  L124():
    diff = ldf diff;
    check L126() else D14();
  L125():
    r28 = dyn base5(<lang diff(unclass(breaks))>);
    goto L15(r28);
  L130():
    d1 = force? d;
    checkMissing(d1);
    r37 = `>`(d1, 60.0);
    c3 = `as.logical`(r37);
    if c3 then L131() else L16();
  L156():
    breaks10 = force? breaks9;
    checkMissing(breaks10);
    length = ldf length in base;
    r55 = dyn length(breaks10);
    check L157() else D27();
  L160():
    goto L28();
  L444():
    dx93 = getTryDispatchBuiltinValue(dr74);
    goto L441(dx93);
  L445():
    xlab4 = force? xlab3;
    checkMissing(xlab4);
    l69 = ld res;
    c87 = `is.object`(l69);
    if c87 then L447() else L448(xlab4, l69);
  D14():
    deopt 54 [];
  D17():
    deopt 60 [r36];
  D27():
    deopt 130 [c9, r55];
  L16():
    goto L17();
  L17():
    d2 = ld d;
    check L133() else D19();
  L33(r58):
    c20 = `as.logical`(r58);
    if c20 then L165() else L34(c20);
  L126():
    p5 = prom<V +>{
      sym6 = ldf unclass;
      base6 = ldf unclass in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      breaks5 = ld breaks;
      breaks6 = force? breaks5;
      checkMissing(breaks6);
      unclass = ldf unclass in base;
      r32 = dyn unclass(breaks6);
      goto L0(r32);
    L2():
      r30 = dyn base6(<sym breaks>);
      goto L0(r30);
    };
    r34 = dyn diff(p5);
    check L127() else D15();
  L129():
    goto L14(r36);
  L131():
    st incr = 60.0;
    goto L17();
  L157():
    goto L31(c9, r55);
  L162():
    breaks11 = ld breaks;
    check L164() else D29();
  L163():
    r57 = dyn base9(<sym breaks>);
    goto L33(r57);
  L446(dx96):
    st res = dx96;
    plot1 = ld plot;
    check L450() else D105();
  L447():
    dr76 = tryDispatchBuiltin.0("$<-", l69, xlab4);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L449() else L448(xlab4, dr76);
  L448(xlab6, l71):
    r321 = `$<-`(l71, <sym xname>, xlab4);
    goto L446(r321);
  D15():
    deopt 56 [r34];
  D19():
    deopt 71 [d2];
  D29():
    deopt 140 [breaks11];
  D105():
    deopt 577 [plot1];
  L34(c22):
    c29 = `as.logical`(c22);
    if c29 then L171() else L36();
  L127():
    abs = ldf abs in base;
    r35 = dyn abs(r34);
    check L128() else D16();
  L133():
    d3 = force? d2;
    checkMissing(d3);
    r39 = `>`(d3, 3600.0);
    c4 = `as.logical`(r39);
    if c4 then L134() else L18();
  L164():
    breaks12 = force? breaks11;
    checkMissing(breaks12);
    c19 = `is.character`(breaks12);
    goto L33(c19);
  L165():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L166() else L167();
  L449():
    dx95 = getTryDispatchBuiltinValue(dr76);
    goto L446(dx95);
  L450():
    plot2 = force? plot1;
    checkMissing(plot2);
    c88 = `as.logical`(plot2);
    if c88 then L451() else L94();
  D16():
    deopt 58 [r35];
  L18():
    goto L19();
  L19():
    d4 = ld d;
    check L136() else D20();
  L35(c25, r60):
    r62 = `==`(r60, 1);
    c26 = `as.logical`(r62);
    c27 = `&&`(c25, c26);
    goto L34(c27);
  L36():
    stop3 = ldf stop;
    check L437() else D100();
  L94():
    goto L95();
  L95():
    sym30 = ldf invisible;
    base30 = ldf invisible in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L455() else L456();
  L128():
    goto L15(r35);
  L134():
    st incr = 3600.0;
    goto L19();
  L166():
    breaks13 = ld breaks;
    check L168() else D30();
  L167():
    r59 = dyn base10(<sym breaks>);
    goto L35(c20, r59);
  L171():
    pmatch = ldf pmatch;
    check L172() else D32();
  L451():
    r322 = clos inner1609803073;
    st myplot = r322;
    myplot = ldf myplot;
    check L452() else D106();
  D20():
    deopt 80 [d4];
  D30():
    deopt 145 [c20, breaks13];
  D32():
    deopt 153 [];
  D100():
    deopt 551 [];
  D106():
    deopt 583 [];
  L96(r331):
    popenv;
    return r331;
  L136():
    d5 = force? d4;
    checkMissing(d5);
    r41 = `>`(d5, 86400.0);
    c5 = `as.logical`(r41);
    if c5 then L137() else L20();
  L168():
    breaks14 = force? breaks13;
    checkMissing(breaks14);
    length1 = ldf length in base;
    r61 = dyn length1(breaks14);
    check L169() else D31();
  L172():
    p6 = prom<V +>{
      breaks15 = ld breaks;
      breaks16 = force? breaks15;
      checkMissing(breaks16);
      return breaks16;
    };
    p7 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r65):
      return r65;
    L1():
      c30 = ldf c in base;
      r66 = dyn c30("secs", "mins", "hours", "days", "weeks", "months", "years", "quarters");
      goto L0(r66);
    L2():
      r64 = dyn base11("secs", "mins", "hours", "days", "weeks", "months", "years", "quarters");
      goto L0(r64);
    };
    r68 = dyn pmatch(p6, p7);
    check L173() else D33();
  L437():
    r305 = dyn stop3("invalid specification of 'breaks'");
    check L438() else D101();
  L452():
    p28 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      return res1;
    };
    p29 = prom<V +>{
      xlab9 = ld xlab;
      xlab10 = force? xlab9;
      checkMissing(xlab10);
      return xlab10;
    };
    p30 = prom<V +>{
      freq1 = ld freq;
      freq2 = force? freq1;
      checkMissing(freq2);
      return freq2;
    };
    p31 = prom<V +>{
      format1 = ld format;
      format2 = force? format1;
      checkMissing(format2);
      return format2;
    };
    p32 = prom<V +>{
      breaks59 = ld breaks;
      breaks60 = force? breaks59;
      checkMissing(breaks60);
      return breaks60;
    };
    ddd2 = ld `...`;
    r328 = dyn myplot[, , , , , `...`](p28, p29, p30, p31, p32, ddd2);
    check L453() else D107();
  L455():
    res2 = ld res;
    check L457() else D108();
  L456():
    r330 = dyn base30(<sym res>);
    goto L96(r330);
  D31():
    deopt 148 [c20, r61];
  D33():
    deopt 156 [r68];
  D101():
    deopt 553 [r305];
  D107():
    deopt 590 [r328];
  D108():
    deopt 595 [res2];
  L20():
    goto L21();
  L21():
    d6 = ld d;
    check L139() else D21();
  L137():
    st incr = 86400.0;
    goto L21();
  L169():
    goto L35(c20, r61);
  L173():
    st valid = r68;
    sym12 = ldf `is.na`;
    base12 = ldf `is.na` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L174() else L175();
  L438():
    goto L28();
  L453():
    goto L95();
  L457():
    res3 = force? res2;
    checkMissing(res3);
    invisible = ldf invisible in base;
    r332 = dyn invisible(res3);
    check L458() else D109();
  D21():
    deopt 89 [d6];
  D109():
    deopt 598 [r332];
  L37(r70):
    c31 = `as.logical`(r70);
    if c31 then L178() else L38();
  L139():
    d7 = force? d6;
    checkMissing(d7);
    r43 = `>`(d7, 604800.0);
    c6 = `as.logical`(r43);
    if c6 then L140() else L22();
  L174():
    valid = ld valid;
    check L176() else D34();
  L175():
    r69 = dyn base12(<sym valid>);
    goto L37(r69);
  L458():
    goto L96(r332);
  D34():
    deopt 160 [valid];
  L22():
    goto L23();
  L23():
    d8 = ld d;
    check L142() else D22();
  L38():
    goto L39();
  L39():
    as_POSIXlt = ldf `as.POSIXlt`;
    check L182() else D38();
  L140():
    st incr = 604800.0;
    goto L23();
  L176():
    valid1 = force? valid;
    checkMissing(valid1);
    is_na = ldf `is.na` in base;
    r71 = dyn is_na(valid1);
    check L177() else D35();
  L178():
    stop2 = ldf stop;
    check L179() else D36();
  D22():
    deopt 98 [d8];
  D35():
    deopt 163 [r71];
  D36():
    deopt 165 [];
  D38():
    deopt 171 [];
  L142():
    d9 = force? d8;
    checkMissing(d9);
    r45 = `>`(d9, 2419200.0);
    c7 = `as.logical`(r45);
    if c7 then L143() else L24();
  L177():
    goto L37(r71);
  L179():
    r72 = dyn stop2("invalid specification of 'breaks'");
    check L180() else D37();
  L182():
    p8 = prom<V +>{
      sym13 = ldf min;
      base13 = ldf min in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r75):
      return r75;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      min1 = ldf min in base;
      r76 = dyn min1(x6, TRUE);
      goto L0(r76);
    L2():
      r74 = dyn base13[, `na.rm`](<sym x>, TRUE);
      goto L0(r74);
    };
    r78 = dyn as_POSIXlt(p8);
    check L183() else D39();
  D37():
    deopt 167 [r72];
  D39():
    deopt 173 [r78];
  L24():
    goto L25();
  L25():
    d10 = ld d;
    check L145() else D23();
  L143():
    st incr = 2419200.0;
    goto L25();
  L180():
    goto L39();
  L183():
    st start = r78;
    st incr = 1.0;
    valid2 = ld valid;
    check L184() else D40();
  D23():
    deopt 107 [d10];
  D40():
    deopt 178 [valid2];
  L145():
    d11 = force? d10;
    checkMissing(d11);
    r47 = `>`(d11, 3.16224E7);
    c8 = `as.logical`(r47);
    if c8 then L146() else L26();
  L184():
    valid3 = force? valid2;
    checkMissing(valid3);
    r79 = `>`(valid3, 1);
    c32 = `as.logical`(r79);
    if c32 then L185() else L40();
  L26():
    goto L27();
  L27():
    st `num.br` = FALSE;
    goto L28();
  L40():
    goto L41();
  L41():
    valid4 = ld valid;
    check L191() else D41();
  L146():
    st incr = 3.16224E7;
    goto L27();
  L185():
    l = ld start;
    c33 = `is.object`(l);
    if c33 then L187() else L188(0.0, l);
  D41():
    deopt 192 [valid4];
  L186(dx1):
    st start = dx1;
    st incr = 59.99;
    goto L41();
  L187():
    dr = tryDispatchBuiltin.0("$<-", l, 0.0);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L189() else L188(0.0, dr);
  L188(r81, l2):
    r84 = `$<-`(l2, <sym sec>, 0.0);
    goto L186(r84);
  L191():
    valid5 = force? valid4;
    checkMissing(valid5);
    r86 = `>`(valid5, 2);
    c34 = `as.logical`(r86);
    if c34 then L192() else L42();
  L42():
    goto L43();
  L43():
    valid6 = ld valid;
    check L198() else D42();
  L189():
    dx = getTryDispatchBuiltinValue(dr);
    goto L186(dx);
  L192():
    l3 = ld start;
    c35 = `is.object`(l3);
    if c35 then L194() else L195(0, l3);
  D42():
    deopt 206 [valid6];
  L193(dx3):
    st start = dx3;
    st incr = 3599.0;
    goto L43();
  L194():
    dr2 = tryDispatchBuiltin.0("$<-", l3, 0);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L196() else L195(0, dr2);
  L195(r88, l5):
    r91 = `$<-`(l5, <sym min>, 0);
    goto L193(r91);
  L198():
    valid7 = force? valid6;
    checkMissing(valid7);
    r93 = `>`(valid7, 3);
    c36 = `as.logical`(r93);
    if c36 then L199() else L44();
  L44():
    goto L45();
  L45():
    valid8 = ld valid;
    check L205() else D43();
  L196():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L193(dx2);
  L199():
    l6 = ld start;
    c37 = `is.object`(l6);
    if c37 then L201() else L202(0, l6);
  D43():
    deopt 220 [valid8];
  L200(dx5):
    st start = dx5;
    st incr = 86399.0;
    goto L45();
  L201():
    dr4 = tryDispatchBuiltin.0("$<-", l6, 0);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L203() else L202(0, dr4);
  L202(r95, l8):
    r98 = `$<-`(l8, <sym hour>, 0);
    goto L200(r98);
  L205():
    valid9 = force? valid8;
    checkMissing(valid9);
    r100 = `>`(valid9, 4);
    c38 = `as.logical`(r100);
    if c38 then L206() else L46();
  L46():
    goto L47();
  L47():
    valid10 = ld valid;
    check L212() else D44();
  L203():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L200(dx4);
  L206():
    l9 = ld start;
    c39 = `is.object`(l9);
    if c39 then L208() else L209(-1, l9);
  D44():
    deopt 231 [valid10];
  L207(r104, dx7):
    st start = dx7;
    goto L47();
  L208():
    dr6 = tryDispatchBuiltin.0("$<-", l9, -1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L210() else L209(-1, dr6);
  L209(r102, l11):
    r105 = `$<-`(l11, <sym isdst>, -1);
    goto L207(r102, r105);
  L212():
    valid11 = force? valid10;
    checkMissing(valid11);
    r107 = `==`(valid11, 5);
    c40 = `as.logical`(r107);
    if c40 then L213() else L48();
  L48():
    goto L53();
  L53():
    valid12 = ld valid;
    check L248() else D50();
  L210():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L207(-1, dx6);
  L213():
    start = ld start;
    check L214() else D45();
  D45():
    deopt 235 [start];
  D50():
    deopt 268 [valid12];
  L214():
    start1 = force? start;
    checkMissing(start1);
    c41 = `is.object`(start1);
    if c41 then L216() else L217(start1);
  L248():
    valid13 = force? valid12;
    checkMissing(valid13);
    r128 = `==`(valid13, 6);
    c49 = `as.logical`(r128);
    if c49 then L249() else L54();
  L54():
    valid14 = ld valid;
    check L291() else D62();
  L64(r171):
    goto L28();
  L215(dx9):
    start4 = ld start;
    check L219() else D46();
  L216():
    dr8 = tryDispatchBuiltin.1("$", start1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L218() else L217(dr8);
  L217(start3):
    r108 = `$`(start3, <sym mday>);
    goto L215(r108);
  L249():
    l18 = ld start;
    c50 = `is.object`(l18);
    if c50 then L251() else L252(1, l18);
  D46():
    deopt 237 [dx9, start4];
  D62():
    deopt 336 [valid14];
  L218():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L215(dx8);
  L219():
    start5 = force? start4;
    checkMissing(start5);
    c42 = `is.object`(start5);
    if c42 then L221() else L222(dx9, start5);
  L250(dx32):
    st start = dx32;
    as_POSIXlt1 = ldf `as.POSIXlt`;
    check L254() else D51();
  L251():
    dr20 = tryDispatchBuiltin.0("$<-", l18, 1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L253() else L252(1, dr20);
  L252(r130, l20):
    r133 = `$<-`(l20, <sym mday>, 1);
    goto L250(r133);
  L291():
    valid15 = force? valid14;
    checkMissing(valid15);
    r172 = `==`(valid15, 7);
    c58 = `as.logical`(r172);
    if c58 then L292() else L65();
  D51():
    deopt 278 [];
  L65():
    valid16 = ld valid;
    check L342() else D74();
  L220(dx14, dx15):
    r110 = `-`(dx14, dx15);
    l12 = ld start;
    c43 = `is.object`(l12);
    if c43 then L225() else L226(r110, l12);
  L221():
    dr10 = tryDispatchBuiltin.1("$", start5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L223() else L222(dx9, dr10);
  L222(dx11, start7):
    r109 = `$`(start7, <sym wday>);
    goto L220(dx11, r109);
  L253():
    dx31 = getTryDispatchBuiltinValue(dr20);
    goto L250(dx31);
  L254():
    p9 = prom<V +>{
      sym14 = ldf max;
      base14 = ldf max in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r135):
      return r135;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      max = ldf max in base;
      r136 = dyn max(x8, TRUE);
      goto L0(r136);
    L2():
      r134 = dyn base14[, `na.rm`](<sym x>, TRUE);
      goto L0(r134);
    };
    r138 = dyn as_POSIXlt1(p9);
    check L255() else D52();
  L292():
    l30 = ld start;
    c59 = `is.object`(l30);
    if c59 then L294() else L295(0, l30);
  D52():
    deopt 280 [r138];
  D74():
    deopt 414 [valid16];
  L223():
    dx13 = getTryDispatchBuiltinValue(dr10);
    goto L220(dx9, dx13);
  L224(dx17):
    st start = dx17;
    start_on_monday1 = ld `start.on.monday`;
    check L228() else D47();
  L225():
    dr12 = tryDispatchBuiltin.0("$<-", l12, r110);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L227() else L226(r110, dr12);
  L226(r112, l14):
    r115 = `$<-`(l14, <sym mday>, r110);
    goto L224(r115);
  L255():
    st end = r138;
    as_POSIXlt2 = ldf `as.POSIXlt`;
    check L256() else D53();
  L293(dx44):
    st start = dx44;
    l33 = ld start;
    c60 = `is.object`(l33);
    if c60 then L298() else L299(1, l33);
  L294():
    dr32 = tryDispatchBuiltin.0("$<-", l30, 0);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L296() else L295(0, dr32);
  L295(r174, l32):
    r177 = `$<-`(l32, <sym mon>, 0);
    goto L293(r177);
  L342():
    valid17 = force? valid16;
    checkMissing(valid17);
    r225 = `==`(valid17, 8);
    c69 = `as.logical`(r225);
    if c69 then L343() else L75();
  D47():
    deopt 244 [start_on_monday1];
  D53():
    deopt 283 [];
  L75():
    sym24 = ldf max;
    base24 = ldf max in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L413() else L414();
  L227():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L224(dx16);
  L228():
    start_on_monday2 = force? start_on_monday1;
    checkMissing(start_on_monday2);
    c44 = `as.logical`(start_on_monday2);
    if c44 then L229() else L49();
  L256():
    p10 = prom<V +>{
      end = ld end;
      end1 = force? end;
      checkMissing(end1);
      r139 = `+`(end1, 2678400.0);
      return r139;
    };
    r141 = dyn as_POSIXlt2(p10);
    check L257() else D54();
  L296():
    dx43 = getTryDispatchBuiltinValue(dr32);
    goto L293(dx43);
  L297(dx46):
    st start = dx46;
    as_POSIXlt3 = ldf `as.POSIXlt`;
    check L301() else D63();
  L298():
    dr34 = tryDispatchBuiltin.0("$<-", l33, 1);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L300() else L299(1, dr34);
  L299(r179, l35):
    r182 = `$<-`(l35, <sym mday>, 1);
    goto L297(r182);
  L343():
    sym20 = ldf rep;
    base20 = ldf rep in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L344() else L345();
  D54():
    deopt 285 [r141];
  D63():
    deopt 351 [];
  L49():
    goto L52();
  L52():
    st incr = 604800.0;
    goto L53();
  L76(r227):
    st qtr = r227;
    qtr = ld qtr;
    check L346() else D75();
  L88(r280):
    st maxx = r280;
    seq3 = ldf seq;
    check L417() else D92();
  L229():
    start8 = ld start;
    check L230() else D48();
  L257():
    st end = r141;
    l21 = ld end;
    c51 = `is.object`(l21);
    if c51 then L259() else L260(1, l21);
  L300():
    dx45 = getTryDispatchBuiltinValue(dr34);
    goto L297(dx45);
  L301():
    p13 = prom<V +>{
      sym17 = ldf max;
      base17 = ldf max in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r184):
      return r184;
    L1():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      max1 = ldf max in base;
      r185 = dyn max1(x10, TRUE);
      goto L0(r185);
    L2():
      r183 = dyn base17[, `na.rm`](<sym x>, TRUE);
      goto L0(r183);
    };
    r187 = dyn as_POSIXlt3(p13);
    check L302() else D64();
  L344():
    rep = ldf rep in base;
    r228 = dyn rep(<lang c(0, 3, 6, 9)>, 3);
    goto L76(r228);
  L345():
    r226 = dyn base20[, each](<lang c(0, 3, 6, 9)>, 3);
    goto L76(r226);
  L413():
    x13 = ld x;
    check L415() else D90();
  L414():
    r279 = dyn base24[, `na.rm`](<sym x>, TRUE);
    goto L88(r279);
  D48():
    deopt 246 [start8];
  D64():
    deopt 353 [r187];
  D75():
    deopt 422 [qtr];
  D90():
    deopt 510 [x13];
  D92():
    deopt 518 [];
  L230():
    start9 = force? start8;
    checkMissing(start9);
    c45 = `is.object`(start9);
    if c45 then L232() else L233(start9);
  L258(dx34):
    st end = dx34;
    l24 = ld end;
    c52 = `is.object`(l24);
    if c52 then L263() else L264(-1, l24);
  L259():
    dr22 = tryDispatchBuiltin.0("$<-", l21, 1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L261() else L260(1, dr22);
  L260(r143, l23):
    r146 = `$<-`(l23, <sym mday>, 1);
    goto L258(r146);
  L302():
    st end = r187;
    as_POSIXlt4 = ldf `as.POSIXlt`;
    check L303() else D65();
  L346():
    qtr1 = force? qtr;
    checkMissing(qtr1);
    c70 = `is.object`(qtr1);
    if c70 then L347() else L348(qtr1);
  L415():
    x14 = force? x13;
    checkMissing(x14);
    max3 = ldf max in base;
    r281 = dyn max3(x14, TRUE);
    check L416() else D91();
  L417():
    p21 = prom<V +>{
      start26 = ld start;
      start27 = force? start26;
      checkMissing(start27);
      return start27;
    };
    p22 = prom<V +>{
      maxx = ld maxx;
      maxx1 = force? maxx;
      checkMissing(maxx1);
      incr = ld incr;
      incr1 = force? incr;
      checkMissing(incr1);
      r283 = `+`(maxx1, incr1);
      return r283;
    };
    p23 = prom<V +>{
      breaks41 = ld breaks;
      breaks42 = force? breaks41;
      checkMissing(breaks42);
      return breaks42;
    };
    r286 = dyn seq3(p21, p22, p23);
    check L418() else D93();
  D65():
    deopt 356 [];
  D91():
    deopt 515 [r281];
  D93():
    deopt 522 [r286];
  L77(dx60):
    l48 = ld start;
    c72 = `is.object`(l48);
    if c72 then L356() else L357(dx60, l48);
  L231(dx19):
    start12 = ld start;
    check L235() else D49();
  L232():
    dr14 = tryDispatchBuiltin.1("$", start9);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L234() else L233(dr14);
  L233(start11):
    r116 = `$`(start11, <sym mday>);
    goto L231(r116);
  L261():
    dx33 = getTryDispatchBuiltinValue(dr22);
    goto L258(dx33);
  L262(dx36):
    st end = dx36;
    seq = ldf seq;
    check L266() else D55();
  L263():
    dr24 = tryDispatchBuiltin.0("$<-", l24, -1);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L265() else L264(-1, dr24);
  L264(r148, l26):
    r151 = `$<-`(l26, <sym isdst>, -1);
    goto L262(r151);
  L303():
    p14 = prom<V +>{
      end4 = ld end;
      end5 = force? end4;
      checkMissing(end5);
      r188 = `+`(end5, 3.16224E7);
      return r188;
    };
    r190 = dyn as_POSIXlt4(p14);
    check L304() else D66();
  L347():
    dr48 = tryDispatchBuiltin.1("[", qtr1);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L349() else L348(dr48);
  L348(qtr3):
    start20 = ld start;
    check L350() else D76();
  L416():
    goto L88(r281);
  L418():
    st breaks = r286;
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L419() else L420();
  D49():
    deopt 248 [dx19, start12];
  D55():
    deopt 298 [];
  D66():
    deopt 358 [r190];
  D76():
    deopt 424 [qtr3, start20];
  L89(r288):
    r290 = `>`(r288, 2);
    c84 = `as.logical`(r290);
    if c84 then L423() else L90();
  L234():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L231(dx18);
  L235():
    start13 = force? start12;
    checkMissing(start13);
    c46 = `is.object`(start13);
    if c46 then L237() else L238(dx19, start13);
  L265():
    dx35 = getTryDispatchBuiltinValue(dr24);
    goto L262(dx35);
  L266():
    p11 = prom<V +>{
      start16 = ld start;
      start17 = force? start16;
      checkMissing(start17);
      return start17;
    };
    p12 = prom<V +>{
      end2 = ld end;
      end3 = force? end2;
      checkMissing(end3);
      return end3;
    };
    r154 = dyn seq(p11, p12, "months");
    check L267() else D56();
  L304():
    st end = r190;
    l36 = ld end;
    c61 = `is.object`(l36);
    if c61 then L306() else L307(0, l36);
  L349():
    dx59 = getTryDispatchBuiltinValue(dr48);
    goto L77(dx59);
  L350():
    start21 = force? start20;
    checkMissing(start21);
    c71 = `is.object`(start21);
    if c71 then L352() else L353(qtr3, start21);
  L355(dx68):
    st start = dx68;
    l51 = ld start;
    c73 = `is.object`(l51);
    if c73 then L360() else L361(1, l51);
  L356():
    dr52 = tryDispatchBuiltin.0("$<-", l48, dx60);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L358() else L357(dx60, dr52);
  L357(dx64, l50):
    r232 = `$<-`(l50, <sym mon>, dx60);
    goto L355(r232);
  L419():
    breaks43 = ld breaks;
    check L421() else D94();
  L420():
    r287 = dyn base25(<sym breaks>);
    goto L89(r287);
  D56():
    deopt 302 [r154];
  D94():
    deopt 526 [breaks43];
  L90():
    goto L64(NULL);
  L236(dx24, dx25):
    r118 = `>`(dx25, 0);
    c47 = `as.logical`(r118);
    if c47 then L240() else L50();
  L237():
    dr16 = tryDispatchBuiltin.1("$", start13);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L239() else L238(dx19, dr16);
  L238(dx21, start15):
    r117 = `$`(start15, <sym wday>);
    goto L236(dx21, r117);
  L267():
    st breaks = r154;
    sym15 = ldf seq_along;
    base15 = ldf seq_along in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L268() else L269();
  L305(dx48):
    st end = dx48;
    l39 = ld end;
    c62 = `is.object`(l39);
    if c62 then L310() else L311(1, l39);
  L306():
    dr36 = tryDispatchBuiltin.0("$<-", l36, 0);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L308() else L307(0, dr36);
  L307(r192, l38):
    r195 = `$<-`(l38, <sym mon>, 0);
    goto L305(r195);
  L351(qtr7, dx62):
    r230 = `+`(dx62, 1);
    __4 = ldf `[` in base;
    r231 = dyn __4(qtr7, r230);
    goto L77(r231);
  L352():
    dr50 = tryDispatchBuiltin.1("$", start21);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L354() else L353(qtr3, dr50);
  L353(qtr5, start23):
    r229 = `$`(start23, <sym mon>);
    goto L351(qtr5, r229);
  L358():
    dx66 = getTryDispatchBuiltinValue(dr52);
    goto L355(dx66);
  L359(dx70):
    st start = dx70;
    as_POSIXlt5 = ldf `as.POSIXlt`;
    check L363() else D77();
  L360():
    dr54 = tryDispatchBuiltin.0("$<-", l51, 1);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L362() else L361(1, dr54);
  L361(r234, l53):
    r237 = `$<-`(l53, <sym mday>, 1);
    goto L359(r237);
  L421():
    breaks44 = force? breaks43;
    checkMissing(breaks44);
    length2 = ldf length in base;
    r289 = dyn length2(breaks44);
    check L422() else D95();
  L423():
    breaks45 = ld breaks;
    check L424() else D96();
  D77():
    deopt 439 [];
  D95():
    deopt 529 [r289];
  D96():
    deopt 532 [breaks45];
  L50():
    goto L51(dx24, -6);
  L51(dx28, r119):
    r120 = `+`(dx28, r119);
    l15 = ld start;
    c48 = `is.object`(l15);
    if c48 then L243() else L244(r120, l15);
  L55(r156):
    st ind = r156;
    right1 = ld right;
    check L274() else D58();
  L239():
    dx23 = getTryDispatchBuiltinValue(dr16);
    goto L236(dx19, dx23);
  L240():
    goto L51(dx24, 1);
  L268():
    breaks17 = ld breaks;
    check L270() else D57();
  L269():
    r155 = dyn base15(<lang `[`(breaks, `-`(1))>);
    goto L55(r155);
  L308():
    dx47 = getTryDispatchBuiltinValue(dr36);
    goto L305(dx47);
  L309(dx50):
    st end = dx50;
    l42 = ld end;
    c63 = `is.object`(l42);
    if c63 then L314() else L315(-1, l42);
  L310():
    dr38 = tryDispatchBuiltin.0("$<-", l39, 1);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L312() else L311(1, dr38);
  L311(r197, l41):
    r200 = `$<-`(l41, <sym mday>, 1);
    goto L309(r200);
  L354():
    dx61 = getTryDispatchBuiltinValue(dr50);
    goto L351(qtr3, dx61);
  L362():
    dx69 = getTryDispatchBuiltinValue(dr54);
    goto L359(dx69);
  L363():
    p17 = prom<V +>{
      sym21 = ldf max;
      base21 = ldf max in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L1() else L2();
    L0(r239):
      return r239;
    L1():
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      max2 = ldf max in base;
      r240 = dyn max2(x12, TRUE);
      goto L0(r240);
    L2():
      r238 = dyn base21[, `na.rm`](<sym x>, TRUE);
      goto L0(r238);
    };
    r242 = dyn as_POSIXlt5(p17);
    check L364() else D78();
  L422():
    goto L89(r289);
  L424():
    breaks46 = force? breaks45;
    checkMissing(breaks46);
    c85 = `is.object`(breaks46);
    if c85 then L425() else L426(breaks46);
  D57():
    deopt 305 [breaks17];
  D58():
    deopt 312 [right1];
  D78():
    deopt 441 [r242];
  L91(dx92):
    st breaks = dx92;
    goto L64(dx92);
  L242(r124, dx30):
    st start = dx30;
    goto L52();
  L243():
    dr18 = tryDispatchBuiltin.0("$<-", l15, r120);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L245() else L244(r120, dr18);
  L244(r122, l17):
    r125 = `$<-`(l17, <sym mday>, r120);
    goto L242(r122, r125);
  L270():
    breaks18 = force? breaks17;
    checkMissing(breaks18);
    c53 = `is.object`(breaks18);
    if c53 then L271() else L272(breaks18);
  L274():
    right2 = force? right1;
    checkMissing(right2);
    c54 = `as.logical`(right2);
    if c54 then L275() else L57();
  L312():
    dx49 = getTryDispatchBuiltinValue(dr38);
    goto L309(dx49);
  L313(dx52):
    st end = dx52;
    seq1 = ldf seq;
    check L317() else D67();
  L314():
    dr40 = tryDispatchBuiltin.0("$<-", l42, -1);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L316() else L315(-1, dr40);
  L315(r202, l44):
    r205 = `$<-`(l44, <sym isdst>, -1);
    goto L313(r205);
  L364():
    st end = r242;
    as_POSIXlt6 = ldf `as.POSIXlt`;
    check L365() else D79();
  L425():
    dr72 = tryDispatchBuiltin.1("[", breaks46);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L427() else L426(dr72);
  L426(breaks48):
    sym26 = ldf seq_len;
    base26 = ldf seq_len in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L428() else L429();
  D67():
    deopt 376 [];
  D79():
    deopt 444 [];
  L56(dx38):
    r158 = seq_along(dx38);
    goto L55(r158);
  L57():
    goto L60();
  L60():
    sym16 = ldf missing;
    base16 = ldf missing in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L286() else L287();
  L92(breaks51, r292):
    __8 = ldf `[` in base;
    r304 = dyn __8(breaks51, r292);
    goto L91(r304);
  L245():
    dx29 = getTryDispatchBuiltinValue(dr18);
    goto L242(r120, dx29);
  L271():
    dr26 = tryDispatchBuiltin.1("[", breaks18);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L273() else L272(dr26);
  L272(breaks20):
    __ = ldf `[` in base;
    r157 = dyn __(breaks20, -1);
    goto L56(r157);
  L275():
    breaks21 = ld breaks;
    check L276() else D59();
  L316():
    dx51 = getTryDispatchBuiltinValue(dr40);
    goto L313(dx51);
  L317():
    p15 = prom<V +>{
      start18 = ld start;
      start19 = force? start18;
      checkMissing(start19);
      return start19;
    };
    p16 = prom<V +>{
      end6 = ld end;
      end7 = force? end6;
      checkMissing(end7);
      return end7;
    };
    r208 = dyn seq1(p15, p16, "years");
    check L318() else D68();
  L365():
    p18 = prom<V +>{
      end8 = ld end;
      end9 = force? end8;
      checkMissing(end9);
      r243 = `+`(end9, 8035200.0);
      return r243;
    };
    r245 = dyn as_POSIXlt6(p18);
    check L366() else D80();
  L427():
    dx91 = getTryDispatchBuiltinValue(dr72);
    goto L91(dx91);
  L428():
    sym27 = ldf max;
    base27 = ldf max in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L430() else L431();
  L429():
    r291 = dyn base26(<lang `+`(1, max(which(`<`(breaks, maxx))))>);
    goto L92(breaks48, r291);
  D59():
    deopt 314 [breaks21];
  D68():
    deopt 380 [r208];
  D80():
    deopt 446 [r245];
  L61(r168):
    c57 = `as.logical`(r168);
    if c57 then L288() else L62();
  L93(breaks54, r296, r297):
    r302 = `+`(r296, r297);
    r303 = seq_len(r302);
    goto L92(breaks54, r303);
  L273():
    dx37 = getTryDispatchBuiltinValue(dr26);
    goto L56(dx37);
  L276():
    breaks22 = force? breaks21;
    checkMissing(breaks22);
    c55 = `is.object`(breaks22);
    if c55 then L277() else L278(breaks22);
  L286():
    missing1 = ldf missing in base;
    r169 = dyn missing1(<sym format>);
    goto L61(r169);
  L287():
    r167 = dyn base16(<sym format>);
    goto L61(r167);
  L318():
    st breaks = r208;
    sym18 = ldf seq_along;
    base18 = ldf seq_along in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L319() else L320();
  L366():
    st end = r245;
    qtr8 = ld qtr;
    check L367() else D81();
  L430():
    which = ldf which;
    check L432() else D97();
  L431():
    r295 = dyn base27(<lang which(`<`(breaks, maxx))>);
    goto L93(breaks48, 1, r295);
  D81():
    deopt 448 [qtr8];
  D97():
    deopt 539 [breaks48, 1];
  L58(dx40):
    r160 = `-`(dx40, 86400.0);
    l27 = ld breaks;
    c56 = `is.object`(l27);
    if c56 then L281() else L282(r160, l27);
  L62():
    goto L63(NULL);
  L63(r170):
    goto L64(r170);
  L66(r210):
    st ind = r210;
    right3 = ld right;
    check L325() else D70();
  L277():
    dr28 = tryDispatchBuiltin.1("[", breaks22);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L279() else L278(dr28);
  L278(breaks24):
    ind = ld ind;
    check L280() else D60();
  L288():
    st format = "%Y-%m-%d";
    goto L63("%Y-%m-%d");
  L319():
    breaks25 = ld breaks;
    check L321() else D69();
  L320():
    r209 = dyn base18(<lang `[`(breaks, `-`(1))>);
    goto L66(r209);
  L367():
    qtr9 = force? qtr8;
    checkMissing(qtr9);
    c74 = `is.object`(qtr9);
    if c74 then L368() else L369(qtr9);
  L432():
    p24 = prom<V +>{
      breaks55 = ld breaks;
      breaks56 = force? breaks55;
      checkMissing(breaks56);
      maxx2 = ld maxx;
      maxx3 = force? maxx2;
      checkMissing(maxx3);
      r298 = `<`(breaks56, maxx3);
      return r298;
    };
    r300 = dyn which(p24);
    check L433() else D98();
  D60():
    deopt 316 [breaks24, ind];
  D69():
    deopt 383 [breaks25];
  D70():
    deopt 390 [right3];
  D98():
    deopt 541 [breaks48, 1, r300];
  L59(r164, dx42):
    st breaks = dx42;
    goto L60();
  L78(dx72):
    l54 = ld end;
    c76 = `is.object`(l54);
    if c76 then L377() else L378(dx72, l54);
  L279():
    dx39 = getTryDispatchBuiltinValue(dr28);
    goto L58(dx39);
  L280():
    ind1 = force? ind;
    __1 = ldf `[` in base;
    r159 = dyn __1(breaks24, ind1);
    goto L58(r159);
  L281():
    dr30 = tryDispatchBuiltin.0("[<-", l27, r160);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L283() else L282(r160, dr30);
  L282(r162, l29):
    ind2 = ld ind;
    check L284() else D61();
  L321():
    breaks26 = force? breaks25;
    checkMissing(breaks26);
    c64 = `is.object`(breaks26);
    if c64 then L322() else L323(breaks26);
  L325():
    right4 = force? right3;
    checkMissing(right4);
    c65 = `as.logical`(right4);
    if c65 then L326() else L68();
  L368():
    dr56 = tryDispatchBuiltin.1("[", qtr9);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L370() else L369(dr56);
  L369(qtr11):
    end10 = ld end;
    check L371() else D82();
  L433():
    max4 = ldf max in base;
    r301 = dyn max4(r300);
    check L434() else D99();
  D61():
    deopt 322 [r162, l29, r160, ind2];
  D82():
    deopt 450 [qtr11, end10];
  D99():
    deopt 543 [breaks48, 1, r301];
  L67(dx54):
    r212 = seq_along(dx54);
    goto L66(r212);
  L68():
    goto L71();
  L71():
    sym19 = ldf missing;
    base19 = ldf missing in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L337() else L338();
  L283():
    dx41 = getTryDispatchBuiltinValue(dr30);
    goto L59(r160, dx41);
  L284():
    ind3 = force? ind2;
    ___ = ldf `[<-` in base;
    r165 = dyn ___(l29, r160, ind3);
    goto L59(r162, r165);
  L322():
    dr42 = tryDispatchBuiltin.1("[", breaks26);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L324() else L323(dr42);
  L323(breaks28):
    __2 = ldf `[` in base;
    r211 = dyn __2(breaks28, -1);
    goto L67(r211);
  L326():
    breaks29 = ld breaks;
    check L327() else D71();
  L370():
    dx71 = getTryDispatchBuiltinValue(dr56);
    goto L78(dx71);
  L371():
    end11 = force? end10;
    checkMissing(end11);
    c75 = `is.object`(end11);
    if c75 then L373() else L374(qtr11, end11);
  L376(dx80):
    st end = dx80;
    l57 = ld end;
    c77 = `is.object`(l57);
    if c77 then L381() else L382(1, l57);
  L377():
    dr60 = tryDispatchBuiltin.0("$<-", l54, dx72);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L379() else L378(dx72, dr60);
  L378(dx76, l56):
    r249 = `$<-`(l56, <sym mon>, dx72);
    goto L376(r249);
  L434():
    goto L93(breaks48, 1, r301);
  D71():
    deopt 392 [breaks29];
  L72(r222):
    c68 = `as.logical`(r222);
    if c68 then L339() else L73();
  L324():
    dx53 = getTryDispatchBuiltinValue(dr42);
    goto L67(dx53);
  L327():
    breaks30 = force? breaks29;
    checkMissing(breaks30);
    c66 = `is.object`(breaks30);
    if c66 then L328() else L329(breaks30);
  L337():
    missing2 = ldf missing in base;
    r223 = dyn missing2(<sym format>);
    goto L72(r223);
  L338():
    r221 = dyn base19(<sym format>);
    goto L72(r221);
  L372(qtr15, dx74):
    r247 = `+`(dx74, 1);
    __5 = ldf `[` in base;
    r248 = dyn __5(qtr15, r247);
    goto L78(r248);
  L373():
    dr58 = tryDispatchBuiltin.1("$", end11);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L375() else L374(qtr11, dr58);
  L374(qtr13, end13):
    r246 = `$`(end13, <sym mon>);
    goto L372(qtr13, r246);
  L379():
    dx78 = getTryDispatchBuiltinValue(dr60);
    goto L376(dx78);
  L380(dx82):
    st end = dx82;
    l60 = ld end;
    c78 = `is.object`(l60);
    if c78 then L385() else L386(-1, l60);
  L381():
    dr62 = tryDispatchBuiltin.0("$<-", l57, 1);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L383() else L382(1, dr62);
  L382(r251, l59):
    r254 = `$<-`(l59, <sym mday>, 1);
    goto L380(r254);
  L69(dx56):
    r214 = `-`(dx56, 86400.0);
    l45 = ld breaks;
    c67 = `is.object`(l45);
    if c67 then L332() else L333(r214, l45);
  L73():
    goto L74(NULL);
  L74(r224):
    goto L64(r224);
  L328():
    dr44 = tryDispatchBuiltin.1("[", breaks30);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L330() else L329(dr44);
  L329(breaks32):
    ind4 = ld ind;
    check L331() else D72();
  L339():
    st format = "%Y-%m-%d";
    goto L74("%Y-%m-%d");
  L375():
    dx73 = getTryDispatchBuiltinValue(dr58);
    goto L372(qtr11, dx73);
  L383():
    dx81 = getTryDispatchBuiltinValue(dr62);
    goto L380(dx81);
  L384(dx84):
    st end = dx84;
    seq2 = ldf seq;
    check L388() else D83();
  L385():
    dr64 = tryDispatchBuiltin.0("$<-", l60, -1);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L387() else L386(-1, dr64);
  L386(r256, l62):
    r259 = `$<-`(l62, <sym isdst>, -1);
    goto L384(r259);
  D72():
    deopt 394 [breaks32, ind4];
  D83():
    deopt 470 [];
  L70(r218, dx58):
    st breaks = dx58;
    goto L71();
  L330():
    dx55 = getTryDispatchBuiltinValue(dr44);
    goto L69(dx55);
  L331():
    ind5 = force? ind4;
    __3 = ldf `[` in base;
    r213 = dyn __3(breaks32, ind5);
    goto L69(r213);
  L332():
    dr46 = tryDispatchBuiltin.0("[<-", l45, r214);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L334() else L333(r214, dr46);
  L333(r216, l47):
    ind6 = ld ind;
    check L335() else D73();
  L387():
    dx83 = getTryDispatchBuiltinValue(dr64);
    goto L384(dx83);
  L388():
    p19 = prom<V +>{
      start24 = ld start;
      start25 = force? start24;
      checkMissing(start25);
      return start25;
    };
    p20 = prom<V +>{
      end14 = ld end;
      end15 = force? end14;
      checkMissing(end15);
      return end15;
    };
    r262 = dyn seq2(p19, p20, "3 months");
    check L389() else D84();
  D73():
    deopt 400 [r216, l47, r214, ind6];
  D84():
    deopt 474 [r262];
  L334():
    dx57 = getTryDispatchBuiltinValue(dr46);
    goto L70(r214, dx57);
  L335():
    ind7 = force? ind6;
    ___1 = ldf `[<-` in base;
    r219 = dyn ___1(l47, r214, ind7);
    goto L70(r216, r219);
  L389():
    st breaks = r262;
    sym22 = ldf seq_along;
    base22 = ldf seq_along in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L390() else L391();
  L79(r264):
    st ind = r264;
    right5 = ld right;
    check L396() else D86();
  L390():
    breaks33 = ld breaks;
    check L392() else D85();
  L391():
    r263 = dyn base22(<lang `[`(breaks, `-`(1))>);
    goto L79(r263);
  D85():
    deopt 477 [breaks33];
  D86():
    deopt 484 [right5];
  L392():
    breaks34 = force? breaks33;
    checkMissing(breaks34);
    c79 = `is.object`(breaks34);
    if c79 then L393() else L394(breaks34);
  L396():
    right6 = force? right5;
    checkMissing(right6);
    c80 = `as.logical`(right6);
    if c80 then L397() else L81();
  L80(dx86):
    r266 = seq_along(dx86);
    goto L79(r266);
  L81():
    goto L84();
  L84():
    sym23 = ldf missing;
    base23 = ldf missing in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L408() else L409();
  L393():
    dr66 = tryDispatchBuiltin.1("[", breaks34);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L395() else L394(dr66);
  L394(breaks36):
    __6 = ldf `[` in base;
    r265 = dyn __6(breaks36, -1);
    goto L80(r265);
  L397():
    breaks37 = ld breaks;
    check L398() else D87();
  D87():
    deopt 486 [breaks37];
  L85(r276):
    c83 = `as.logical`(r276);
    if c83 then L410() else L86();
  L395():
    dx85 = getTryDispatchBuiltinValue(dr66);
    goto L80(dx85);
  L398():
    breaks38 = force? breaks37;
    checkMissing(breaks38);
    c81 = `is.object`(breaks38);
    if c81 then L399() else L400(breaks38);
  L408():
    missing3 = ldf missing in base;
    r277 = dyn missing3(<sym format>);
    goto L85(r277);
  L409():
    r275 = dyn base23(<sym format>);
    goto L85(r275);
  L82(dx88):
    r268 = `-`(dx88, 86400.0);
    l63 = ld breaks;
    c82 = `is.object`(l63);
    if c82 then L403() else L404(r268, l63);
  L86():
    goto L87(NULL);
  L87(r278):
    goto L64(r278);
  L399():
    dr68 = tryDispatchBuiltin.1("[", breaks38);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L401() else L400(dr68);
  L400(breaks40):
    ind8 = ld ind;
    check L402() else D88();
  L410():
    st format = "%Y-%m-%d";
    goto L87("%Y-%m-%d");
  D88():
    deopt 488 [breaks40, ind8];
  L83(r272, dx90):
    st breaks = dx90;
    goto L84();
  L401():
    dx87 = getTryDispatchBuiltinValue(dr68);
    goto L82(dx87);
  L402():
    ind9 = force? ind8;
    __7 = ldf `[` in base;
    r267 = dyn __7(breaks40, ind9);
    goto L82(r267);
  L403():
    dr70 = tryDispatchBuiltin.0("[<-", l63, r268);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L405() else L404(r268, dr70);
  L404(r270, l65):
    ind10 = ld ind;
    check L406() else D89();
  D89():
    deopt 494 [r270, l65, r268, ind10];
  L405():
    dx89 = getTryDispatchBuiltinValue(dr70);
    goto L83(r268, dx89);
  L406():
    ind11 = force? ind10;
    ___2 = ldf `[<-` in base;
    r273 = dyn ___2(l65, r268, ind11);
    goto L83(r270, r273);
  }
}
fun inner1609803073(res, xlab, freq, format, breaks, `include.lowest`, fuzz, density, angle, col, border, lty, labels, axes, xaxt, `...`) {
  (reg res:*, reg xlab:*, reg freq:*, reg format:*, reg breaks:*, reg include_lowest:*, reg fuzz:*, reg density:*, reg angle:*, reg col:*, reg border:*, reg lty:*, reg labels:*, reg axes:*, reg xaxt:*, reg ddd:dots) -+> V { var res:*, var xlab:*, var freq:*, var format:*, var breaks:*, var `include.lowest`:*, var fuzz:*, var density:*, reg density_isMissing:L, reg density_orDefault:*, var angle:*, reg angle_isMissing:L, reg angle_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var border:*, reg border_isMissing:L, reg border_orDefault:*, var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var xaxt:*, reg xaxt_isMissing:L, reg xaxt_orDefault:*, reg par:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg plot:cls, reg res1:*, reg res2:V, reg p1:p(V +), reg xlab1:*, reg xlab2:V, reg p2:p(V +), reg freq1:*, reg freq2:V, reg p3:p(V +), reg density1:*, reg density2:V, reg p4:p(V +), reg angle1:*, reg angle2:V, reg p5:p(V +), reg col1:*, reg col2:V, reg p6:p(V +), reg border1:*, reg border2:V, reg p7:p(V +), reg lty1:*, reg lty2:V, reg p8:p(V +), reg labels1:*, reg labels2:V, reg p9:p(V +), reg ddd1:dots?, reg r11:V, reg axes1:*, reg axes2:V, reg c:L, reg axis:cls, reg ddd2:dots?, reg r12:V, reg xaxt1:*, reg xaxt2:V, reg r13:V, reg c1:L, reg num_br:*, reg num_br1:V, reg c2:L, reg as_POSIXct:cls, reg res3:*, reg res4:V, reg c3:L, reg res6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r14:V, reg p10:p(V +), reg r16:V, reg axis_POSIXct:cls, reg breaks1:*, reg breaks2:V, reg p11:p(V +), reg format1:*, reg format2:V, reg p12:p(V +), reg ddd3:dots?, reg r20:V |
    mkenv;
    st res = res;
    st xlab = xlab;
    st freq = freq;
    st format = format;
    st breaks = breaks;
    st `include.lowest` = include_lowest;
    st fuzz = fuzz;
    density_isMissing = missing.0(density);
    if density_isMissing then L0(NULL) else L0(density);
  L0(density_orDefault):
    st density = density_orDefault;
    angle_isMissing = missing.0(angle);
    if angle_isMissing then L1(45.0) else L1(angle);
  L1(angle_orDefault):
    st angle = angle_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L2("lightgray") else L2(col);
  L2(col_orDefault):
    st col = col_orDefault;
    border_isMissing = missing.0(border);
    if border_isMissing then L3(NULL) else L3(border);
  L3(border_orDefault):
    st border = border_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L4(NULL) else L4(lty);
  L4(lty_orDefault):
    st lty = lty_orDefault;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L5(FALSE) else L5(labels);
  L5(labels_orDefault):
    st labels = labels_orDefault;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L6(TRUE) else L6(axes);
  L6(axes_orDefault):
    st axes = axes_orDefault;
    xaxt_isMissing = missing.0(xaxt);
    if xaxt_isMissing then L7() else L8(xaxt);
  L7():
    p = prom<V +>{
      par = ldf par;
      r = dyn par("xaxt");
      return r;
    };
    goto L8(p);
  L8(xaxt_orDefault):
    st xaxt = xaxt_orDefault;
    st `...` = ddd;
    plot = ldf plot;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p1 = prom<V +>{
      res1 = ld res;
      res2 = force? res1;
      checkMissing(res2);
      return res2;
    };
    p2 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p3 = prom<V +>{
      freq1 = ld freq;
      freq2 = force? freq1;
      checkMissing(freq2);
      return freq2;
    };
    p4 = prom<V +>{
      density1 = ld density;
      density2 = force? density1;
      checkMissing(density2);
      return density2;
    };
    p5 = prom<V +>{
      angle1 = ld angle;
      angle2 = force? angle1;
      checkMissing(angle2);
      return angle2;
    };
    p6 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p7 = prom<V +>{
      border1 = ld border;
      border2 = force? border1;
      checkMissing(border2);
      return border2;
    };
    p8 = prom<V +>{
      lty1 = ld lty;
      lty2 = force? lty1;
      checkMissing(lty2);
      return lty2;
    };
    p9 = prom<V +>{
      labels1 = ld labels;
      labels2 = force? labels1;
      checkMissing(labels2);
      return labels2;
    };
    ddd1 = ld `...`;
    r11 = dyn plot[, xlab, axes, freq, density, angle, col, border, lty, labels, `...`](p1, p2, FALSE, p3, p4, p5, p6, p7, p8, p9, ddd1);
    check L14() else D1();
  D1():
    deopt 22 [r11];
  L14():
    axes1 = ld axes;
    check L15() else D2();
  D2():
    deopt 23 [axes1];
  L15():
    axes2 = force? axes1;
    checkMissing(axes2);
    c = `as.logical`(axes2);
    if c then L16() else L9();
  L9():
    invisible.0();
    popenv;
    return NULL;
  L16():
    axis = ldf axis;
    check L17() else D3();
  D3():
    deopt 26 [];
  L17():
    ddd2 = ld `...`;
    r12 = dyn axis[, `...`](2.0, ddd2);
    check L18() else D4();
  D4():
    deopt 29 [r12];
  L18():
    xaxt1 = ld xaxt;
    check L19() else D5();
  D5():
    deopt 30 [xaxt1];
  L19():
    xaxt2 = force? xaxt1;
    checkMissing(xaxt2);
    r13 = `!=`(xaxt2, "n");
    c1 = `as.logical`(r13);
    if c1 then L20() else L10();
  L10():
    invisible.0();
    popenv;
    return NULL;
  L20():
    num_br = ld `num.br`;
    check L21() else D6();
  D6():
    deopt 34 [num_br];
  L21():
    num_br1 = force? num_br;
    checkMissing(num_br1);
    c2 = `as.logical`(num_br1);
    if c2 then L22() else L11();
  L11():
    goto L12();
  L12():
    axis_POSIXct = ldf `axis.POSIXct`;
    check L26() else D9();
  L22():
    as_POSIXct = ldf `as.POSIXct`;
    check L23() else D7();
  D7():
    deopt 37 [];
  D9():
    deopt 46 [];
  L23():
    p10 = prom<V +>{
      res3 = ld res;
      res4 = force? res3;
      checkMissing(res4);
      c3 = `is.object`(res4);
      if c3 then L1() else L2(res4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", res4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(res6):
      r14 = `$`(res6, <sym breaks>);
      goto L0(r14);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r16 = dyn as_POSIXct[, origin](p10, "1970-01-01");
    check L24() else D8();
  L26():
    p11 = prom<V +>{
      breaks1 = ld breaks;
      breaks2 = force? breaks1;
      checkMissing(breaks2);
      return breaks2;
    };
    p12 = prom<V +>{
      format1 = ld format;
      format2 = force? format1;
      checkMissing(format2);
      return format2;
    };
    ddd3 = ld `...`;
    r20 = dyn axis_POSIXct[, at, format, `...`](1.0, p11, p12, ddd3);
    check L27() else D10();
  D8():
    deopt 41 [r16];
  D10():
    deopt 53 [r20];
  L24():
    st breaks = r16;
    goto L12();
  L27():
    popenv;
    return r20;
  }
}
fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg split:cls, reg airquality:*, reg airquality1:V, reg c:L, reg airquality3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg p1:p(V +), reg airquality4:*, reg airquality5:V, reg c1:L, reg airquality7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r7:V, reg p2:p(V +), reg r9:V, reg lapply:cls, reg l:*, reg l1:V, reg p3:p(V +), reg mean:*, reg mean1:V, reg p4:p(V +), reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg rep:cls, reg r15:V, reg l2:*, reg c2:L, reg r17:V, reg l4:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r20:V, reg unsplit:cls, reg avgOz:*, reg avgOz1:V, reg p5:p(V +), reg airquality8:*, reg airquality9:V, reg c3:L, reg airquality11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r22:V, reg p6:p(V +), reg r24:V, reg l5:*, reg c4:L, reg r26:V, reg l7:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r29:V, reg stopifnot:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg lengths:cls, reg l8:*, reg l9:V, reg p7:p(V +), reg r33:V, reg vapply:cls, reg l10:*, reg l11:V, reg p8:p(V +), reg length:*, reg length1:V, reg p9:p(V +), reg integer:cls, reg r36:V, reg p10:p(V +), reg r38:V, reg identical:cls, reg r39:V, reg p11:p(V +), reg r41:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r42:V, reg r43:V, reg list:cls, reg r44:V, reg stopifnot1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r45:V, reg r46:V, reg lengths1:cls, reg x:*, reg x1:V, reg p12:p(V +), reg r48:V, reg integer1:cls, reg r49:V, reg identical1:cls, reg r50:V, reg p13:p(V +), reg r52:V, reg lengths2:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r53:V, reg r54:V, reg expression:cls, reg r55:V, reg p14:p(V +), reg r57:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r58:V, reg r59:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r60:V, reg r61:V, reg rep1:cls, reg r62:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r63:V, reg r64:V, reg rep2:cls, reg r65:V, reg c5:cls, reg r66:V, reg split1:cls, reg as_POSIXlt:cls, reg Sys_time:cls, reg r67:V, reg r68:V, reg p15:p(V +), reg r70:V, reg p16:p(V +), reg f:*, reg f1:V, reg p17:p(V +), reg r73:V, reg stopifnot2:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r74:V, reg r75:V, reg lengths3:cls, reg dates:*, reg dates1:V, reg p18:p(V +), reg r77:V, reg vapply1:cls, reg dates2:*, reg dates3:V, reg p19:p(V +), reg length2:*, reg length3:V, reg p20:p(V +), reg integer2:cls, reg r80:V, reg p21:p(V +), reg r82:V, reg identical2:cls, reg r83:V, reg p22:p(V +), reg r85:V |
    mkenv;
    r = clos inner4177484978;
    st lengths = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0():
    split = ldf split;
    check L10() else D2();
  L6():
    require = ldf require;
    check L8() else D0();
  L7():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L8():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L9() else D1();
  L10():
    p1 = prom<V +>{
      airquality = ld airquality;
      airquality1 = force? airquality;
      checkMissing(airquality1);
      c = `is.object`(airquality1);
      if c then L1() else L2(airquality1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", airquality1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(airquality3):
      r5 = `$`(airquality3, <sym Ozone>);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      airquality4 = ld airquality;
      airquality5 = force? airquality4;
      checkMissing(airquality5);
      c1 = `is.object`(airquality5);
      if c1 then L1() else L2(airquality5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", airquality5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(airquality7):
      r7 = `$`(airquality7, <sym Month>);
      goto L0(r7);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r9 = dyn split(p1, p2);
    check L11() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 12 [r9];
  L9():
    goto L0();
  L11():
    st l = r9;
    lapply = ldf lapply;
    check L12() else D4();
  D4():
    deopt 15 [];
  L12():
    p3 = prom<V +>{
      l = ld l;
      l1 = force? l;
      checkMissing(l1);
      return l1;
    };
    p4 = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    r12 = dyn lapply[, , `na.rm`](p3, p4, TRUE);
    check L13() else D5();
  D5():
    deopt 20 [r12];
  L13():
    st avgOz = r12;
    sym1 = ldf rep;
    base1 = ldf rep in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L1(r14):
    l2 = ld airquality;
    c2 = `is.object`(l2);
    if c2 then L17() else L18(r14, l2);
  L14():
    rep = ldf rep in base;
    r15 = dyn rep(<lang unlist(avgOz, use.names=FALSE)>, <lang lengths(l)>);
    goto L1(r15);
  L15():
    r13 = dyn base1(<lang unlist(avgOz, use.names=FALSE)>, <lang lengths(l)>);
    goto L1(r13);
  L16(dx5):
    st airquality = dx5;
    unsplit = ldf unsplit;
    check L20() else D6();
  L17():
    dr4 = tryDispatchBuiltin.0("$<-", l2, r14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L19() else L18(r14, dr4);
  L18(r17, l4):
    r20 = `$<-`(l4, <sym avgOz>, r14);
    goto L16(r20);
  D6():
    deopt 29 [];
  L19():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L16(dx4);
  L20():
    p5 = prom<V +>{
      avgOz = ld avgOz;
      avgOz1 = force? avgOz;
      checkMissing(avgOz1);
      return avgOz1;
    };
    p6 = prom<V +>{
      airquality8 = ld airquality;
      airquality9 = force? airquality8;
      checkMissing(airquality9);
      c3 = `is.object`(airquality9);
      if c3 then L1() else L2(airquality9);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", airquality9);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(airquality11):
      r22 = `$`(airquality11, <sym Month>);
      goto L0(r22);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r24 = dyn unsplit(p5, p6);
    check L21() else D7();
  D7():
    deopt 32 [r24];
  L21():
    l5 = ld airquality;
    c4 = `is.object`(l5);
    if c4 then L23() else L24(r24, l5);
  L22(dx9):
    st airquality = dx9;
    stopifnot = ldf stopifnot;
    check L26() else D8();
  L23():
    dr8 = tryDispatchBuiltin.0("$<-", l5, r24);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L25() else L24(r24, dr8);
  L24(r26, l7):
    r29 = `$<-`(l7, <sym avgOz>, r24);
    goto L22(r29);
  D8():
    deopt 37 [];
  L25():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L22(dx8);
  L26():
    p11 = prom<V +>{
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      lengths = ldf lengths;
      p7 = prom<V +>{
        l8 = ld l;
        l9 = force? l8;
        checkMissing(l9);
        return l9;
      };
      r33 = dyn lengths(p7);
      vapply = ldf vapply;
      p8 = prom<V +>{
        l10 = ld l;
        l11 = force? l10;
        checkMissing(l11);
        return l11;
      };
      p9 = prom<V +>{
        length = ld length;
        length1 = force? length;
        checkMissing(length1);
        return length1;
      };
      p10 = prom<V +>{
        integer = ldf integer;
        r36 = dyn integer(1);
        return r36;
      };
      r38 = dyn vapply(p8, p9, p10);
      identical = ldf identical in base;
      r39 = dyn identical(r33, r38, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r39);
    L2():
      r30 = dyn base2(<lang lengths(l)>, <lang vapply(l, length, integer(1))>);
      goto L0(r30);
    };
    r41 = dyn stopifnot(p11);
    check L27() else D9();
  D9():
    deopt 39 [r41];
  L27():
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L2(r43):
    st x = r43;
    stopifnot1 = ldf stopifnot;
    check L31() else D11();
  L28():
    list = ldf list in base;
    r44 = dyn list();
    check L30() else D10();
  L29():
    r42 = dyn base3();
    goto L2(r42);
  D10():
    deopt 43 [r44];
  D11():
    deopt 46 [];
  L30():
    goto L2(r44);
  L31():
    p13 = prom<V +>{
      sym4 = ldf identical;
      base4 = ldf identical in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r46):
      return r46;
    L1():
      lengths1 = ldf lengths;
      p12 = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      r48 = dyn lengths1(p12);
      integer1 = ldf integer;
      r49 = dyn integer1();
      identical1 = ldf identical in base;
      r50 = dyn identical1(r48, r49, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r50);
    L2():
      r45 = dyn base4(<lang lengths(x)>, <lang integer()>);
      goto L0(r45);
    };
    r52 = dyn stopifnot1(p13);
    check L32() else D12();
  D12():
    deopt 48 [r52];
  L32():
    lengths2 = ldf lengths;
    check L33() else D13();
  D13():
    deopt 50 [];
  L33():
    p14 = prom<V +>{
      sym5 = ldf expression;
      base5 = ldf expression in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r54):
      return r54;
    L1():
      expression = ldf expression in base;
      r55 = dyn expression(<sym u>, <sym v>, <lang `+`(1.0, `:`(0.0, 9.0))>);
      goto L0(r55);
    L2():
      r53 = dyn base5(<sym u>, <sym v>, <lang `+`(1.0, `:`(0.0, 9.0))>);
      goto L0(r53);
    };
    r57 = dyn lengths2(p14);
    check L34() else D14();
  D14():
    deopt 52 [r57];
  L34():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L35() else L36();
  L3(r59):
    st f = r59;
    split1 = ldf split;
    check L42() else D16();
  L35():
    sym7 = ldf rep;
    base7 = ldf rep in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L37() else L38();
  L36():
    r58 = dyn base6(<lang rep(1.0, 3.0)>, <lang rep(2.0, 6.0)>, 3.0);
    goto L3(r58);
  D16():
    deopt 66 [];
  L4(r61):
    sym8 = ldf rep;
    base8 = ldf rep in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L39() else L40();
  L37():
    rep1 = ldf rep in base;
    r62 = dyn rep1(1.0, 3.0);
    goto L4(r62);
  L38():
    r60 = dyn base7(1.0, 3.0);
    goto L4(r60);
  L42():
    p16 = prom<V +>{
      as_POSIXlt = ldf `as.POSIXlt`;
      p15 = prom<V +>{
        Sys_time = ldf `Sys.time`;
        r67 = dyn Sys_time();
        r68 = `+`(r67, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
        return r68;
      };
      r70 = dyn as_POSIXlt(p15);
      return r70;
    };
    p17 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r73 = dyn split1(p16, p17);
    check L43() else D17();
  D17():
    deopt 69 [r73];
  L5(r64):
    c5 = ldf c in base;
    r66 = dyn c5(r61, r64, 3.0);
    check L41() else D15();
  L39():
    rep2 = ldf rep in base;
    r65 = dyn rep2(2.0, 6.0);
    goto L5(r65);
  L40():
    r63 = dyn base8(2.0, 6.0);
    goto L5(r63);
  L43():
    st dates = r73;
    stopifnot2 = ldf stopifnot;
    check L44() else D18();
  D15():
    deopt 63 [r66];
  D18():
    deopt 72 [];
  L41():
    goto L3(r66);
  L44():
    p22 = prom<V +>{
      sym9 = ldf identical;
      base9 = ldf identical in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r75):
      return r75;
    L1():
      lengths3 = ldf lengths;
      p18 = prom<V +>{
        dates = ld dates;
        dates1 = force? dates;
        checkMissing(dates1);
        return dates1;
      };
      r77 = dyn lengths3(p18);
      vapply1 = ldf vapply;
      p19 = prom<V +>{
        dates2 = ld dates;
        dates3 = force? dates2;
        checkMissing(dates3);
        return dates3;
      };
      p20 = prom<V +>{
        length2 = ld length;
        length3 = force? length2;
        checkMissing(length3);
        return length3;
      };
      p21 = prom<V +>{
        integer2 = ldf integer;
        r80 = dyn integer2(1);
        return r80;
      };
      r82 = dyn vapply1(p19, p20, p21);
      identical2 = ldf identical in base;
      r83 = dyn identical2(r77, r82, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r83);
    L2():
      r74 = dyn base9(<lang lengths(dates)>, <lang vapply(dates, length, integer(1))>);
      goto L0(r74);
    };
    r85 = dyn stopifnot2(p22);
    check L45() else D19();
  D19():
    deopt 74 [r85];
  L45():
    popenv;
    return r85;
  }
}
fun inner4177484978(x, `use.names`) {
  (reg x:*, reg use_names:*) -+> V { var x:*, var `use.names`:*, reg use_names_isMissing:L, reg use_names_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg use_names1:*, reg use_names2:V, reg lengths:cls, reg r2:V |
    mkenv;
    st x = x;
    use_names_isMissing = missing.0(use_names);
    if use_names_isMissing then L0(TRUE) else L0(use_names);
  L0(use_names_orDefault):
    st `use.names` = use_names_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<lang lengths(x, use.names)>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    use_names1 = ld `use.names`;
    check L5() else D1();
  D1():
    deopt 4 [use_names1];
  L5():
    use_names2 = force? use_names1;
    checkMissing(use_names2);
    lengths = ldf lengths in base;
    r2 = dyn lengths(x2, use_names2);
    check L6() else D2();
  D2():
    deopt 7 [r2];
  L6():
    goto L1(r2);
  }
}
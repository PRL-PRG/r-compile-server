fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1285586697;
    st `stack.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1285586697(x, select, drop, `...`) {
  (reg x:*, reg select:*, reg drop:*, reg ddd:dots) -+> V { var x:*, var select:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg as_list:cls, reg ncol:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r5:V, reg r6:V, reg p1:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg x3:*, reg x4:V, reg names:cls, reg r11:V, reg l:*, reg names__:cls, reg r12:V, reg eval:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg substitute:cls, reg r15:V, reg p2:p(V +), reg nl:*, reg nl1:V, reg p3:p(V +), reg parent_frame:cls, reg r18:V, reg p4:p(V +), reg r20:V, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg vars:*, reg vars1:V, reg __:cls, reg r21:V, reg vapply:cls, reg x9:*, reg x10:V, reg p5:p(V +), reg is_vector:*, reg is_vector1:V, reg p6:p(V +), reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg keep:*, reg keep1:V, reg any:cls, reg r27:V, reg r28:V, reg c2:L, reg stop:cls, reg r29:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg keep2:*, reg keep3:V, reg all:cls, reg r33:V, reg r34:V, reg c3:L, reg warning:cls, reg r35:V, reg x11:*, reg x12:V, reg c4:L, reg x14:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg keep4:*, reg keep5:V, reg __1:cls, reg r37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r38:V, reg r39:V, reg factor:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg x15:*, reg x16:V, reg names1:cls, reg r42:V, reg p7:p(V +), reg unique:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg x17:*, reg x18:V, reg names2:cls, reg r46:V, reg p8:p(V +), reg r48:V, reg p9:p(V +), reg r50:V, reg lengths:cls, reg x19:*, reg x20:V, reg p10:p(V +), reg r52:V, reg rep_int:cls, reg r53:V, reg drop1:*, reg drop2:V, reg c5:L, reg droplevels:cls, reg ind:*, reg ind1:V, reg p11:p(V +), reg r55:V, reg data_frame:cls, reg unlist:cls, reg unname:cls, reg x21:*, reg x22:V, reg p12:p(V +), reg r58:V, reg p13:p(V +), reg r60:V, reg p14:p(V +), reg ind2:*, reg ind3:V, reg p15:p(V +), reg r63:V |
    mkenv;
    st x = x;
    st select = select;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(FALSE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L18() else L2();
  L16():
    missing = ldf missing in base;
    r2 = dyn missing(<sym select>);
    goto L1(r2);
  L17():
    r = dyn base(<sym select>);
    goto L1(r);
  L2():
    goto L5();
  L5():
    vapply = ldf vapply;
    check L35() else D10();
  L18():
    as_list = ldf `as.list`;
    check L19() else D0();
  D0():
    deopt 5 [];
  D10():
    deopt 40 [];
  L19():
    p1 = prom<V +>{
      ncol = ldf ncol;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r5 = dyn ncol(p);
      r6 = `:`(1, r5);
      return r6;
    };
    r8 = dyn as_list(p1);
    check L20() else D1();
  L35():
    p5 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p6 = prom<V +>{
      is_vector = ld `is.vector`;
      is_vector1 = force? is_vector;
      checkMissing(is_vector1);
      return is_vector1;
    };
    r24 = dyn vapply(p5, p6, NA_LGL);
    check L36() else D11();
  D1():
    deopt 7 [r8];
  D11():
    deopt 44 [r24];
  L20():
    st nl = r8;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L36():
    st keep = r24;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L3(r10):
    l = ld nl;
    names__ = ldf `names<-`;
    check L25() else D4();
  L6(r26):
    r28 = `!`(r26);
    c2 = `as.logical`(r28);
    if c2 then L41() else L7();
  L21():
    x3 = ld x;
    check L23() else D2();
  L22():
    r9 = dyn base1(<sym x>);
    goto L3(r9);
  L37():
    keep = ld keep;
    check L39() else D12();
  L38():
    r25 = dyn base3(<sym keep>);
    goto L6(r25);
  D2():
    deopt 11 [x3];
  D4():
    deopt 16 [r10, l, r10];
  D12():
    deopt 48 [keep];
  L7():
    goto L8();
  L8():
    sym4 = ldf all;
    base4 = ldf all in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  L23():
    x4 = force? x3;
    checkMissing(x4);
    names = ldf names in base;
    r11 = dyn names(x4);
    check L24() else D3();
  L25():
    r12 = dyn names__(l, NULL, r10);
    check L26() else D5();
  L39():
    keep1 = force? keep;
    checkMissing(keep1);
    any = ldf any in base;
    r27 = dyn any(keep1);
    check L40() else D13();
  L41():
    stop = ldf stop;
    check L42() else D14();
  D3():
    deopt 14 [r11];
  D5():
    deopt 18 [r10, r12];
  D13():
    deopt 51 [r27];
  D14():
    deopt 54 [];
  L9(r32):
    r34 = `!`(r32);
    c3 = `as.logical`(r34);
    if c3 then L49() else L10();
  L24():
    goto L3(r11);
  L26():
    st nl = r12;
    eval = ldf eval;
    check L27() else D6();
  L40():
    goto L6(r27);
  L42():
    r29 = dyn stop("no vector columns were selected");
    check L43() else D15();
  L45():
    keep2 = ld keep;
    check L47() else D16();
  L46():
    r31 = dyn base4(<sym keep>);
    goto L9(r31);
  D6():
    deopt 21 [];
  D15():
    deopt 56 [r29];
  D16():
    deopt 61 [keep2];
  L10():
    goto L11();
  L11():
    x11 = ld x;
    check L53() else D20();
  L27():
    p2 = prom<V +>{
      sym2 = ldf substitute;
      base2 = ldf substitute in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      substitute = ldf substitute in base;
      r15 = dyn substitute(<sym select>);
      goto L0(r15);
    L2():
      r13 = dyn base2(<sym select>);
      goto L0(r13);
    };
    p3 = prom<V +>{
      nl = ld nl;
      nl1 = force? nl;
      checkMissing(nl1);
      return nl1;
    };
    p4 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r18 = dyn parent_frame();
      return r18;
    };
    r20 = dyn eval(p2, p3, p4);
    check L28() else D7();
  L43():
    goto L8();
  L47():
    keep3 = force? keep2;
    checkMissing(keep3);
    all = ldf all in base;
    r33 = dyn all(keep3);
    check L48() else D17();
  L49():
    warning = ldf warning;
    check L50() else D18();
  D7():
    deopt 25 [r20];
  D17():
    deopt 64 [r33];
  D18():
    deopt 67 [];
  D20():
    deopt 72 [x11];
  L28():
    st vars = r20;
    x5 = ld x;
    check L29() else D8();
  L48():
    goto L9(r33);
  L50():
    r35 = dyn warning("non-vector columns will be ignored");
    check L51() else D19();
  L53():
    x12 = force? x11;
    checkMissing(x12);
    c4 = `is.object`(x12);
    if c4 then L54() else L55(x12);
  D8():
    deopt 27 [x5];
  D19():
    deopt 69 [r35];
  L12(dx4):
    st x = dx4;
    sym5 = ldf `rep.int`;
    base5 = ldf `rep.int` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L58() else L59();
  L29():
    x6 = force? x5;
    checkMissing(x6);
    c1 = `is.object`(x6);
    if c1 then L30() else L31(x6);
  L51():
    goto L11();
  L54():
    dr2 = tryDispatchBuiltin.1("[", x12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L56() else L55(dr2);
  L55(x14):
    keep4 = ld keep;
    check L57() else D21();
  D21():
    deopt 75 [x14, keep4];
  L4(dx1):
    st x = dx1;
    goto L5();
  L13(r39):
    st ind = r39;
    drop1 = ld drop;
    check L65() else D27();
  L30():
    dr = tryDispatchBuiltin.1("[", x6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(dr);
  L31(x8):
    vars = ld vars;
    check L33() else D9();
  L56():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx3);
  L57():
    keep5 = force? keep4;
    __1 = ldf `[` in base;
    r37 = dyn __1(x12, <missing>, keep5, FALSE);
    goto L12(r37);
  L58():
    factor = ldf factor;
    check L60() else D22();
  L59():
    r38 = dyn base5(<lang factor(names(x), unique(names(x)))>, <lang lengths(x)>);
    goto L13(r38);
  D9():
    deopt 30 [x8, vars];
  D22():
    deopt 85 [];
  D27():
    deopt 96 [drop1];
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L33():
    vars1 = force? vars;
    __ = ldf `[` in base;
    r21 = dyn __(x6, <missing>, vars1, FALSE);
    goto L4(r21);
  L60():
    p7 = prom<V +>{
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      names1 = ldf names in base;
      r42 = dyn names1(x16);
      goto L0(r42);
    L2():
      r40 = dyn base6(<sym x>);
      goto L0(r40);
    };
    p9 = prom<V +>{
      unique = ldf unique;
      p8 = prom<V +>{
        sym7 = ldf names;
        base7 = ldf names in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r45):
        return r45;
      L1():
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        names2 = ldf names in base;
        r46 = dyn names2(x18);
        goto L0(r46);
      L2():
        r44 = dyn base7(<sym x>);
        goto L0(r44);
      };
      r48 = dyn unique(p8);
      return r48;
    };
    r50 = dyn factor(p7, p9);
    check L61() else D23();
  L65():
    drop2 = force? drop1;
    checkMissing(drop2);
    c5 = `as.logical`(drop2);
    if c5 then L66() else L14();
  D23():
    deopt 88 [r50];
  L14():
    goto L15();
  L15():
    data_frame = ldf `data.frame`;
    check L70() else D30();
  L61():
    lengths = ldf lengths;
    check L62() else D24();
  L66():
    droplevels = ldf droplevels;
    check L67() else D28();
  D24():
    deopt 90 [];
  D28():
    deopt 99 [];
  D30():
    deopt 106 [];
  L62():
    p10 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      return x20;
    };
    r52 = dyn lengths(p10);
    check L63() else D25();
  L67():
    p11 = prom<V +>{
      ind = ld ind;
      ind1 = force? ind;
      checkMissing(ind1);
      return ind1;
    };
    r55 = dyn droplevels(p11);
    check L68() else D29();
  L70():
    p14 = prom<V +>{
      unlist = ldf unlist;
      p13 = prom<V +>{
        unname = ldf unname;
        p12 = prom<V +>{
          x21 = ld x;
          x22 = force? x21;
          checkMissing(x22);
          return x22;
        };
        r58 = dyn unname(p12);
        return r58;
      };
      r60 = dyn unlist(p13);
      return r60;
    };
    p15 = prom<V +>{
      ind2 = ld ind;
      ind3 = force? ind2;
      checkMissing(ind3);
      return ind3;
    };
    r63 = dyn data_frame[values, , stringsAsFactors](p14, p15, FALSE);
    check L71() else D31();
  D25():
    deopt 92 [r52];
  D29():
    deopt 101 [r55];
  D31():
    deopt 112 [r63];
  L63():
    rep_int = ldf `rep.int` in base;
    r53 = dyn rep_int(r50, r52);
    check L64() else D26();
  L68():
    st ind = r55;
    goto L15();
  L71():
    popenv;
    return r63;
  D26():
    deopt 94 [r53];
  L64():
    goto L13(r53);
  }
}
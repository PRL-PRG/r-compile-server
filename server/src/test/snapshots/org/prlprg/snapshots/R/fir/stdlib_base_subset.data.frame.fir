fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1720871860;
    st `subset.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1720871860(x, subset, select, drop, `...`) {
  (reg x:*, reg subset:*, reg select:*, reg drop:*, reg ddd:dots) -+> V { var x:*, var subset:*, var select:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, var `...`:dots?, reg chkDots:cls, reg ddd1:dots?, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg nrow:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r7:V, reg rep_len:cls, reg r8:V, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg substitute:cls, reg r12:V, reg eval:cls, reg e:*, reg e1:V, reg p1:p(V +), reg x3:*, reg x4:V, reg p2:p(V +), reg parent_frame:cls, reg r15:V, reg p3:p(V +), reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg r20:*, reg r21:V, reg c1:L, reg r22:V, reg c2:L, reg stop:cls, reg r23:V, reg r25:*, reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg r31:V, reg r32:*, reg r33:V, reg is_na:cls, reg r34:V, reg r35:V, reg r36:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg missing1:cls, reg r39:V, reg c3:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg ncol:cls, reg x5:*, reg x6:V, reg p4:p(V +), reg r43:V, reg rep_len1:cls, reg r44:V, reg r45:V, reg as_list:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg x7:*, reg x8:V, reg r48:I, reg p5:p(V +), reg r50:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r51:V, reg r52:V, reg x9:*, reg x10:V, reg names:cls, reg r53:V, reg l:*, reg names__:cls, reg r54:V, reg eval1:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r55:V, reg r56:V, reg substitute1:cls, reg r57:V, reg p6:p(V +), reg nl:*, reg nl1:V, reg p7:p(V +), reg parent_frame1:cls, reg r60:V, reg p8:p(V +), reg r62:V, reg x11:*, reg x12:V, reg c4:L, reg x14:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r63:*, reg r64:V, reg vars:*, reg vars1:V, reg drop1:*, reg drop2:V, reg __:cls, reg r65:V |
    mkenv;
    st x = x;
    st subset = subset;
    st select = select;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(FALSE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    st `...` = ddd;
    chkDots = ldf chkDots;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    ddd1 = ld `...`;
    r = dyn chkDots[`...`](ddd1);
    check L17() else D1();
  D1():
    deopt 3 [r];
  L17():
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L1(r2):
    c = `as.logical`(r2);
    if c then L20() else L2();
  L18():
    missing = ldf missing in base;
    r3 = dyn missing(<sym subset>);
    goto L1(r3);
  L19():
    r1 = dyn base(<sym subset>);
    goto L1(r1);
  L2():
    sym2 = ldf substitute;
    base2 = ldf substitute in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L4(r9):
    st r = r9;
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L43() else L44();
  L20():
    sym1 = ldf rep_len;
    base1 = ldf rep_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L3(r5):
    goto L4(r5);
  L5(r11):
    st e = r11;
    eval = ldf eval;
    check L29() else D5();
  L10(r38):
    c3 = `as.logical`(r38);
    if c3 then L45() else L11();
  L21():
    nrow = ldf nrow;
    check L23() else D2();
  L22():
    r4 = dyn base1(TRUE, <lang nrow(x)>);
    goto L3(r4);
  L27():
    substitute = ldf substitute in base;
    r12 = dyn substitute(<sym subset>);
    goto L5(r12);
  L28():
    r10 = dyn base2(<sym subset>);
    goto L5(r10);
  L43():
    missing1 = ldf missing in base;
    r39 = dyn missing1(<sym select>);
    goto L10(r39);
  L44():
    r37 = dyn base5(<sym select>);
    goto L10(r37);
  D2():
    deopt 11 [];
  D5():
    deopt 21 [];
  L11():
    as_list = ldf `as.list`;
    check L52() else D16();
  L13(r45):
    st vars = r45;
    x11 = ld x;
    check L62() else D24();
  L23():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r7 = dyn nrow(p);
    check L24() else D3();
  L29():
    p1 = prom<V +>{
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      return e1;
    };
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p3 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r15 = dyn parent_frame();
      return r15;
    };
    r17 = dyn eval(p1, p2, p3);
    check L30() else D6();
  L45():
    sym6 = ldf rep_len;
    base6 = ldf rep_len in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L46() else L47();
  D3():
    deopt 13 [r7];
  D6():
    deopt 25 [r17];
  D16():
    deopt 61 [];
  D24():
    deopt 83 [x11];
  L12(r41):
    goto L13(r41);
  L24():
    rep_len = ldf rep_len in base;
    r8 = dyn rep_len(TRUE, r7);
    check L25() else D4();
  L30():
    st r = r17;
    sym3 = ldf `is.logical`;
    base3 = ldf `is.logical` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  L46():
    ncol = ldf ncol;
    check L48() else D13();
  L47():
    r40 = dyn base6(TRUE, <lang ncol(x)>);
    goto L12(r40);
  L52():
    p5 = prom<V +>{
      sym7 = ldf seq_along;
      base7 = ldf seq_along in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r47):
      return r47;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      r48 = seq_along(x8);
      goto L0(r48);
    L2():
      r46 = dyn base7(<sym x>);
      goto L0(r46);
    };
    r50 = dyn as_list(p5);
    check L53() else D17();
  L62():
    x12 = force? x11;
    checkMissing(x12);
    c4 = `is.object`(x12);
    if c4 then L63() else L64(x12);
  D4():
    deopt 15 [r8];
  D13():
    deopt 55 [];
  D17():
    deopt 63 [r50];
  L6(r19):
    r22 = `!`(r19);
    c2 = `as.logical`(r22);
    if c2 then L34() else L7();
  L15(dx1):
    popenv;
    return dx1;
  L25():
    goto L3(r8);
  L31():
    r20 = ld r;
    check L33() else D7();
  L32():
    r18 = dyn base3(<sym r>);
    goto L6(r18);
  L48():
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r43 = dyn ncol(p4);
    check L49() else D14();
  L53():
    st nl = r50;
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L54() else L55();
  L63():
    dr = tryDispatchBuiltin.1("[", x12);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L65() else L64(dr);
  L64(x14):
    r63 = ld r;
    check L66() else D25();
  D7():
    deopt 28 [r20];
  D14():
    deopt 57 [r43];
  D25():
    deopt 85 [x14, r63];
  L7():
    goto L8();
  L8():
    r25 = ld r;
    check L38() else D10();
  L14(r52):
    l = ld nl;
    names__ = ldf `names<-`;
    check L58() else D20();
  L33():
    r21 = force? r20;
    checkMissing(r21);
    c1 = `is.logical`(r21);
    goto L6(c1);
  L34():
    stop = ldf stop;
    check L35() else D8();
  L49():
    rep_len1 = ldf rep_len in base;
    r44 = dyn rep_len1(TRUE, r43);
    check L50() else D15();
  L54():
    x9 = ld x;
    check L56() else D18();
  L55():
    r51 = dyn base8(<sym x>);
    goto L14(r51);
  L65():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L66():
    r64 = force? r63;
    vars = ld vars;
    check L67() else D26();
  D8():
    deopt 33 [];
  D10():
    deopt 38 [r25];
  D15():
    deopt 59 [r44];
  D18():
    deopt 67 [x9];
  D20():
    deopt 72 [r52, l, r52];
  D26():
    deopt 87 [x14, vars];
  L35():
    r23 = dyn stop("'subset' must be logical");
    check L36() else D9();
  L38():
    r26 = force? r25;
    checkMissing(r26);
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L39() else L40();
  L50():
    goto L12(r44);
  L56():
    x10 = force? x9;
    checkMissing(x10);
    names = ldf names in base;
    r53 = dyn names(x10);
    check L57() else D19();
  L58():
    r54 = dyn names__(l, NULL, r52);
    check L59() else D21();
  L67():
    vars1 = force? vars;
    drop1 = ld drop;
    check L68() else D27();
  D9():
    deopt 35 [r23];
  D19():
    deopt 70 [r53];
  D21():
    deopt 74 [r52, r54];
  D27():
    deopt 89 [x14, drop1];
  L9(r30, r31):
    r35 = `!`(r31);
    r36 = `&&`(r30, r35);
    goto L4(r36);
  L36():
    goto L8();
  L39():
    r32 = ld r;
    check L41() else D11();
  L40():
    r29 = dyn base4(<sym r>);
    goto L9(r26, r29);
  L57():
    goto L14(r53);
  L59():
    st nl = r54;
    eval1 = ldf eval;
    check L60() else D22();
  L68():
    drop2 = force? drop1;
    __ = ldf `[` in base;
    r65 = dyn __(x12, r64, vars1, drop2);
    goto L15(r65);
  D11():
    deopt 41 [r26, r32];
  D22():
    deopt 77 [];
  L41():
    r33 = force? r32;
    checkMissing(r33);
    is_na = ldf `is.na` in base;
    r34 = dyn is_na(r33);
    check L42() else D12();
  L60():
    p6 = prom<V +>{
      sym9 = ldf substitute;
      base9 = ldf substitute in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r56):
      return r56;
    L1():
      substitute1 = ldf substitute in base;
      r57 = dyn substitute1(<sym select>);
      goto L0(r57);
    L2():
      r55 = dyn base9(<sym select>);
      goto L0(r55);
    };
    p7 = prom<V +>{
      nl = ld nl;
      nl1 = force? nl;
      checkMissing(nl1);
      return nl1;
    };
    p8 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r60 = dyn parent_frame1();
      return r60;
    };
    r62 = dyn eval1(p6, p7, p8);
    check L61() else D23();
  D12():
    deopt 44 [r26, r34];
  D23():
    deopt 81 [r62];
  L42():
    goto L9(r26, r34);
  L61():
    goto L13(r62);
  }
}
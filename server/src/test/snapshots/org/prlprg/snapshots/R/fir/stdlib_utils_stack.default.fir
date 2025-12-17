fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3170081401;
    st `stack.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3170081401(x, drop, `...`) {
  (reg x:*, reg drop:*, reg ddd:dots) -+> V { var x:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, var `...`:dots?, reg as_list:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg unlist:cls, reg lapply:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg is_vector:*, reg is_vector1:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg keep:*, reg keep1:V, reg sum:cls, reg r9:V, reg r10:V, reg c:L, reg stop:cls, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg keep2:*, reg keep3:V, reg all:cls, reg r15:V, reg r16:V, reg c1:L, reg warning:cls, reg r17:V, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg keep4:*, reg keep5:V, reg __:cls, reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg factor:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg x9:*, reg x10:V, reg names:cls, reg r24:V, reg p4:p(V +), reg unique:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg x11:*, reg x12:V, reg names1:cls, reg r28:V, reg p5:p(V +), reg r30:V, reg p6:p(V +), reg r32:V, reg lengths:cls, reg x13:*, reg x14:V, reg p7:p(V +), reg r34:V, reg rep_int:cls, reg r35:V, reg drop1:*, reg drop2:V, reg c3:L, reg droplevels:cls, reg ind:*, reg ind1:V, reg p8:p(V +), reg r37:V, reg data_frame:cls, reg unlist1:cls, reg unname:cls, reg x15:*, reg x16:V, reg p9:p(V +), reg r40:V, reg p10:p(V +), reg r42:V, reg p11:p(V +), reg ind2:*, reg ind3:V, reg p12:p(V +), reg r45:V |
    mkenv;
    st x = x;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(FALSE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    st `...` = ddd;
    as_list = ldf `as.list`;
    check L11() else D0();
  D0():
    deopt 1 [];
  L11():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn as_list(p);
    check L12() else D1();
  D1():
    deopt 3 [r1];
  L12():
    st x = r1;
    unlist = ldf unlist;
    check L13() else D2();
  D2():
    deopt 6 [];
  L13():
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      p2 = prom<V +>{
        is_vector = ld `is.vector`;
        is_vector1 = force? is_vector;
        checkMissing(is_vector1);
        return is_vector1;
      };
      r4 = dyn lapply(p1, p2);
      return r4;
    };
    r6 = dyn unlist(p3);
    check L14() else D3();
  D3():
    deopt 8 [r6];
  L14():
    st keep = r6;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L1(r8):
    r10 = `!`(r8);
    c = `as.logical`(r10);
    if c then L19() else L2();
  L15():
    keep = ld keep;
    check L17() else D4();
  L16():
    r7 = dyn base(<sym keep>);
    goto L1(r7);
  D4():
    deopt 12 [keep];
  L2():
    goto L3();
  L3():
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L17():
    keep1 = force? keep;
    checkMissing(keep1);
    sum = ldf sum in base;
    r9 = dyn sum(keep1);
    check L18() else D5();
  L19():
    stop = ldf stop;
    check L20() else D6();
  D5():
    deopt 15 [r9];
  D6():
    deopt 18 [];
  L4(r14):
    r16 = `!`(r14);
    c1 = `as.logical`(r16);
    if c1 then L27() else L5();
  L18():
    goto L1(r9);
  L20():
    r11 = dyn stop("at least one vector element is required");
    check L21() else D7();
  L23():
    keep2 = ld keep;
    check L25() else D8();
  L24():
    r13 = dyn base1(<sym keep>);
    goto L4(r13);
  D7():
    deopt 20 [r11];
  D8():
    deopt 25 [keep2];
  L5():
    goto L6();
  L6():
    x5 = ld x;
    check L31() else D12();
  L21():
    goto L3();
  L25():
    keep3 = force? keep2;
    checkMissing(keep3);
    all = ldf all in base;
    r15 = dyn all(keep3);
    check L26() else D9();
  L27():
    warning = ldf warning;
    check L28() else D10();
  D9():
    deopt 28 [r15];
  D10():
    deopt 31 [];
  D12():
    deopt 36 [x5];
  L26():
    goto L4(r15);
  L28():
    r17 = dyn warning("non-vector elements will be ignored");
    check L29() else D11();
  L31():
    x6 = force? x5;
    checkMissing(x6);
    c2 = `is.object`(x6);
    if c2 then L32() else L33(x6);
  D11():
    deopt 33 [r17];
  L7(dx1):
    st x = dx1;
    sym2 = ldf `rep.int`;
    base2 = ldf `rep.int` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L29():
    goto L6();
  L32():
    dr = tryDispatchBuiltin.1("[", x6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L34() else L33(dr);
  L33(x8):
    keep4 = ld keep;
    check L35() else D13();
  D13():
    deopt 38 [x8, keep4];
  L8(r21):
    st ind = r21;
    drop1 = ld drop;
    check L43() else D19();
  L34():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L35():
    keep5 = force? keep4;
    __ = ldf `[` in base;
    r19 = dyn __(x8, keep5);
    goto L7(r19);
  L36():
    factor = ldf factor;
    check L38() else D14();
  L37():
    r20 = dyn base2(<lang factor(names(x), unique(names(x)))>, <lang lengths(x)>);
    goto L8(r20);
  D14():
    deopt 45 [];
  D19():
    deopt 56 [drop1];
  L38():
    p4 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      names = ldf names in base;
      r24 = dyn names(x10);
      goto L0(r24);
    L2():
      r22 = dyn base3(<sym x>);
      goto L0(r22);
    };
    p6 = prom<V +>{
      unique = ldf unique;
      p5 = prom<V +>{
        sym4 = ldf names;
        base4 = ldf names in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r27):
        return r27;
      L1():
        x11 = ld x;
        x12 = force? x11;
        checkMissing(x12);
        names1 = ldf names in base;
        r28 = dyn names1(x12);
        goto L0(r28);
      L2():
        r26 = dyn base4(<sym x>);
        goto L0(r26);
      };
      r30 = dyn unique(p5);
      return r30;
    };
    r32 = dyn factor(p4, p6);
    check L39() else D15();
  L43():
    drop2 = force? drop1;
    checkMissing(drop2);
    c3 = `as.logical`(drop2);
    if c3 then L44() else L9();
  D15():
    deopt 48 [r32];
  L9():
    goto L10();
  L10():
    data_frame = ldf `data.frame`;
    check L48() else D22();
  L39():
    lengths = ldf lengths;
    check L40() else D16();
  L44():
    droplevels = ldf droplevels;
    check L45() else D20();
  D16():
    deopt 50 [];
  D20():
    deopt 59 [];
  D22():
    deopt 66 [];
  L40():
    p7 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r34 = dyn lengths(p7);
    check L41() else D17();
  L45():
    p8 = prom<V +>{
      ind = ld ind;
      ind1 = force? ind;
      checkMissing(ind1);
      return ind1;
    };
    r37 = dyn droplevels(p8);
    check L46() else D21();
  L48():
    p11 = prom<V +>{
      unlist1 = ldf unlist;
      p10 = prom<V +>{
        unname = ldf unname;
        p9 = prom<V +>{
          x15 = ld x;
          x16 = force? x15;
          checkMissing(x16);
          return x16;
        };
        r40 = dyn unname(p9);
        return r40;
      };
      r42 = dyn unlist1(p10);
      return r42;
    };
    p12 = prom<V +>{
      ind2 = ld ind;
      ind3 = force? ind2;
      checkMissing(ind3);
      return ind3;
    };
    r45 = dyn data_frame[values, , stringsAsFactors](p11, p12, FALSE);
    check L49() else D23();
  D17():
    deopt 52 [r34];
  D21():
    deopt 61 [r37];
  D23():
    deopt 72 [r45];
  L41():
    rep_int = ldf `rep.int` in base;
    r35 = dyn rep_int(r32, r34);
    check L42() else D18();
  L46():
    st ind = r37;
    goto L10();
  L49():
    popenv;
    return r45;
  D18():
    deopt 54 [r35];
  L42():
    goto L8(r35);
  }
}
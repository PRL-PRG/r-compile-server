fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1720871860;
    st `subset.matrix` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1720871860(x, subset, select, drop, `...`) {
  (reg x:*, reg subset:*, reg select:*, reg drop:*, reg ddd:dots) -+> V { var x:*, var subset:*, var select:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg as_list:cls, reg ncol:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r5:V, reg r6:V, reg p1:p(V +), reg r8:V, reg colnames:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r10:V, reg l:*, reg names__:cls, reg r11:V, reg eval:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg substitute:cls, reg r14:V, reg p3:p(V +), reg nl:*, reg nl1:V, reg p4:p(V +), reg parent_frame:cls, reg r17:V, reg p5:p(V +), reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg missing1:cls, reg r22:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg subset1:*, reg subset2:V, reg c2:L, reg r26:V, reg c3:L, reg stop:cls, reg r27:V, reg x5:*, reg x6:V, reg c4:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg subset3:*, reg subset4:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg x11:V, reg subset7:V, reg r29:V, reg subset8:*, reg subset9:V, reg is_na:cls, reg r30:V, reg r31:V, reg r32:V, reg vars:*, reg vars1:V, reg drop1:*, reg drop2:V, reg __:cls, reg r33:V |
    mkenv;
    st x = x;
    st subset = subset;
    st select = select;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(FALSE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L1(r1):
    c = `as.logical`(r1);
    if c then L13() else L2();
  L11():
    missing = ldf missing in base;
    r2 = dyn missing(<sym select>);
    goto L1(r2);
  L12():
    r = dyn base(<sym select>);
    goto L1(r);
  L2():
    as_list = ldf `as.list`;
    check L15() else D0();
  L3():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L13():
    st vars = TRUE;
    goto L3();
  D0():
    deopt 7 [];
  L4(r21):
    c1 = `as.logical`(r21);
    if c1 then L25() else L5();
  L15():
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
    check L16() else D1();
  L23():
    missing1 = ldf missing in base;
    r22 = dyn missing1(<sym subset>);
    goto L4(r22);
  L24():
    r20 = dyn base2(<sym subset>);
    goto L4(r20);
  D1():
    deopt 9 [r8];
  L5():
    sym3 = ldf `is.logical`;
    base3 = ldf `is.logical` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L6():
    x5 = ld x;
    check L34() else D11();
  L16():
    st nl = r8;
    colnames = ldf colnames;
    check L17() else D2();
  L25():
    st subset = TRUE;
    goto L6();
  D2():
    deopt 12 [];
  D11():
    deopt 44 [x5];
  L7(r25):
    r26 = `!`(r25);
    c3 = `as.logical`(r26);
    if c3 then L30() else L8();
  L17():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r10 = dyn colnames(p2);
    check L18() else D3();
  L27():
    subset1 = ld subset;
    check L29() else D8();
  L28():
    r24 = dyn base3(<sym subset>);
    goto L7(r24);
  L34():
    x6 = force? x5;
    checkMissing(x6);
    c4 = `is.object`(x6);
    if c4 then L35() else L36(x6);
  D3():
    deopt 14 [r10];
  D8():
    deopt 34 [subset1];
  L8():
    goto L6();
  L9(dx1):
    popenv;
    return dx1;
  L18():
    l = ld nl;
    names__ = ldf `names<-`;
    check L19() else D4();
  L29():
    subset2 = force? subset1;
    checkMissing(subset2);
    c2 = `is.logical`(subset2);
    goto L7(c2);
  L30():
    stop = ldf stop;
    check L31() else D9();
  L35():
    dr = tryDispatchBuiltin.1("[", x6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(dr);
  L36(x8):
    subset3 = ld subset;
    check L38() else D12();
  D4():
    deopt 16 [r10, l, r10];
  D9():
    deopt 39 [];
  D12():
    deopt 46 [x8, subset3];
  L19():
    r11 = dyn names__(l, NULL, r10);
    check L20() else D5();
  L31():
    r27 = dyn stop("'subset' must be logical");
    check L32() else D10();
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L38():
    subset4 = force? subset3;
    checkMissing(subset4);
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L39() else L40();
  D5():
    deopt 18 [r10, r11];
  D10():
    deopt 41 [r27];
  L10(x11, subset7, r29):
    r31 = `!`(r29);
    r32 = `&&`(subset7, r31);
    vars = ld vars;
    check L43() else D15();
  L20():
    st nl = r11;
    eval = ldf eval;
    check L21() else D6();
  L32():
    goto L6();
  L39():
    subset8 = ld subset;
    check L41() else D13();
  L40():
    r28 = dyn base4(<sym subset>);
    goto L10(x8, subset4, r28);
  D6():
    deopt 21 [];
  D13():
    deopt 49 [x8, subset4, subset8];
  D15():
    deopt 55 [x11, vars];
  L21():
    p3 = prom<V +>{
      sym1 = ldf substitute;
      base1 = ldf substitute in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      substitute = ldf substitute in base;
      r14 = dyn substitute(<sym select>);
      goto L0(r14);
    L2():
      r12 = dyn base1(<sym select>);
      goto L0(r12);
    };
    p4 = prom<V +>{
      nl = ld nl;
      nl1 = force? nl;
      checkMissing(nl1);
      return nl1;
    };
    p5 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r17 = dyn parent_frame();
      return r17;
    };
    r19 = dyn eval(p3, p4, p5);
    check L22() else D7();
  L41():
    subset9 = force? subset8;
    checkMissing(subset9);
    is_na = ldf `is.na` in base;
    r30 = dyn is_na(subset9);
    check L42() else D14();
  L43():
    vars1 = force? vars;
    drop1 = ld drop;
    check L44() else D16();
  D7():
    deopt 25 [r19];
  D14():
    deopt 52 [x8, subset4, r30];
  D16():
    deopt 57 [x11, drop1];
  L22():
    st vars = r19;
    goto L3();
  L42():
    goto L10(x8, subset4, r30);
  L44():
    drop2 = force? drop1;
    __ = ldf `[` in base;
    r33 = dyn __(x6, r32, vars1, drop2);
    goto L9(r33);
  }
}
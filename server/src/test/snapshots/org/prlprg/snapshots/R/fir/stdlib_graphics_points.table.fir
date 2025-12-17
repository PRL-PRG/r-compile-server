fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2311038814;
    st `points.table` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2311038814(x, y, type, lwd, `...`) {
  (reg x:*, reg y:*, reg type:*, reg lwd:*, reg ddd:dots) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var lwd:*, reg lwd_isMissing:L, reg lwd_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg y1:*, reg y2:V, reg c:V, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg c6:L, reg r3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r4:V, reg c9:L, reg r5:V, reg x1:*, reg x2:V, reg dim:cls, reg r6:V, reg length:cls, reg r7:V, reg r8:V, reg c10:L, reg c11:V, reg c13:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg x3:*, reg x4:V, reg dimnames:cls, reg r11:V, reg c14:L, reg r13:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r14:V, reg suppressWarnings:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r17:V, reg r18:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r19:V, reg r20:V, reg nx:*, reg nx1:V, reg as_numeric:cls, reg r21:V, reg is_na:cls, reg r22:V, reg any:cls, reg r23:V, reg r24:V, reg p:p(V +), reg r26:V, reg is_num:*, reg is_num1:V, reg c15:L, reg xx:*, reg xx1:V, reg xx2:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r27:V, reg x5:*, reg x6:V, reg seq_int:cls, reg r28:V, reg points:cls, reg x7:*, reg x8:V, reg p1:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r30:V, reg r31:V, reg x9:*, reg x10:V, reg unclass:cls, reg r32:V, reg p2:p(V +), reg type1:*, reg type2:V, reg p3:p(V +), reg lwd1:*, reg lwd2:V, reg p4:p(V +), reg ddd1:dots?, reg r36:V, reg stop:cls, reg r37:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L1("h") else L1(type);
  L1(type_orDefault):
    st type = type_orDefault;
    lwd_isMissing = missing.0(lwd);
    if lwd_isMissing then L2(2.0) else L2(lwd);
  L2(lwd_orDefault):
    st lwd = lwd_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L3(r1):
    c1 = `as.logical`(r1);
    if c1 then L15() else L4(c1);
  L12():
    y1 = ld y;
    check L14() else D0();
  L13():
    r = dyn base(<sym y>);
    goto L3(r);
  D0():
    deopt 1 [y1];
  L4(c3):
    c13 = `as.logical`(c3);
    if c13 then L24() else L7();
  L14():
    y2 = force? y1;
    checkMissing(y2);
    c = `==`(y2, NULL);
    goto L3(c);
  L15():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L5(c6, r3):
    r8 = `==`(r3, 1);
    c10 = `as.logical`(r8);
    c11 = `&&`(c6, c10);
    goto L4(c11);
  L7():
    stop = ldf stop;
    check L45() else D14();
  L16():
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L17():
    r2 = dyn base1(<lang dim(x)>);
    goto L5(c1, r2);
  L24():
    sym3 = ldf dimnames;
    base3 = ldf dimnames in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  D14():
    deopt 54 [];
  L6(c9, r5):
    length = ldf length in base;
    r7 = dyn length(r5);
    check L22() else D3();
  L8(r10):
    c14 = `is.object`(r10);
    if c14 then L29() else L30(r10);
  L18():
    x1 = ld x;
    check L20() else D1();
  L19():
    r4 = dyn base2(<sym x>);
    goto L6(c1, r4);
  L25():
    x3 = ld x;
    check L27() else D4();
  L26():
    r9 = dyn base3(<sym x>);
    goto L8(r9);
  L45():
    r37 = dyn stop("only for 1-D table");
    check L46() else D15();
  D1():
    deopt 8 [c1, x1];
  D3():
    deopt 13 [c9, r7];
  D4():
    deopt 19 [x3];
  D15():
    deopt 56 [r37];
  L9(dx1):
    st nx = dx1;
    suppressWarnings = ldf suppressWarnings;
    check L32() else D6();
  L20():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r6 = dyn dim(x2);
    check L21() else D2();
  L22():
    goto L5(c9, r7);
  L27():
    x4 = force? x3;
    checkMissing(x4);
    dimnames = ldf dimnames in base;
    r11 = dyn dimnames(x4);
    check L28() else D5();
  L29():
    dr = tryDispatchBuiltin.1("[[", r10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(r13):
    __ = ldf `[[` in base;
    r14 = dyn __(r13, 1);
    goto L9(r14);
  L46():
    popenv;
    return r37;
  D2():
    deopt 11 [c1, r6];
  D5():
    deopt 22 [r11];
  D6():
    deopt 28 [];
  L21():
    goto L6(c1, r6);
  L28():
    goto L8(r11);
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L32():
    p = prom<V +>{
      sym4 = ldf any;
      base4 = ldf any in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L3() else L4();
    L0(r16):
      r24 = `!`(r16);
      return r24;
    L3():
      sym5 = ldf `is.na`;
      base5 = ldf `is.na` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L5() else L6();
    L4():
      r15 = dyn base4(<lang is.na(`<-`(xx, as.numeric(nx)))>);
      goto L0(r15);
    L1(r18):
      any = ldf any in base;
      r23 = dyn any(r18);
      goto L0(r23);
    L5():
      sym6 = ldf `as.numeric`;
      base6 = ldf `as.numeric` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L7() else L8();
    L6():
      r17 = dyn base5(<lang `<-`(xx, as.numeric(nx))>);
      goto L1(r17);
    L2(r20):
      st xx = r20;
      is_na = ldf `is.na` in base;
      r22 = dyn is_na(r20);
      goto L1(r22);
    L7():
      nx = ld nx;
      nx1 = force? nx;
      checkMissing(nx1);
      as_numeric = ldf `as.numeric` in base;
      r21 = dyn as_numeric(nx1);
      goto L2(r21);
    L8():
      r19 = dyn base6(<sym nx>);
      goto L2(r19);
    };
    r26 = dyn suppressWarnings(p);
    check L33() else D7();
  D7():
    deopt 30 [r26];
  L33():
    st `is.num` = r26;
    is_num = ld `is.num`;
    check L34() else D8();
  D8():
    deopt 32 [is_num];
  L34():
    is_num1 = force? is_num;
    checkMissing(is_num1);
    c15 = `as.logical`(is_num1);
    if c15 then L35() else L10();
  L10():
    sym7 = ldf `seq.int`;
    base7 = ldf `seq.int` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L38() else L39();
  L11(xx2):
    st x0 = xx2;
    points = ldf points;
    check L42() else D12();
  L35():
    xx = ld xx;
    check L36() else D9();
  D9():
    deopt 34 [xx];
  D12():
    deopt 44 [];
  L36():
    xx1 = force? xx;
    checkMissing(xx1);
    goto L11(xx1);
  L38():
    x5 = ld x;
    check L40() else D10();
  L39():
    r27 = dyn base7(<sym x>);
    goto L11(r27);
  L42():
    p1 = prom<V +>{
      x7 = ld x0;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p2 = prom<V +>{
      sym8 = ldf unclass;
      base8 = ldf unclass in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      unclass = ldf unclass in base;
      r32 = dyn unclass(x10);
      goto L0(r32);
    L2():
      r30 = dyn base8(<sym x>);
      goto L0(r30);
    };
    p3 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    p4 = prom<V +>{
      lwd1 = ld lwd;
      lwd2 = force? lwd1;
      checkMissing(lwd2);
      return lwd2;
    };
    ddd1 = ld `...`;
    r36 = dyn points[, , type, lwd, `...`](p1, p2, p3, p4, ddd1);
    check L43() else D13();
  D10():
    deopt 38 [x5];
  D13():
    deopt 52 [r36];
  L40():
    x6 = force? x5;
    checkMissing(x6);
    seq_int = ldf `seq.int` in base;
    r28 = dyn seq_int(x6);
    check L41() else D11();
  L43():
    popenv;
    return r36;
  D11():
    deopt 41 [r28];
  L41():
    goto L11(r28);
  }
}
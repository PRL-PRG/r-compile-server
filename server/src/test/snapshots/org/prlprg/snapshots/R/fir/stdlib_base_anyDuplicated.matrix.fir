fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1226315320;
    st `anyDuplicated.matrix` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1226315320(x, incomparables, MARGIN, fromLast, `...`) {
  (reg x:*, reg incomparables:*, reg MARGIN:*, reg fromLast:*, reg ddd:dots) -+> V { var x:*, var incomparables:*, reg incomparables_isMissing:L, reg incomparables_orDefault:*, var MARGIN:*, reg MARGIN_isMissing:L, reg MARGIN_orDefault:*, var fromLast:*, reg fromLast_isMissing:L, reg fromLast_orDefault:*, var `...`:dots?, reg isFALSE:cls, reg incomparables1:*, reg incomparables2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg _NotYetUsed:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg x1:*, reg x2:V, reg dim:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg dx:*, reg dx1:V, reg length:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg MARGIN1:*, reg MARGIN2:V, reg ndim:*, reg ndim1:V, reg r13:V, reg any:cls, reg r14:V, reg c1:L, reg stop:cls, reg gettextf:cls, reg paste:cls, reg MARGIN3:*, reg MARGIN4:V, reg p1:p(V +), reg r16:V, reg p2:p(V +), reg paste1:cls, reg dx2:*, reg dx3:V, reg p3:p(V +), reg r19:V, reg p4:p(V +), reg r21:V, reg p5:p(V +), reg r23:V, reg ndim2:*, reg ndim3:V, reg r25:V, reg c2:L, reg c4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg c7:L, reg r27:V, reg dx4:*, reg dx5:V, reg c8:L, reg c10:L, reg dx7:V, reg dr:V, reg dc:L, reg dx8:V, reg c12:L, reg dx9:V, reg MARGIN5:*, reg MARGIN6:V, reg r28:V, reg __:cls, reg r29:V, reg prod:cls, reg r30:V, reg r31:V, reg c13:L, reg c14:V, reg c16:L, reg asplit:cls, reg x3:*, reg x4:V, reg p6:p(V +), reg MARGIN7:*, reg MARGIN8:V, reg p7:p(V +), reg r34:V, reg r35:V, reg x5:*, reg x6:V, reg anyDuplicated_default:cls, reg temp:*, reg temp1:V, reg p8:p(V +), reg fromLast1:*, reg fromLast2:V, reg p9:p(V +), reg r38:V |
    mkenv;
    st x = x;
    incomparables_isMissing = missing.0(incomparables);
    if incomparables_isMissing then L0(FALSE) else L0(incomparables);
  L0(incomparables_orDefault):
    st incomparables = incomparables_orDefault;
    MARGIN_isMissing = missing.0(MARGIN);
    if MARGIN_isMissing then L1(1) else L1(MARGIN);
  L1(MARGIN_orDefault):
    st MARGIN = MARGIN_orDefault;
    fromLast_isMissing = missing.0(fromLast);
    if fromLast_isMissing then L2(FALSE) else L2(fromLast);
  L2(fromLast_orDefault):
    st fromLast = fromLast_orDefault;
    st `...` = ddd;
    isFALSE = ldf isFALSE;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    p = prom<V +>{
      incomparables1 = ld incomparables;
      incomparables2 = force? incomparables1;
      checkMissing(incomparables2);
      return incomparables2;
    };
    r1 = dyn isFALSE(p);
    check L16() else D1();
  D1():
    deopt 3 [r1];
  L16():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L17() else L3();
  L3():
    goto L4();
  L4():
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L17():
    _NotYetUsed = ldf `.NotYetUsed`;
    check L18() else D2();
  D2():
    deopt 6 [];
  L5(r6):
    st dx = r6;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L18():
    r3 = dyn _NotYetUsed("incomparables != FALSE");
    check L19() else D3();
  L21():
    x1 = ld x;
    check L23() else D4();
  L22():
    r5 = dyn base(<sym x>);
    goto L5(r5);
  D3():
    deopt 8 [r3];
  D4():
    deopt 13 [x1];
  L6(r9):
    st ndim = r9;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L19():
    goto L4();
  L23():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r7 = dyn dim(x2);
    check L24() else D5();
  L25():
    dx = ld dx;
    check L27() else D6();
  L26():
    r8 = dyn base1(<sym dx>);
    goto L6(r8);
  D5():
    deopt 16 [r7];
  D6():
    deopt 20 [dx];
  L7(r12):
    c1 = `as.logical`(r12);
    if c1 then L34() else L8();
  L24():
    goto L5(r7);
  L27():
    dx1 = force? dx;
    checkMissing(dx1);
    length = ldf length in base;
    r10 = dyn length(dx1);
    check L28() else D7();
  L29():
    MARGIN1 = ld MARGIN;
    check L31() else D8();
  L30():
    r11 = dyn base2(<lang `>`(MARGIN, ndim)>);
    goto L7(r11);
  D7():
    deopt 23 [r10];
  D8():
    deopt 27 [MARGIN1];
  L8():
    goto L9();
  L9():
    ndim2 = ld ndim;
    check L38() else D13();
  L28():
    goto L6(r10);
  L31():
    MARGIN2 = force? MARGIN1;
    checkMissing(MARGIN2);
    ndim = ld ndim;
    check L32() else D9();
  L34():
    stop = ldf stop;
    check L35() else D11();
  D9():
    deopt 28 [MARGIN2, ndim];
  D11():
    deopt 34 [];
  D13():
    deopt 41 [ndim2];
  L32():
    ndim1 = force? ndim;
    checkMissing(ndim1);
    r13 = `>`(MARGIN2, ndim1);
    any = ldf any in base;
    r14 = dyn any(r13);
    check L33() else D10();
  L35():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        paste = ldf paste;
        p1 = prom<V +>{
          MARGIN3 = ld MARGIN;
          MARGIN4 = force? MARGIN3;
          checkMissing(MARGIN4);
          return MARGIN4;
        };
        r16 = dyn paste[, collapse](p1, ",");
        return r16;
      };
      p4 = prom<V +>{
        paste1 = ldf paste;
        p3 = prom<V +>{
          dx2 = ld dx;
          dx3 = force? dx2;
          checkMissing(dx3);
          return dx3;
        };
        r19 = dyn paste1[, collapse](p3, ",");
        return r19;
      };
      r21 = dyn gettextf("MARGIN = %s is invalid for dim = %s", p2, p4);
      return r21;
    };
    r23 = dyn stop[, domain](p5, NA_LGL);
    check L36() else D12();
  L38():
    ndim3 = force? ndim2;
    checkMissing(ndim3);
    r25 = `>`(ndim3, 1);
    c2 = `as.logical`(r25);
    if c2 then L39() else L10(c2);
  D10():
    deopt 32 [r14];
  D12():
    deopt 38 [r23];
  L10(c4):
    c16 = `as.logical`(c4);
    if c16 then L49() else L13();
  L33():
    goto L7(r14);
  L36():
    goto L9();
  L39():
    sym3 = ldf prod;
    base3 = ldf prod in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L11(c7, r27):
    r31 = `>`(r27, 1);
    c13 = `as.logical`(r31);
    c14 = `&&`(c7, c13);
    goto L10(c14);
  L13():
    x5 = ld x;
    check L53() else D19();
  L14(r35):
    st temp = r35;
    anyDuplicated_default = ldf `anyDuplicated.default`;
    check L54() else D20();
  L40():
    dx4 = ld dx;
    check L42() else D14();
  L41():
    r26 = dyn base3(<lang `[`(dx, `-`(MARGIN))>);
    goto L11(c2, r26);
  L49():
    asplit = ldf asplit;
    check L50() else D17();
  D14():
    deopt 47 [c2, dx4];
  D17():
    deopt 59 [];
  D19():
    deopt 63 [x5];
  D20():
    deopt 67 [];
  L42():
    dx5 = force? dx4;
    checkMissing(dx5);
    c8 = `is.object`(dx5);
    if c8 then L43() else L44(c2, dx5);
  L50():
    p6 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p7 = prom<V +>{
      MARGIN7 = ld MARGIN;
      MARGIN8 = force? MARGIN7;
      checkMissing(MARGIN8);
      return MARGIN8;
    };
    r34 = dyn asplit(p6, p7);
    check L51() else D18();
  L53():
    x6 = force? x5;
    checkMissing(x6);
    goto L14(x6);
  L54():
    p8 = prom<V +>{
      temp = ld temp;
      temp1 = force? temp;
      checkMissing(temp1);
      return temp1;
    };
    p9 = prom<V +>{
      fromLast1 = ld fromLast;
      fromLast2 = force? fromLast1;
      checkMissing(fromLast2);
      return fromLast2;
    };
    r38 = dyn anyDuplicated_default[, fromLast](p8, p9);
    check L55() else D21();
  D18():
    deopt 62 [r34];
  D21():
    deopt 71 [r38];
  L12(c12, dx9):
    prod = ldf prod in base;
    r30 = dyn prod(dx9);
    check L47() else D16();
  L43():
    dr = tryDispatchBuiltin.1("[", dx5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L45() else L44(c2, dr);
  L44(c10, dx7):
    MARGIN5 = ld MARGIN;
    check L46() else D15();
  L51():
    goto L14(r34);
  L55():
    popenv;
    return r38;
  D15():
    deopt 49 [c10, dx7, MARGIN5];
  D16():
    deopt 54 [c12, r30];
  L45():
    dx8 = getTryDispatchBuiltinValue(dr);
    goto L12(c2, dx8);
  L46():
    MARGIN6 = force? MARGIN5;
    checkMissing(MARGIN6);
    r28 = `-`(<missing>, MARGIN6);
    __ = ldf `[` in base;
    r29 = dyn __(dx7, r28);
    goto L12(c10, r29);
  L47():
    goto L11(c12, r30);
  }
}
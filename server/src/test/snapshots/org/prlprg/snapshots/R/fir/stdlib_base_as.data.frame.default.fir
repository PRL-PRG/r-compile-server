fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `as.data.frame.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_atomic:cls, reg r2:V, reg c:L, reg as_data_frame_vector:cls, reg x3:*, reg x4:V, reg p:p(V +), reg ddd1:dots?, reg r4:V, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg deparse:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x5:*, reg x6:V, reg class:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg c1:L, reg r11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r12:V, reg p2:p(V +), reg r14:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg r18:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf `is.atomic`;
    base = ldf `is.atomic` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    stop = ldf stop;
    check L10() else D4();
  L4():
    x2 = force? x1;
    checkMissing(x2);
    is_atomic = ldf `is.atomic` in base;
    r2 = dyn is_atomic(x2);
    check L5() else D1();
  L6():
    as_data_frame_vector = ldf `as.data.frame.vector`;
    check L7() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D4():
    deopt 12 [];
  L5():
    goto L0(r2);
  L7():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    ddd1 = ld `...`;
    r4 = dyn as_data_frame_vector[, `...`](p, ddd1);
    check L8() else D3();
  L10():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        sQuote = ldf sQuote;
        p2 = prom<V +>{
          deparse = ldf deparse;
          p1 = prom<V +>{
            sym1 = ldf class;
            base1 = ldf class in base;
            guard1 = `==`.4(sym1, base1);
            if guard1 then L1() else L2();
          L0(r6):
            return r6;
          L1():
            x5 = ld x;
            x6 = force? x5;
            checkMissing(x6);
            class = ldf class in base;
            r7 = dyn class(x6);
            goto L0(r7);
          L2():
            r5 = dyn base1(<sym x>);
            goto L0(r5);
          };
          r9 = dyn deparse(p1);
          c1 = `is.object`(r9);
          if c1 then L1() else L2(r9);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("[", r9);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(r11):
          __ = ldf `[` in base;
          r12 = dyn __(r11, 1);
          goto L0(r12);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r14 = dyn sQuote(p2);
        return r14;
      };
      r16 = dyn gettextf("cannot coerce class %s to a data.frame", p3);
      return r16;
    };
    r18 = dyn stop[, domain](p4, NA_LGL);
    check L11() else D5();
  D3():
    deopt 10 [r4];
  D5():
    deopt 16 [r18];
  L8():
    popenv;
    return r4;
  L11():
    popenv;
    return r18;
  }
}
fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1536832960;
    st `.oldReplaceFun` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1536832960(from, to, value) {
  (reg from:*, reg to:*, reg value:*) -+> V { var from:*, var to:*, var value:*, reg stop:cls, reg gettextf:cls, reg to1:*, reg to2:V, reg p:p(V +), reg dQuote:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg from1:*, reg from2:V, reg class:cls, reg r3:V, reg c:L, reg r5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg r12:V |
    mkenv;
    st from = from;
    st to = to;
    st value = value;
    stop = ldf stop;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        to1 = ld to;
        to2 = force? to1;
        checkMissing(to2);
        return to2;
      };
      p2 = prom<V +>{
        dQuote = ldf dQuote;
        p1 = prom<V +>{
          sym = ldf class;
          base = ldf class in base;
          guard = `==`.4(sym, base);
          if guard then L2() else L3();
        L0(r2):
          c = `is.object`(r2);
          if c then L4() else L5(r2);
        L2():
          from1 = ld from;
          from2 = force? from1;
          checkMissing(from2);
          class = ldf class in base;
          r3 = dyn class(from2);
          goto L0(r3);
        L3():
          r1 = dyn base(<sym from>);
          goto L0(r1);
        L1(dx1):
          return dx1;
        L4():
          dr = tryDispatchBuiltin.1("[", r2);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L6() else L5(dr);
        L5(r5):
          __ = ldf `[` in base;
          r6 = dyn __(r5, 1);
          goto L1(r6);
        L6():
          dx = getTryDispatchBuiltinValue(dr);
          goto L1(dx);
        };
        r8 = dyn dQuote(p1);
        return r8;
      };
      r10 = dyn gettextf("explicit replacement not defined for as(x, \"%s\") <- value for old-style class %s", p, p2);
      return r10;
    };
    r12 = dyn stop[, domain](p3, NA_LGL);
    check L1() else D1();
  D1():
    deopt 5 [r12];
  L1():
    popenv;
    return r12;
  }
}
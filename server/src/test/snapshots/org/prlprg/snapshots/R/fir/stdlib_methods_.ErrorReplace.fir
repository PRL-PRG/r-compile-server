fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1536832960;
    st `.ErrorReplace` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1536832960(from, to, value) {
  (reg from:*, reg to:*, reg value:*) -+> V { var from:*, var to:*, var value:*, reg stop:cls, reg gettextf:cls, reg to1:*, reg to2:V, reg p:p(V +), reg dQuote:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg from1:*, reg from2:V, reg class:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg r9:V |
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
          if guard then L1() else L2();
        L0(r2):
          return r2;
        L1():
          from1 = ld from;
          from2 = force? from1;
          checkMissing(from2);
          class = ldf class in base;
          r3 = dyn class(from2);
          goto L0(r3);
        L2():
          r1 = dyn base(<sym from>);
          goto L0(r1);
        };
        r5 = dyn dQuote(p1);
        return r5;
      };
      r7 = dyn gettextf("no 'replace' method was defined for 'as(x, \"%s\") <- value' for class %s", p, p2);
      return r7;
    };
    r9 = dyn stop[, domain](p3, NA_LGL);
    check L1() else D1();
  D1():
    deopt 5 [r9];
  L1():
    popenv;
    return r9;
  }
}
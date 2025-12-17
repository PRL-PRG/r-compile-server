fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2945516096;
    st `.oldCoerceFun` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2945516096(from, strict) {
  (reg from:*, reg strict:*) -+> V { var from:*, var strict:*, reg strict_isMissing:L, reg strict_orDefault:*, reg strict1:*, reg strict2:V, reg c:L, reg stop:cls, reg gettextf:cls, reg paste:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg from1:*, reg from2:V, reg class:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg from3:*, reg from4:V |
    mkenv;
    st from = from;
    strict_isMissing = missing.0(strict);
    if strict_isMissing then L0(TRUE) else L0(strict);
  L0(strict_orDefault):
    st strict = strict_orDefault;
    strict1 = ld strict;
    check L3() else D0();
  D0():
    deopt 0 [strict1];
  L3():
    strict2 = force? strict1;
    checkMissing(strict2);
    c = `as.logical`(strict2);
    if c then L4() else L1();
  L1():
    goto L2();
  L2():
    from3 = ld from;
    check L8() else D3();
  L4():
    stop = ldf stop;
    check L5() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 10 [from3];
  L5():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        paste = ldf paste;
        p = prom<V +>{
          sym = ldf class;
          base = ldf class in base;
          guard = `==`.4(sym, base);
          if guard then L1() else L2();
        L0(r1):
          return r1;
        L1():
          from1 = ld from;
          from2 = force? from1;
          checkMissing(from2);
          class = ldf class in base;
          r2 = dyn class(from2);
          goto L0(r2);
        L2():
          r = dyn base(<sym from>);
          goto L0(r);
        };
        r4 = dyn paste[, collapse](p, ", ");
        return r4;
      };
      r6 = dyn gettextf("explicit coercion of old-style class (%s) is not defined", p1);
      return r6;
    };
    r8 = dyn stop[, domain](p2, NA_LGL);
    check L6() else D2();
  L8():
    from4 = force? from3;
    checkMissing(from4);
    popenv;
    return from4;
  D2():
    deopt 7 [r8];
  L6():
    goto L2();
  }
}
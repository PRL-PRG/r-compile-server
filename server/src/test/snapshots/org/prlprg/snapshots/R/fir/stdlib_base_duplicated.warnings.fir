fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3117001256;
    st `duplicated.warnings` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3117001256(x, incomparables, `...`) {
  (reg x:*, reg incomparables:*, reg ddd:dots) -+> V { var x:*, var incomparables:*, reg incomparables_isMissing:L, reg incomparables_orDefault:*, var `...`:dots?, reg duplicated:cls, reg paste:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg names:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg as_character:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg incomparables1:*, reg incomparables2:V, reg p3:p(V +), reg ddd1:dots?, reg r11:V |
    mkenv;
    st x = x;
    incomparables_isMissing = missing.0(incomparables);
    if incomparables_isMissing then L0(FALSE) else L0(incomparables);
  L0(incomparables_orDefault):
    st incomparables = incomparables_orDefault;
    st `...` = ddd;
    duplicated = ldf duplicated;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p2 = prom<V +>{
      paste = ldf paste;
      p = prom<V +>{
        sym = ldf names;
        base = ldf names in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        names = ldf names in base;
        r2 = dyn names(x2);
        goto L0(r2);
      L2():
        r = dyn base(<sym x>);
        goto L0(r);
      };
      p1 = prom<V +>{
        sym1 = ldf `as.character`;
        base1 = ldf `as.character` in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r5):
        return r5;
      L1():
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        as_character = ldf `as.character` in base;
        r6 = dyn as_character(x4);
        goto L0(r6);
      L2():
        r4 = dyn base1(<sym x>);
        goto L0(r4);
      };
      r8 = dyn paste(p, p1);
      return r8;
    };
    p3 = prom<V +>{
      incomparables1 = ld incomparables;
      incomparables2 = force? incomparables1;
      checkMissing(incomparables2);
      return incomparables2;
    };
    ddd1 = ld `...`;
    r11 = dyn duplicated[, , `...`](p2, p3, ddd1);
    check L2() else D1();
  D1():
    deopt 5 [r11];
  L2():
    popenv;
    return r11;
  }
}
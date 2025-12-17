fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner503153204;
    st `$.DLLInfo` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner503153204(x, name) {
  (reg x:*, reg name:*) -+> V { var x:*, var name:*, reg getNativeSymbolInfo:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg name1:*, reg name2:V, reg as_character:cls, reg r2:V, reg p:p(V +), reg x1:*, reg x2:V, reg p1:p(V +), reg r5:V |
    mkenv;
    st x = x;
    st name = name;
    getNativeSymbolInfo = ldf getNativeSymbolInfo;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf `as.character`;
      base = ldf `as.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      as_character = ldf `as.character` in base;
      r2 = dyn as_character(name2);
      goto L0(r2);
    L2():
      r = dyn base(<sym name>);
      goto L0(r);
    };
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r5 = dyn getNativeSymbolInfo[, PACKAGE](p, p1);
    check L1() else D1();
  D1():
    deopt 5 [r5];
  L1():
    popenv;
    return r5;
  }
}
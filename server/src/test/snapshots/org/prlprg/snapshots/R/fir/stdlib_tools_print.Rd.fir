fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner912936234;
    st `print.Rd` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner912936234(x, deparse, `...`) {
  (reg x:*, reg deparse:*, reg ddd:dots) -+> V { var x:*, var deparse:*, reg deparse_isMissing:L, reg deparse_orDefault:*, var `...`:dots?, reg cat:cls, reg as_character_Rd:cls, reg x1:*, reg x2:V, reg p:p(V +), reg deparse1:*, reg deparse2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg invisible:cls, reg r7:V |
    mkenv;
    st x = x;
    deparse_isMissing = missing.0(deparse);
    if deparse_isMissing then L0(FALSE) else L0(deparse);
  L0(deparse_orDefault):
    st deparse = deparse_orDefault;
    st `...` = ddd;
    cat = ldf cat;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p2 = prom<V +>{
      as_character_Rd = ldf `as.character.Rd`;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      p1 = prom<V +>{
        deparse1 = ld deparse;
        deparse2 = force? deparse1;
        checkMissing(deparse2);
        return deparse2;
      };
      r2 = dyn as_character_Rd[, deparse](p, p1);
      return r2;
    };
    r4 = dyn cat[, sep](p2, "");
    check L3() else D1();
  D1():
    deopt 5 [r4];
  L3():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r6):
    popenv;
    return r6;
  L4():
    x3 = ld x;
    check L6() else D2();
  L5():
    r5 = dyn base(<sym x>);
    goto L1(r5);
  D2():
    deopt 8 [x3];
  L6():
    x4 = force? x3;
    checkMissing(x4);
    invisible = ldf invisible in base;
    r7 = dyn invisible(x4);
    check L7() else D3();
  D3():
    deopt 11 [r7];
  L7():
    goto L1(r7);
  }
}
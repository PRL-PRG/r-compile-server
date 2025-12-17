fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner862064591;
    st `print.aspell_inspect_context` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner862064591(x, `...`, byfile) {
  (reg x:*, reg ddd:dots, reg byfile:*) -+> V { var x:*, var `...`:dots?, var byfile:*, reg byfile_isMissing:L, reg byfile_orDefault:*, reg writeLines:cls, reg format:cls, reg x1:*, reg x2:V, reg p:p(V +), reg ddd1:dots?, reg byfile1:*, reg byfile2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg invisible:cls, reg r7:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    byfile_isMissing = missing.0(byfile);
    if byfile_isMissing then L0(FALSE) else L0(byfile);
  L0(byfile_orDefault):
    st byfile = byfile_orDefault;
    writeLines = ldf writeLines;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p2 = prom<V +>{
      format = ldf format;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      ddd1 = ld `...`;
      p1 = prom<V +>{
        byfile1 = ld byfile;
        byfile2 = force? byfile1;
        checkMissing(byfile2);
        return byfile2;
      };
      r2 = dyn format[, `...`, byfile](p, ddd1, p1);
      return r2;
    };
    r4 = dyn writeLines(p2);
    check L3() else D1();
  D1():
    deopt 3 [r4];
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
    deopt 6 [x3];
  L6():
    x4 = force? x3;
    checkMissing(x4);
    invisible = ldf invisible in base;
    r7 = dyn invisible(x4);
    check L7() else D3();
  D3():
    deopt 9 [r7];
  L7():
    goto L1(r7);
  }
}
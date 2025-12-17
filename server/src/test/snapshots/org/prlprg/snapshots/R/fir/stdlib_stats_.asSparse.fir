fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2296048169;
    st `.asSparse` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2296048169(m) {
  (reg m:*) -+> V { var m:*, reg suppressPackageStartupMessages:cls, reg requireNamespace:cls, reg r:V, reg p:p(V +), reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg gettextf:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg __:cls, reg r8:V, reg r9:cls, reg m1:*, reg m2:V, reg p2:p(V +), reg r11:V |
    mkenv;
    st m = m;
    suppressPackageStartupMessages = ldf suppressPackageStartupMessages;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      requireNamespace = ldf requireNamespace;
      r = dyn requireNamespace("Matrix");
      return r;
    };
    r2 = dyn suppressPackageStartupMessages(p);
    check L3() else D1();
  D1():
    deopt 3 [r2];
  L3():
    r3 = `!`(r2);
    c = `as.logical`(r3);
    if c then L4() else L0();
  L0():
    goto L1();
  L1():
    __ = ldf `::`;
    check L8() else D4();
  L4():
    stop = ldf stop;
    check L5() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 14 [];
  L5():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      r4 = dyn gettextf("%s needs package 'Matrix' correctly installed", "contr*(.., sparse=TRUE)");
      return r4;
    };
    r6 = dyn stop[, domain](p1, NA_LGL);
    check L6() else D3();
  L8():
    r8 = dyn __("methods", "as");
    check L9() else D5();
  D3():
    deopt 10 [r6];
  D5():
    deopt 17 [r8];
  L6():
    goto L1();
  L9():
    checkFun.0(r8);
    r9 = r8 as cls;
    p2 = prom<V +>{
      m1 = ld m;
      m2 = force? m1;
      checkMissing(m2);
      return m2;
    };
    r11 = dyn r9(p2, "sparseMatrix");
    check L10() else D6();
  D6():
    deopt 21 [r11];
  L10():
    popenv;
    return r11;
  }
}
fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1895723202;
    st Rd2HTML_NEWS_in_Rd = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1895723202(f, out, `...`) {
  (reg f:*, reg out:*, reg ddd:dots) -+> V { var f:*, var out:*, var `...`:dots?, reg endsWith:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg c:L, reg readRDS:cls, reg f3:*, reg f4:V, reg p1:p(V +), reg r3:V, reg Rd2HTML:cls, reg f5:*, reg f6:V, reg p2:p(V +), reg out1:*, reg out2:V, reg p3:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg p4:p(V +), reg file_path:cls, reg R_home:cls, reg r11:V, reg p5:p(V +), reg r13:V, reg p6:p(V +), reg ddd1:dots?, reg r15:V |
    mkenv;
    st f = f;
    st out = out;
    st `...` = ddd;
    endsWith = ldf endsWith;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r1 = dyn endsWith(p, ".rds");
    check L3() else D1();
  D1():
    deopt 4 [r1];
  L3():
    c = `as.logical`(r1);
    if c then L4() else L0();
  L0():
    goto L1();
  L1():
    Rd2HTML = ldf Rd2HTML;
    check L8() else D4();
  L4():
    readRDS = ldf readRDS;
    check L5() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 13 [];
  L5():
    p1 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    r3 = dyn readRDS(p1);
    check L6() else D3();
  L8():
    p2 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    p3 = prom<V +>{
      out1 = ld out;
      out2 = force? out1;
      checkMissing(out2);
      return out2;
    };
    p4 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c1 = ldf c in base;
      r9 = dyn c1("install", "render");
      goto L0(r9);
    L2():
      r7 = dyn base("install", "render");
      goto L0(r7);
    };
    p6 = prom<V +>{
      file_path = ldf `file.path`;
      p5 = prom<V +>{
        R_home = ldf `R.home`;
        r11 = dyn R_home("share");
        return r11;
      };
      r13 = dyn file_path(p5, "Rd", "macros", "system.Rd");
      return r13;
    };
    ddd1 = ld `...`;
    r15 = dyn Rd2HTML[, , stages, macros, `...`](p2, p3, p4, p6, ddd1);
    check L9() else D5();
  D3():
    deopt 8 [r3];
  D5():
    deopt 21 [r15];
  L6():
    st f = r3;
    goto L1();
  L9():
    popenv;
    return r15;
  }
}
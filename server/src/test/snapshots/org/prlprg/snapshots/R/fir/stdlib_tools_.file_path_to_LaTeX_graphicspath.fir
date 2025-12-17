fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.file_path_to_LaTeX_graphicspath` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg normalizePath:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sprintf:cls, reg paste:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg x3:*, reg x4:V, reg p3:p(V +), reg x5:*, reg x6:V, reg p4:p(V +), reg r10:V |
    mkenv;
    st x = x;
    normalizePath = ldf normalizePath;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn normalizePath(p, "/");
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    st x = r1;
    sprintf = ldf sprintf;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p2 = prom<V +>{
      paste = ldf paste;
      p1 = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r3):
        return r3;
      L1():
        c = ldf c in base;
        r4 = dyn c("\\makeatletter", "\\ifthenelse", "{\\boolean{Rd@graphicspath@needs@quotes}}", "{\\graphicspath{{\"%s/\"}}}", "{\\graphicspath{{%s/}}}", "\\makeatother");
        goto L0(r4);
      L2():
        r2 = dyn base("\\makeatletter", "\\ifthenelse", "{\\boolean{Rd@graphicspath@needs@quotes}}", "{\\graphicspath{{\"%s/\"}}}", "{\\graphicspath{{%s/}}}", "\\makeatother");
        goto L0(r2);
      };
      r6 = dyn paste[, collapse](p1, "");
      return r6;
    };
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r10 = dyn sprintf(p2, p3, p4);
    check L3() else D3();
  D3():
    deopt 11 [r10];
  L3():
    popenv;
    return r10;
  }
}
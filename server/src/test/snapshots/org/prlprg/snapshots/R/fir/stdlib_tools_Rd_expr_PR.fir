fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st Rd_expr_PR = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sprintf:cls, reg baseurl:*, reg baseurl1:V, reg p:p(V +), reg x1:*, reg x2:V, reg p1:p(V +), reg x3:*, reg x4:V, reg p2:p(V +), reg r3:V |
    mkenv;
    st x = x;
    st baseurl = "https://bugs.R-project.org/show_bug.cgi?id";
    sprintf = ldf sprintf;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      baseurl = ld baseurl;
      baseurl1 = force? baseurl;
      checkMissing(baseurl1);
      return baseurl1;
    };
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn sprintf("\\href{%s=%s}{PR#%s}", p, p1, p2);
    check L1() else D1();
  D1():
    deopt 9 [r3];
  L1():
    popenv;
    return r3;
  }
}
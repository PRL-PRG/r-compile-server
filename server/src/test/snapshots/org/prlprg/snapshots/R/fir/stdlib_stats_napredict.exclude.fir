fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner785164255;
    st `napredict.exclude` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner785164255(omit, x, `...`) {
  (reg omit:*, reg x:*, reg ddd:dots) -+> V { var omit:*, var x:*, var `...`:dots?, reg naresid_exclude:cls, reg omit1:*, reg omit2:V, reg p:p(V +), reg x1:*, reg x2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st omit = omit;
    st x = x;
    st `...` = ddd;
    naresid_exclude = ldf `naresid.exclude`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      omit1 = ld omit;
      omit2 = force? omit1;
      checkMissing(omit2);
      return omit2;
    };
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r2 = dyn naresid_exclude(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    popenv;
    return r2;
  }
}
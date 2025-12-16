fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1743446265`;
    st `as.vector.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1743446265`(x, mode) {
  (reg x:*, reg mode:*) -+> V { var x:*, var mode:*, reg mode_isMissing:L, reg mode_orDefault:*, reg as_vector:cls, reg as_list:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg mode1:*, reg mode2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st x = x;
    mode_isMissing = missing.0(mode);
    if mode_isMissing then L0("any") else L0(mode);
  L0(mode_orDefault):
    st mode = mode_orDefault;
    as_vector = ldf `as.vector`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p1 = prom<V +>{
      as_list = ldf `as.list`;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn as_list(p);
      return r1;
    };
    p2 = prom<V +>{
      mode1 = ld mode;
      mode2 = force? mode1;
      checkMissing(mode2);
      return mode2;
    };
    r4 = dyn as_vector(p1, p2);
    check L2() else D1();
  D1():
    deopt 4 [r4];
  L2():
    popenv;
    return r4;
  }
}
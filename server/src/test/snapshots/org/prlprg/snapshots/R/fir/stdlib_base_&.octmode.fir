fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3950065357;
    st `&.octmode` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3950065357(a, b) {
  (reg a:*, reg b:*) -+> V { var a:*, var b:*, reg as_octmode:cls, reg bitwAnd:cls, reg as_octmode1:cls, reg a1:*, reg a2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg as_octmode2:cls, reg b1:*, reg b2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V |
    mkenv;
    st a = a;
    st b = b;
    as_octmode = ldf `as.octmode`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p4 = prom<V +>{
      bitwAnd = ldf bitwAnd;
      p1 = prom<V +>{
        as_octmode1 = ldf `as.octmode`;
        p = prom<V +>{
          a1 = ld a;
          a2 = force? a1;
          checkMissing(a2);
          return a2;
        };
        r1 = dyn as_octmode1(p);
        return r1;
      };
      p3 = prom<V +>{
        as_octmode2 = ldf `as.octmode`;
        p2 = prom<V +>{
          b1 = ld b;
          b2 = force? b1;
          checkMissing(b2);
          return b2;
        };
        r4 = dyn as_octmode2(p2);
        return r4;
      };
      r6 = dyn bitwAnd(p1, p3);
      return r6;
    };
    r8 = dyn as_octmode(p4);
    check L1() else D1();
  D1():
    deopt 3 [r8];
  L1():
    popenv;
    return r8;
  }
}
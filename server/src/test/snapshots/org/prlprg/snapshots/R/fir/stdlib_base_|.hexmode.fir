fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3950065357;
    st `|.hexmode` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3950065357(a, b) {
  (reg a:*, reg b:*) -+> V { var a:*, var b:*, reg as_hexmode:cls, reg bitwOr:cls, reg as_hexmode1:cls, reg a1:*, reg a2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg as_hexmode2:cls, reg b1:*, reg b2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V |
    mkenv;
    st a = a;
    st b = b;
    as_hexmode = ldf `as.hexmode`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p4 = prom<V +>{
      bitwOr = ldf bitwOr;
      p1 = prom<V +>{
        as_hexmode1 = ldf `as.hexmode`;
        p = prom<V +>{
          a1 = ld a;
          a2 = force? a1;
          checkMissing(a2);
          return a2;
        };
        r1 = dyn as_hexmode1(p);
        return r1;
      };
      p3 = prom<V +>{
        as_hexmode2 = ldf `as.hexmode`;
        p2 = prom<V +>{
          b1 = ld b;
          b2 = force? b1;
          checkMissing(b2);
          return b2;
        };
        r4 = dyn as_hexmode2(p2);
        return r4;
      };
      r6 = dyn bitwOr(p1, p3);
      return r6;
    };
    r8 = dyn as_hexmode(p4);
    check L1() else D1();
  D1():
    deopt 3 [r8];
  L1():
    popenv;
    return r8;
  }
}
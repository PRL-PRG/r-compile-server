fun main() {
  () -+> V { reg r:cls, reg l:*, reg ___:cls, reg r1:V |
    mkenv;
    r = clos inner119611165;
    l = ld `.octmode`;
    ___ = ldf `!<-`;
    check L0() else D0();
  D0():
    deopt 3 [r, l, r];
  L0():
    r1 = dyn ___(l, NULL, r);
    check L1() else D1();
  D1():
    deopt 5 [r, r1];
  L1():
    st `.octmode` = r1;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner119611165(a) {
  (reg a:*) -+> V { var a:*, reg as_octmode:cls, reg bitwNot:cls, reg as_octmode1:cls, reg a1:*, reg a2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st a = a;
    as_octmode = ldf `as.octmode`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      bitwNot = ldf bitwNot;
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
      r3 = dyn bitwNot(p1);
      return r3;
    };
    r5 = dyn as_octmode(p2);
    check L1() else D1();
  D1():
    deopt 3 [r5];
  L1():
    popenv;
    return r5;
  }
}
fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3810887275;
    st warnRd = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3810887275(block, Rdfile, `...`) {
  (reg block:*, reg Rdfile:*, reg ddd:dots) -+> V { var block:*, var Rdfile:*, var `...`:dots?, reg _makeMessageRd:cls, reg block1:*, reg block2:V, reg p:p(V +), reg Rdfile1:*, reg Rdfile2:V, reg p1:p(V +), reg ddd1:dots?, reg r2:V, reg warning:cls, reg msg:*, reg msg1:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st block = block;
    st Rdfile = Rdfile;
    st `...` = ddd;
    _makeMessageRd = ldf `.makeMessageRd`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      block1 = ld block;
      block2 = force? block1;
      checkMissing(block2);
      return block2;
    };
    p1 = prom<V +>{
      Rdfile1 = ld Rdfile;
      Rdfile2 = force? Rdfile1;
      checkMissing(Rdfile2);
      return Rdfile2;
    };
    ddd1 = ld `...`;
    r2 = dyn _makeMessageRd[, , `...`](p, p1, ddd1);
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    st msg = r2;
    warning = ldf warning;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p2 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r4 = dyn warning[, `call.`, domain, `immediate.`](p2, FALSE, NA_LGL, TRUE);
    check L3() else D3();
  D3():
    deopt 16 [r4];
  L3():
    popenv;
    return r4;
  }
}
fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner209421848;
    st `.handleSimpleError` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner209421848(h, msg, call) {
  (reg h:*, reg msg:*, reg call:*) -+> V { var h:*, var msg:*, var call:*, reg h1:cls, reg simpleError:cls, reg msg1:*, reg msg2:V, reg p:p(V +), reg call1:*, reg call2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st h = h;
    st msg = msg;
    st call = call;
    h1 = ldf h;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      simpleError = ldf simpleError;
      p = prom<V +>{
        msg1 = ld msg;
        msg2 = force? msg1;
        checkMissing(msg2);
        return msg2;
      };
      p1 = prom<V +>{
        call1 = ld call;
        call2 = force? call1;
        checkMissing(call2);
        return call2;
      };
      r2 = dyn simpleError(p, p1);
      return r2;
    };
    r4 = dyn h1(p2);
    check L1() else D1();
  D1():
    deopt 3 [r4];
  L1():
    popenv;
    return r4;
  }
}